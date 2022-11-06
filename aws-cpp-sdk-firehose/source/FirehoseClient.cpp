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

#include <aws/firehose/FirehoseClient.h>
#include <aws/firehose/FirehoseErrorMarshaller.h>
#include <aws/firehose/FirehoseEndpointProvider.h>
#include <aws/firehose/model/CreateDeliveryStreamRequest.h>
#include <aws/firehose/model/DeleteDeliveryStreamRequest.h>
#include <aws/firehose/model/DescribeDeliveryStreamRequest.h>
#include <aws/firehose/model/ListDeliveryStreamsRequest.h>
#include <aws/firehose/model/ListTagsForDeliveryStreamRequest.h>
#include <aws/firehose/model/PutRecordRequest.h>
#include <aws/firehose/model/PutRecordBatchRequest.h>
#include <aws/firehose/model/StartDeliveryStreamEncryptionRequest.h>
#include <aws/firehose/model/StopDeliveryStreamEncryptionRequest.h>
#include <aws/firehose/model/TagDeliveryStreamRequest.h>
#include <aws/firehose/model/UntagDeliveryStreamRequest.h>
#include <aws/firehose/model/UpdateDestinationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Firehose;
using namespace Aws::Firehose::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* FirehoseClient::SERVICE_NAME = "firehose";
const char* FirehoseClient::ALLOCATION_TAG = "FirehoseClient";

FirehoseClient::FirehoseClient(const Firehose::FirehoseClientConfiguration& clientConfiguration,
                               std::shared_ptr<FirehoseEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FirehoseErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

FirehoseClient::FirehoseClient(const AWSCredentials& credentials,
                               std::shared_ptr<FirehoseEndpointProviderBase> endpointProvider,
                               const Firehose::FirehoseClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FirehoseErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

FirehoseClient::FirehoseClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<FirehoseEndpointProviderBase> endpointProvider,
                               const Firehose::FirehoseClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FirehoseErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  FirehoseClient::FirehoseClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FirehoseErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<FirehoseEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

FirehoseClient::FirehoseClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FirehoseErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<FirehoseEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

FirehoseClient::FirehoseClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FirehoseErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<FirehoseEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
FirehoseClient::~FirehoseClient()
{
}

std::shared_ptr<FirehoseEndpointProviderBase>& FirehoseClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void FirehoseClient::init(const Firehose::FirehoseClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Firehose");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void FirehoseClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateDeliveryStreamOutcome FirehoseClient::CreateDeliveryStream(const CreateDeliveryStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDeliveryStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDeliveryStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDeliveryStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeliveryStreamOutcomeCallable FirehoseClient::CreateDeliveryStreamCallable(const CreateDeliveryStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeliveryStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeliveryStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FirehoseClient::CreateDeliveryStreamAsync(const CreateDeliveryStreamRequest& request, const CreateDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDeliveryStream(request), context);
    } );
}

DeleteDeliveryStreamOutcome FirehoseClient::DeleteDeliveryStream(const DeleteDeliveryStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDeliveryStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDeliveryStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDeliveryStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDeliveryStreamOutcomeCallable FirehoseClient::DeleteDeliveryStreamCallable(const DeleteDeliveryStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeliveryStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDeliveryStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FirehoseClient::DeleteDeliveryStreamAsync(const DeleteDeliveryStreamRequest& request, const DeleteDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDeliveryStream(request), context);
    } );
}

DescribeDeliveryStreamOutcome FirehoseClient::DescribeDeliveryStream(const DescribeDeliveryStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDeliveryStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDeliveryStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDeliveryStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDeliveryStreamOutcomeCallable FirehoseClient::DescribeDeliveryStreamCallable(const DescribeDeliveryStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDeliveryStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDeliveryStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FirehoseClient::DescribeDeliveryStreamAsync(const DescribeDeliveryStreamRequest& request, const DescribeDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDeliveryStream(request), context);
    } );
}

ListDeliveryStreamsOutcome FirehoseClient::ListDeliveryStreams(const ListDeliveryStreamsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDeliveryStreams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDeliveryStreams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDeliveryStreamsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDeliveryStreamsOutcomeCallable FirehoseClient::ListDeliveryStreamsCallable(const ListDeliveryStreamsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeliveryStreamsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeliveryStreams(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FirehoseClient::ListDeliveryStreamsAsync(const ListDeliveryStreamsRequest& request, const ListDeliveryStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDeliveryStreams(request), context);
    } );
}

ListTagsForDeliveryStreamOutcome FirehoseClient::ListTagsForDeliveryStream(const ListTagsForDeliveryStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForDeliveryStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForDeliveryStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForDeliveryStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForDeliveryStreamOutcomeCallable FirehoseClient::ListTagsForDeliveryStreamCallable(const ListTagsForDeliveryStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForDeliveryStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForDeliveryStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FirehoseClient::ListTagsForDeliveryStreamAsync(const ListTagsForDeliveryStreamRequest& request, const ListTagsForDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForDeliveryStream(request), context);
    } );
}

PutRecordOutcome FirehoseClient::PutRecord(const PutRecordRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutRecordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRecordOutcomeCallable FirehoseClient::PutRecordCallable(const PutRecordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRecordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRecord(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FirehoseClient::PutRecordAsync(const PutRecordRequest& request, const PutRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutRecord(request), context);
    } );
}

PutRecordBatchOutcome FirehoseClient::PutRecordBatch(const PutRecordBatchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutRecordBatch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutRecordBatch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutRecordBatchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRecordBatchOutcomeCallable FirehoseClient::PutRecordBatchCallable(const PutRecordBatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRecordBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRecordBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FirehoseClient::PutRecordBatchAsync(const PutRecordBatchRequest& request, const PutRecordBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutRecordBatch(request), context);
    } );
}

StartDeliveryStreamEncryptionOutcome FirehoseClient::StartDeliveryStreamEncryption(const StartDeliveryStreamEncryptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartDeliveryStreamEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartDeliveryStreamEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartDeliveryStreamEncryptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartDeliveryStreamEncryptionOutcomeCallable FirehoseClient::StartDeliveryStreamEncryptionCallable(const StartDeliveryStreamEncryptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDeliveryStreamEncryptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDeliveryStreamEncryption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FirehoseClient::StartDeliveryStreamEncryptionAsync(const StartDeliveryStreamEncryptionRequest& request, const StartDeliveryStreamEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartDeliveryStreamEncryption(request), context);
    } );
}

StopDeliveryStreamEncryptionOutcome FirehoseClient::StopDeliveryStreamEncryption(const StopDeliveryStreamEncryptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopDeliveryStreamEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopDeliveryStreamEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopDeliveryStreamEncryptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopDeliveryStreamEncryptionOutcomeCallable FirehoseClient::StopDeliveryStreamEncryptionCallable(const StopDeliveryStreamEncryptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopDeliveryStreamEncryptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopDeliveryStreamEncryption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FirehoseClient::StopDeliveryStreamEncryptionAsync(const StopDeliveryStreamEncryptionRequest& request, const StopDeliveryStreamEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopDeliveryStreamEncryption(request), context);
    } );
}

TagDeliveryStreamOutcome FirehoseClient::TagDeliveryStream(const TagDeliveryStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagDeliveryStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagDeliveryStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagDeliveryStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagDeliveryStreamOutcomeCallable FirehoseClient::TagDeliveryStreamCallable(const TagDeliveryStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagDeliveryStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagDeliveryStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FirehoseClient::TagDeliveryStreamAsync(const TagDeliveryStreamRequest& request, const TagDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagDeliveryStream(request), context);
    } );
}

UntagDeliveryStreamOutcome FirehoseClient::UntagDeliveryStream(const UntagDeliveryStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagDeliveryStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagDeliveryStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagDeliveryStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagDeliveryStreamOutcomeCallable FirehoseClient::UntagDeliveryStreamCallable(const UntagDeliveryStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagDeliveryStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagDeliveryStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FirehoseClient::UntagDeliveryStreamAsync(const UntagDeliveryStreamRequest& request, const UntagDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagDeliveryStream(request), context);
    } );
}

UpdateDestinationOutcome FirehoseClient::UpdateDestination(const UpdateDestinationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDestinationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDestinationOutcomeCallable FirehoseClient::UpdateDestinationCallable(const UpdateDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FirehoseClient::UpdateDestinationAsync(const UpdateDestinationRequest& request, const UpdateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDestination(request), context);
    } );
}

