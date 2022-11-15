/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/event/EventStream.h>

#include <aws/kinesis/KinesisClient.h>
#include <aws/kinesis/KinesisErrorMarshaller.h>
#include <aws/kinesis/KinesisEndpointProvider.h>
#include <aws/kinesis/model/AddTagsToStreamRequest.h>
#include <aws/kinesis/model/CreateStreamRequest.h>
#include <aws/kinesis/model/DecreaseStreamRetentionPeriodRequest.h>
#include <aws/kinesis/model/DeleteStreamRequest.h>
#include <aws/kinesis/model/DeregisterStreamConsumerRequest.h>
#include <aws/kinesis/model/DescribeLimitsRequest.h>
#include <aws/kinesis/model/DescribeStreamRequest.h>
#include <aws/kinesis/model/DescribeStreamConsumerRequest.h>
#include <aws/kinesis/model/DescribeStreamSummaryRequest.h>
#include <aws/kinesis/model/DisableEnhancedMonitoringRequest.h>
#include <aws/kinesis/model/EnableEnhancedMonitoringRequest.h>
#include <aws/kinesis/model/GetRecordsRequest.h>
#include <aws/kinesis/model/GetShardIteratorRequest.h>
#include <aws/kinesis/model/IncreaseStreamRetentionPeriodRequest.h>
#include <aws/kinesis/model/ListShardsRequest.h>
#include <aws/kinesis/model/ListStreamConsumersRequest.h>
#include <aws/kinesis/model/ListStreamsRequest.h>
#include <aws/kinesis/model/ListTagsForStreamRequest.h>
#include <aws/kinesis/model/MergeShardsRequest.h>
#include <aws/kinesis/model/PutRecordRequest.h>
#include <aws/kinesis/model/PutRecordsRequest.h>
#include <aws/kinesis/model/RegisterStreamConsumerRequest.h>
#include <aws/kinesis/model/RemoveTagsFromStreamRequest.h>
#include <aws/kinesis/model/SplitShardRequest.h>
#include <aws/kinesis/model/StartStreamEncryptionRequest.h>
#include <aws/kinesis/model/StopStreamEncryptionRequest.h>
#include <aws/kinesis/model/SubscribeToShardRequest.h>
#include <aws/kinesis/model/UpdateShardCountRequest.h>
#include <aws/kinesis/model/UpdateStreamModeRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Kinesis;
using namespace Aws::Kinesis::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* KinesisClient::SERVICE_NAME = "kinesis";
const char* KinesisClient::ALLOCATION_TAG = "KinesisClient";

KinesisClient::KinesisClient(const Kinesis::KinesisClientConfiguration& clientConfiguration,
                             std::shared_ptr<KinesisEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

KinesisClient::KinesisClient(const AWSCredentials& credentials,
                             std::shared_ptr<KinesisEndpointProviderBase> endpointProvider,
                             const Kinesis::KinesisClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

KinesisClient::KinesisClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<KinesisEndpointProviderBase> endpointProvider,
                             const Kinesis::KinesisClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  KinesisClient::KinesisClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<KinesisEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

KinesisClient::KinesisClient(const AWSCredentials& credentials,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<KinesisEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

KinesisClient::KinesisClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<KinesisEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
KinesisClient::~KinesisClient()
{
}

std::shared_ptr<KinesisEndpointProviderBase>& KinesisClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void KinesisClient::init(const Kinesis::KinesisClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Kinesis");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void KinesisClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AddTagsToStreamOutcome KinesisClient::AddTagsToStream(const AddTagsToStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddTagsToStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddTagsToStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddTagsToStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddTagsToStreamOutcomeCallable KinesisClient::AddTagsToStreamCallable(const AddTagsToStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::AddTagsToStreamAsync(const AddTagsToStreamRequest& request, const AddTagsToStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddTagsToStream(request), context);
    } );
}

CreateStreamOutcome KinesisClient::CreateStream(const CreateStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStreamOutcomeCallable KinesisClient::CreateStreamCallable(const CreateStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::CreateStreamAsync(const CreateStreamRequest& request, const CreateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateStream(request), context);
    } );
}

DecreaseStreamRetentionPeriodOutcome KinesisClient::DecreaseStreamRetentionPeriod(const DecreaseStreamRetentionPeriodRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DecreaseStreamRetentionPeriod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DecreaseStreamRetentionPeriod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DecreaseStreamRetentionPeriodOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DecreaseStreamRetentionPeriodOutcomeCallable KinesisClient::DecreaseStreamRetentionPeriodCallable(const DecreaseStreamRetentionPeriodRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DecreaseStreamRetentionPeriodOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DecreaseStreamRetentionPeriod(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::DecreaseStreamRetentionPeriodAsync(const DecreaseStreamRetentionPeriodRequest& request, const DecreaseStreamRetentionPeriodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DecreaseStreamRetentionPeriod(request), context);
    } );
}

DeleteStreamOutcome KinesisClient::DeleteStream(const DeleteStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteStreamOutcomeCallable KinesisClient::DeleteStreamCallable(const DeleteStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::DeleteStreamAsync(const DeleteStreamRequest& request, const DeleteStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteStream(request), context);
    } );
}

DeregisterStreamConsumerOutcome KinesisClient::DeregisterStreamConsumer(const DeregisterStreamConsumerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterStreamConsumer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterStreamConsumer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterStreamConsumerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterStreamConsumerOutcomeCallable KinesisClient::DeregisterStreamConsumerCallable(const DeregisterStreamConsumerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterStreamConsumerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterStreamConsumer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::DeregisterStreamConsumerAsync(const DeregisterStreamConsumerRequest& request, const DeregisterStreamConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeregisterStreamConsumer(request), context);
    } );
}

DescribeLimitsOutcome KinesisClient::DescribeLimits(const DescribeLimitsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLimitsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLimitsOutcomeCallable KinesisClient::DescribeLimitsCallable(const DescribeLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::DescribeLimitsAsync(const DescribeLimitsRequest& request, const DescribeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLimits(request), context);
    } );
}

DescribeStreamOutcome KinesisClient::DescribeStream(const DescribeStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStreamOutcomeCallable KinesisClient::DescribeStreamCallable(const DescribeStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::DescribeStreamAsync(const DescribeStreamRequest& request, const DescribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStream(request), context);
    } );
}

DescribeStreamConsumerOutcome KinesisClient::DescribeStreamConsumer(const DescribeStreamConsumerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStreamConsumer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStreamConsumer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStreamConsumerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStreamConsumerOutcomeCallable KinesisClient::DescribeStreamConsumerCallable(const DescribeStreamConsumerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStreamConsumerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStreamConsumer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::DescribeStreamConsumerAsync(const DescribeStreamConsumerRequest& request, const DescribeStreamConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStreamConsumer(request), context);
    } );
}

DescribeStreamSummaryOutcome KinesisClient::DescribeStreamSummary(const DescribeStreamSummaryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStreamSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStreamSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStreamSummaryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStreamSummaryOutcomeCallable KinesisClient::DescribeStreamSummaryCallable(const DescribeStreamSummaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStreamSummaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStreamSummary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::DescribeStreamSummaryAsync(const DescribeStreamSummaryRequest& request, const DescribeStreamSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStreamSummary(request), context);
    } );
}

DisableEnhancedMonitoringOutcome KinesisClient::DisableEnhancedMonitoring(const DisableEnhancedMonitoringRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableEnhancedMonitoring, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableEnhancedMonitoring, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableEnhancedMonitoringOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableEnhancedMonitoringOutcomeCallable KinesisClient::DisableEnhancedMonitoringCallable(const DisableEnhancedMonitoringRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableEnhancedMonitoringOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableEnhancedMonitoring(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::DisableEnhancedMonitoringAsync(const DisableEnhancedMonitoringRequest& request, const DisableEnhancedMonitoringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisableEnhancedMonitoring(request), context);
    } );
}

EnableEnhancedMonitoringOutcome KinesisClient::EnableEnhancedMonitoring(const EnableEnhancedMonitoringRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableEnhancedMonitoring, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableEnhancedMonitoring, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableEnhancedMonitoringOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableEnhancedMonitoringOutcomeCallable KinesisClient::EnableEnhancedMonitoringCallable(const EnableEnhancedMonitoringRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableEnhancedMonitoringOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableEnhancedMonitoring(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::EnableEnhancedMonitoringAsync(const EnableEnhancedMonitoringRequest& request, const EnableEnhancedMonitoringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, EnableEnhancedMonitoring(request), context);
    } );
}

GetRecordsOutcome KinesisClient::GetRecords(const GetRecordsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRecordsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRecordsOutcomeCallable KinesisClient::GetRecordsCallable(const GetRecordsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRecordsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRecords(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::GetRecordsAsync(const GetRecordsRequest& request, const GetRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRecords(request), context);
    } );
}

GetShardIteratorOutcome KinesisClient::GetShardIterator(const GetShardIteratorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetShardIterator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetShardIterator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetShardIteratorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetShardIteratorOutcomeCallable KinesisClient::GetShardIteratorCallable(const GetShardIteratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetShardIteratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetShardIterator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::GetShardIteratorAsync(const GetShardIteratorRequest& request, const GetShardIteratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetShardIterator(request), context);
    } );
}

IncreaseStreamRetentionPeriodOutcome KinesisClient::IncreaseStreamRetentionPeriod(const IncreaseStreamRetentionPeriodRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, IncreaseStreamRetentionPeriod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, IncreaseStreamRetentionPeriod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return IncreaseStreamRetentionPeriodOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

IncreaseStreamRetentionPeriodOutcomeCallable KinesisClient::IncreaseStreamRetentionPeriodCallable(const IncreaseStreamRetentionPeriodRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< IncreaseStreamRetentionPeriodOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->IncreaseStreamRetentionPeriod(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::IncreaseStreamRetentionPeriodAsync(const IncreaseStreamRetentionPeriodRequest& request, const IncreaseStreamRetentionPeriodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, IncreaseStreamRetentionPeriod(request), context);
    } );
}

ListShardsOutcome KinesisClient::ListShards(const ListShardsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListShards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListShards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListShardsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListShardsOutcomeCallable KinesisClient::ListShardsCallable(const ListShardsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListShardsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListShards(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::ListShardsAsync(const ListShardsRequest& request, const ListShardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListShards(request), context);
    } );
}

ListStreamConsumersOutcome KinesisClient::ListStreamConsumers(const ListStreamConsumersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStreamConsumers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStreamConsumers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListStreamConsumersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStreamConsumersOutcomeCallable KinesisClient::ListStreamConsumersCallable(const ListStreamConsumersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStreamConsumersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStreamConsumers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::ListStreamConsumersAsync(const ListStreamConsumersRequest& request, const ListStreamConsumersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListStreamConsumers(request), context);
    } );
}

ListStreamsOutcome KinesisClient::ListStreams(const ListStreamsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStreams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStreams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListStreamsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStreamsOutcomeCallable KinesisClient::ListStreamsCallable(const ListStreamsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStreamsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStreams(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::ListStreamsAsync(const ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListStreams(request), context);
    } );
}

ListTagsForStreamOutcome KinesisClient::ListTagsForStream(const ListTagsForStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForStreamOutcomeCallable KinesisClient::ListTagsForStreamCallable(const ListTagsForStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::ListTagsForStreamAsync(const ListTagsForStreamRequest& request, const ListTagsForStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForStream(request), context);
    } );
}

MergeShardsOutcome KinesisClient::MergeShards(const MergeShardsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MergeShards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MergeShards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return MergeShardsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MergeShardsOutcomeCallable KinesisClient::MergeShardsCallable(const MergeShardsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< MergeShardsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->MergeShards(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::MergeShardsAsync(const MergeShardsRequest& request, const MergeShardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, MergeShards(request), context);
    } );
}

PutRecordOutcome KinesisClient::PutRecord(const PutRecordRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutRecordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRecordOutcomeCallable KinesisClient::PutRecordCallable(const PutRecordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRecordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRecord(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::PutRecordAsync(const PutRecordRequest& request, const PutRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutRecord(request), context);
    } );
}

PutRecordsOutcome KinesisClient::PutRecords(const PutRecordsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutRecordsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRecordsOutcomeCallable KinesisClient::PutRecordsCallable(const PutRecordsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRecordsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRecords(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::PutRecordsAsync(const PutRecordsRequest& request, const PutRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutRecords(request), context);
    } );
}

RegisterStreamConsumerOutcome KinesisClient::RegisterStreamConsumer(const RegisterStreamConsumerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterStreamConsumer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterStreamConsumer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterStreamConsumerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterStreamConsumerOutcomeCallable KinesisClient::RegisterStreamConsumerCallable(const RegisterStreamConsumerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterStreamConsumerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterStreamConsumer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::RegisterStreamConsumerAsync(const RegisterStreamConsumerRequest& request, const RegisterStreamConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterStreamConsumer(request), context);
    } );
}

RemoveTagsFromStreamOutcome KinesisClient::RemoveTagsFromStream(const RemoveTagsFromStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveTagsFromStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveTagsFromStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RemoveTagsFromStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveTagsFromStreamOutcomeCallable KinesisClient::RemoveTagsFromStreamCallable(const RemoveTagsFromStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::RemoveTagsFromStreamAsync(const RemoveTagsFromStreamRequest& request, const RemoveTagsFromStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveTagsFromStream(request), context);
    } );
}

SplitShardOutcome KinesisClient::SplitShard(const SplitShardRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SplitShard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SplitShard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SplitShardOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SplitShardOutcomeCallable KinesisClient::SplitShardCallable(const SplitShardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SplitShardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SplitShard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::SplitShardAsync(const SplitShardRequest& request, const SplitShardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SplitShard(request), context);
    } );
}

StartStreamEncryptionOutcome KinesisClient::StartStreamEncryption(const StartStreamEncryptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartStreamEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartStreamEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartStreamEncryptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartStreamEncryptionOutcomeCallable KinesisClient::StartStreamEncryptionCallable(const StartStreamEncryptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartStreamEncryptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartStreamEncryption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::StartStreamEncryptionAsync(const StartStreamEncryptionRequest& request, const StartStreamEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartStreamEncryption(request), context);
    } );
}

StopStreamEncryptionOutcome KinesisClient::StopStreamEncryption(const StopStreamEncryptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopStreamEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopStreamEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopStreamEncryptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopStreamEncryptionOutcomeCallable KinesisClient::StopStreamEncryptionCallable(const StopStreamEncryptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopStreamEncryptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopStreamEncryption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::StopStreamEncryptionAsync(const StopStreamEncryptionRequest& request, const StopStreamEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopStreamEncryption(request), context);
    } );
}

SubscribeToShardOutcome KinesisClient::SubscribeToShard(SubscribeToShardRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SubscribeToShard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SubscribeToShard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  request.SetResponseStreamFactory(
      [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
  );
  return SubscribeToShardOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

SubscribeToShardOutcomeCallable KinesisClient::SubscribeToShardCallable(SubscribeToShardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SubscribeToShardOutcome() > >(ALLOCATION_TAG, [this, &request](){ return this->SubscribeToShard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::SubscribeToShardAsync(SubscribeToShardRequest& request, const SubscribeToShardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, &request, handler, context]()
    {
      handler(this, request, SubscribeToShard(request), context);
    } );
}

UpdateShardCountOutcome KinesisClient::UpdateShardCount(const UpdateShardCountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateShardCount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateShardCount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateShardCountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateShardCountOutcomeCallable KinesisClient::UpdateShardCountCallable(const UpdateShardCountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateShardCountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateShardCount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::UpdateShardCountAsync(const UpdateShardCountRequest& request, const UpdateShardCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateShardCount(request), context);
    } );
}

UpdateStreamModeOutcome KinesisClient::UpdateStreamMode(const UpdateStreamModeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateStreamMode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateStreamMode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateStreamModeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateStreamModeOutcomeCallable KinesisClient::UpdateStreamModeCallable(const UpdateStreamModeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStreamModeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStreamMode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClient::UpdateStreamModeAsync(const UpdateStreamModeRequest& request, const UpdateStreamModeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateStreamMode(request), context);
    } );
}

