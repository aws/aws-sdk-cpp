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
#include <aws/core/utils/event/EventStream.h>

#include <aws/kinesis/KinesisClient.h>
#include <aws/kinesis/KinesisEndpoint.h>
#include <aws/kinesis/KinesisErrorMarshaller.h>
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

static const char* SERVICE_NAME = "kinesis";
static const char* ALLOCATION_TAG = "KinesisClient";

KinesisClient::KinesisClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KinesisClient::KinesisClient(const AWSCredentials& credentials,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KinesisClient::KinesisClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KinesisClient::~KinesisClient()
{
}

void KinesisClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Kinesis");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + KinesisEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void KinesisClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

AddTagsToStreamOutcome KinesisClient::AddTagsToStream(const AddTagsToStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddTagsToStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddTagsToStreamOutcomeCallable KinesisClient::AddTagsToStreamCallable(const AddTagsToStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientAddTagsToStreamAsyncHelper(KinesisClient const * const clientThis, const AddTagsToStreamRequest& request, const AddTagsToStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddTagsToStream(request), context);
}

void KinesisClient::AddTagsToStreamAsync(const AddTagsToStreamRequest& request, const AddTagsToStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientAddTagsToStreamAsyncHelper( this, request, handler, context ); } );
}

CreateStreamOutcome KinesisClient::CreateStream(const CreateStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStreamOutcomeCallable KinesisClient::CreateStreamCallable(const CreateStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientCreateStreamAsyncHelper(KinesisClient const * const clientThis, const CreateStreamRequest& request, const CreateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateStream(request), context);
}

void KinesisClient::CreateStreamAsync(const CreateStreamRequest& request, const CreateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientCreateStreamAsyncHelper( this, request, handler, context ); } );
}

DecreaseStreamRetentionPeriodOutcome KinesisClient::DecreaseStreamRetentionPeriod(const DecreaseStreamRetentionPeriodRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DecreaseStreamRetentionPeriodOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DecreaseStreamRetentionPeriodOutcomeCallable KinesisClient::DecreaseStreamRetentionPeriodCallable(const DecreaseStreamRetentionPeriodRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DecreaseStreamRetentionPeriodOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DecreaseStreamRetentionPeriod(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientDecreaseStreamRetentionPeriodAsyncHelper(KinesisClient const * const clientThis, const DecreaseStreamRetentionPeriodRequest& request, const DecreaseStreamRetentionPeriodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DecreaseStreamRetentionPeriod(request), context);
}

void KinesisClient::DecreaseStreamRetentionPeriodAsync(const DecreaseStreamRetentionPeriodRequest& request, const DecreaseStreamRetentionPeriodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientDecreaseStreamRetentionPeriodAsyncHelper( this, request, handler, context ); } );
}

DeleteStreamOutcome KinesisClient::DeleteStream(const DeleteStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteStreamOutcomeCallable KinesisClient::DeleteStreamCallable(const DeleteStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientDeleteStreamAsyncHelper(KinesisClient const * const clientThis, const DeleteStreamRequest& request, const DeleteStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteStream(request), context);
}

void KinesisClient::DeleteStreamAsync(const DeleteStreamRequest& request, const DeleteStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientDeleteStreamAsyncHelper( this, request, handler, context ); } );
}

DeregisterStreamConsumerOutcome KinesisClient::DeregisterStreamConsumer(const DeregisterStreamConsumerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterStreamConsumerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterStreamConsumerOutcomeCallable KinesisClient::DeregisterStreamConsumerCallable(const DeregisterStreamConsumerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterStreamConsumerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterStreamConsumer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientDeregisterStreamConsumerAsyncHelper(KinesisClient const * const clientThis, const DeregisterStreamConsumerRequest& request, const DeregisterStreamConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterStreamConsumer(request), context);
}

void KinesisClient::DeregisterStreamConsumerAsync(const DeregisterStreamConsumerRequest& request, const DeregisterStreamConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientDeregisterStreamConsumerAsyncHelper( this, request, handler, context ); } );
}

DescribeLimitsOutcome KinesisClient::DescribeLimits(const DescribeLimitsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLimitsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLimitsOutcomeCallable KinesisClient::DescribeLimitsCallable(const DescribeLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientDescribeLimitsAsyncHelper(KinesisClient const * const clientThis, const DescribeLimitsRequest& request, const DescribeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLimits(request), context);
}

void KinesisClient::DescribeLimitsAsync(const DescribeLimitsRequest& request, const DescribeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientDescribeLimitsAsyncHelper( this, request, handler, context ); } );
}

DescribeStreamOutcome KinesisClient::DescribeStream(const DescribeStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStreamOutcomeCallable KinesisClient::DescribeStreamCallable(const DescribeStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientDescribeStreamAsyncHelper(KinesisClient const * const clientThis, const DescribeStreamRequest& request, const DescribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeStream(request), context);
}

void KinesisClient::DescribeStreamAsync(const DescribeStreamRequest& request, const DescribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientDescribeStreamAsyncHelper( this, request, handler, context ); } );
}

DescribeStreamConsumerOutcome KinesisClient::DescribeStreamConsumer(const DescribeStreamConsumerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeStreamConsumerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStreamConsumerOutcomeCallable KinesisClient::DescribeStreamConsumerCallable(const DescribeStreamConsumerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStreamConsumerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStreamConsumer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientDescribeStreamConsumerAsyncHelper(KinesisClient const * const clientThis, const DescribeStreamConsumerRequest& request, const DescribeStreamConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeStreamConsumer(request), context);
}

void KinesisClient::DescribeStreamConsumerAsync(const DescribeStreamConsumerRequest& request, const DescribeStreamConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientDescribeStreamConsumerAsyncHelper( this, request, handler, context ); } );
}

DescribeStreamSummaryOutcome KinesisClient::DescribeStreamSummary(const DescribeStreamSummaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeStreamSummaryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStreamSummaryOutcomeCallable KinesisClient::DescribeStreamSummaryCallable(const DescribeStreamSummaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStreamSummaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStreamSummary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientDescribeStreamSummaryAsyncHelper(KinesisClient const * const clientThis, const DescribeStreamSummaryRequest& request, const DescribeStreamSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeStreamSummary(request), context);
}

void KinesisClient::DescribeStreamSummaryAsync(const DescribeStreamSummaryRequest& request, const DescribeStreamSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientDescribeStreamSummaryAsyncHelper( this, request, handler, context ); } );
}

DisableEnhancedMonitoringOutcome KinesisClient::DisableEnhancedMonitoring(const DisableEnhancedMonitoringRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisableEnhancedMonitoringOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableEnhancedMonitoringOutcomeCallable KinesisClient::DisableEnhancedMonitoringCallable(const DisableEnhancedMonitoringRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableEnhancedMonitoringOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableEnhancedMonitoring(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientDisableEnhancedMonitoringAsyncHelper(KinesisClient const * const clientThis, const DisableEnhancedMonitoringRequest& request, const DisableEnhancedMonitoringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableEnhancedMonitoring(request), context);
}

void KinesisClient::DisableEnhancedMonitoringAsync(const DisableEnhancedMonitoringRequest& request, const DisableEnhancedMonitoringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientDisableEnhancedMonitoringAsyncHelper( this, request, handler, context ); } );
}

EnableEnhancedMonitoringOutcome KinesisClient::EnableEnhancedMonitoring(const EnableEnhancedMonitoringRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnableEnhancedMonitoringOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableEnhancedMonitoringOutcomeCallable KinesisClient::EnableEnhancedMonitoringCallable(const EnableEnhancedMonitoringRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableEnhancedMonitoringOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableEnhancedMonitoring(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientEnableEnhancedMonitoringAsyncHelper(KinesisClient const * const clientThis, const EnableEnhancedMonitoringRequest& request, const EnableEnhancedMonitoringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableEnhancedMonitoring(request), context);
}

void KinesisClient::EnableEnhancedMonitoringAsync(const EnableEnhancedMonitoringRequest& request, const EnableEnhancedMonitoringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientEnableEnhancedMonitoringAsyncHelper( this, request, handler, context ); } );
}

GetRecordsOutcome KinesisClient::GetRecords(const GetRecordsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRecordsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRecordsOutcomeCallable KinesisClient::GetRecordsCallable(const GetRecordsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRecordsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRecords(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientGetRecordsAsyncHelper(KinesisClient const * const clientThis, const GetRecordsRequest& request, const GetRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRecords(request), context);
}

void KinesisClient::GetRecordsAsync(const GetRecordsRequest& request, const GetRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientGetRecordsAsyncHelper( this, request, handler, context ); } );
}

GetShardIteratorOutcome KinesisClient::GetShardIterator(const GetShardIteratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetShardIteratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetShardIteratorOutcomeCallable KinesisClient::GetShardIteratorCallable(const GetShardIteratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetShardIteratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetShardIterator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientGetShardIteratorAsyncHelper(KinesisClient const * const clientThis, const GetShardIteratorRequest& request, const GetShardIteratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetShardIterator(request), context);
}

void KinesisClient::GetShardIteratorAsync(const GetShardIteratorRequest& request, const GetShardIteratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientGetShardIteratorAsyncHelper( this, request, handler, context ); } );
}

IncreaseStreamRetentionPeriodOutcome KinesisClient::IncreaseStreamRetentionPeriod(const IncreaseStreamRetentionPeriodRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return IncreaseStreamRetentionPeriodOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

IncreaseStreamRetentionPeriodOutcomeCallable KinesisClient::IncreaseStreamRetentionPeriodCallable(const IncreaseStreamRetentionPeriodRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< IncreaseStreamRetentionPeriodOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->IncreaseStreamRetentionPeriod(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientIncreaseStreamRetentionPeriodAsyncHelper(KinesisClient const * const clientThis, const IncreaseStreamRetentionPeriodRequest& request, const IncreaseStreamRetentionPeriodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->IncreaseStreamRetentionPeriod(request), context);
}

void KinesisClient::IncreaseStreamRetentionPeriodAsync(const IncreaseStreamRetentionPeriodRequest& request, const IncreaseStreamRetentionPeriodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientIncreaseStreamRetentionPeriodAsyncHelper( this, request, handler, context ); } );
}

ListShardsOutcome KinesisClient::ListShards(const ListShardsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListShardsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListShardsOutcomeCallable KinesisClient::ListShardsCallable(const ListShardsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListShardsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListShards(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientListShardsAsyncHelper(KinesisClient const * const clientThis, const ListShardsRequest& request, const ListShardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListShards(request), context);
}

void KinesisClient::ListShardsAsync(const ListShardsRequest& request, const ListShardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientListShardsAsyncHelper( this, request, handler, context ); } );
}

ListStreamConsumersOutcome KinesisClient::ListStreamConsumers(const ListStreamConsumersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListStreamConsumersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStreamConsumersOutcomeCallable KinesisClient::ListStreamConsumersCallable(const ListStreamConsumersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStreamConsumersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStreamConsumers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientListStreamConsumersAsyncHelper(KinesisClient const * const clientThis, const ListStreamConsumersRequest& request, const ListStreamConsumersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListStreamConsumers(request), context);
}

void KinesisClient::ListStreamConsumersAsync(const ListStreamConsumersRequest& request, const ListStreamConsumersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientListStreamConsumersAsyncHelper( this, request, handler, context ); } );
}

ListStreamsOutcome KinesisClient::ListStreams(const ListStreamsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListStreamsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStreamsOutcomeCallable KinesisClient::ListStreamsCallable(const ListStreamsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStreamsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStreams(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientListStreamsAsyncHelper(KinesisClient const * const clientThis, const ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListStreams(request), context);
}

void KinesisClient::ListStreamsAsync(const ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientListStreamsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForStreamOutcome KinesisClient::ListTagsForStream(const ListTagsForStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForStreamOutcomeCallable KinesisClient::ListTagsForStreamCallable(const ListTagsForStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientListTagsForStreamAsyncHelper(KinesisClient const * const clientThis, const ListTagsForStreamRequest& request, const ListTagsForStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForStream(request), context);
}

void KinesisClient::ListTagsForStreamAsync(const ListTagsForStreamRequest& request, const ListTagsForStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientListTagsForStreamAsyncHelper( this, request, handler, context ); } );
}

MergeShardsOutcome KinesisClient::MergeShards(const MergeShardsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return MergeShardsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MergeShardsOutcomeCallable KinesisClient::MergeShardsCallable(const MergeShardsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< MergeShardsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->MergeShards(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientMergeShardsAsyncHelper(KinesisClient const * const clientThis, const MergeShardsRequest& request, const MergeShardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->MergeShards(request), context);
}

void KinesisClient::MergeShardsAsync(const MergeShardsRequest& request, const MergeShardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientMergeShardsAsyncHelper( this, request, handler, context ); } );
}

PutRecordOutcome KinesisClient::PutRecord(const PutRecordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutRecordOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRecordOutcomeCallable KinesisClient::PutRecordCallable(const PutRecordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRecordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRecord(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientPutRecordAsyncHelper(KinesisClient const * const clientThis, const PutRecordRequest& request, const PutRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutRecord(request), context);
}

void KinesisClient::PutRecordAsync(const PutRecordRequest& request, const PutRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientPutRecordAsyncHelper( this, request, handler, context ); } );
}

PutRecordsOutcome KinesisClient::PutRecords(const PutRecordsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutRecordsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRecordsOutcomeCallable KinesisClient::PutRecordsCallable(const PutRecordsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRecordsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRecords(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientPutRecordsAsyncHelper(KinesisClient const * const clientThis, const PutRecordsRequest& request, const PutRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutRecords(request), context);
}

void KinesisClient::PutRecordsAsync(const PutRecordsRequest& request, const PutRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientPutRecordsAsyncHelper( this, request, handler, context ); } );
}

RegisterStreamConsumerOutcome KinesisClient::RegisterStreamConsumer(const RegisterStreamConsumerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterStreamConsumerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterStreamConsumerOutcomeCallable KinesisClient::RegisterStreamConsumerCallable(const RegisterStreamConsumerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterStreamConsumerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterStreamConsumer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientRegisterStreamConsumerAsyncHelper(KinesisClient const * const clientThis, const RegisterStreamConsumerRequest& request, const RegisterStreamConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterStreamConsumer(request), context);
}

void KinesisClient::RegisterStreamConsumerAsync(const RegisterStreamConsumerRequest& request, const RegisterStreamConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientRegisterStreamConsumerAsyncHelper( this, request, handler, context ); } );
}

RemoveTagsFromStreamOutcome KinesisClient::RemoveTagsFromStream(const RemoveTagsFromStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveTagsFromStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveTagsFromStreamOutcomeCallable KinesisClient::RemoveTagsFromStreamCallable(const RemoveTagsFromStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientRemoveTagsFromStreamAsyncHelper(KinesisClient const * const clientThis, const RemoveTagsFromStreamRequest& request, const RemoveTagsFromStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveTagsFromStream(request), context);
}

void KinesisClient::RemoveTagsFromStreamAsync(const RemoveTagsFromStreamRequest& request, const RemoveTagsFromStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientRemoveTagsFromStreamAsyncHelper( this, request, handler, context ); } );
}

SplitShardOutcome KinesisClient::SplitShard(const SplitShardRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SplitShardOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SplitShardOutcomeCallable KinesisClient::SplitShardCallable(const SplitShardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SplitShardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SplitShard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientSplitShardAsyncHelper(KinesisClient const * const clientThis, const SplitShardRequest& request, const SplitShardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SplitShard(request), context);
}

void KinesisClient::SplitShardAsync(const SplitShardRequest& request, const SplitShardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientSplitShardAsyncHelper( this, request, handler, context ); } );
}

StartStreamEncryptionOutcome KinesisClient::StartStreamEncryption(const StartStreamEncryptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartStreamEncryptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartStreamEncryptionOutcomeCallable KinesisClient::StartStreamEncryptionCallable(const StartStreamEncryptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartStreamEncryptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartStreamEncryption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientStartStreamEncryptionAsyncHelper(KinesisClient const * const clientThis, const StartStreamEncryptionRequest& request, const StartStreamEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartStreamEncryption(request), context);
}

void KinesisClient::StartStreamEncryptionAsync(const StartStreamEncryptionRequest& request, const StartStreamEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientStartStreamEncryptionAsyncHelper( this, request, handler, context ); } );
}

StopStreamEncryptionOutcome KinesisClient::StopStreamEncryption(const StopStreamEncryptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopStreamEncryptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopStreamEncryptionOutcomeCallable KinesisClient::StopStreamEncryptionCallable(const StopStreamEncryptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopStreamEncryptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopStreamEncryption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientStopStreamEncryptionAsyncHelper(KinesisClient const * const clientThis, const StopStreamEncryptionRequest& request, const StopStreamEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopStreamEncryption(request), context);
}

void KinesisClient::StopStreamEncryptionAsync(const StopStreamEncryptionRequest& request, const StopStreamEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientStopStreamEncryptionAsyncHelper( this, request, handler, context ); } );
}

SubscribeToShardOutcome KinesisClient::SubscribeToShard(SubscribeToShardRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  request.SetResponseStreamFactory(
      [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
  );
  return SubscribeToShardOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SubscribeToShardOutcomeCallable KinesisClient::SubscribeToShardCallable(SubscribeToShardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SubscribeToShardOutcome() > >(ALLOCATION_TAG, [this, &request](){ return this->SubscribeToShard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientSubscribeToShardAsyncHelper(KinesisClient const * const clientThis, SubscribeToShardRequest& request, const SubscribeToShardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SubscribeToShard(request), context);
}

void KinesisClient::SubscribeToShardAsync(SubscribeToShardRequest& request, const SubscribeToShardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, &request, handler, context](){ KinesisClientSubscribeToShardAsyncHelper( this, request, handler, context ); } );
}

UpdateShardCountOutcome KinesisClient::UpdateShardCount(const UpdateShardCountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateShardCountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateShardCountOutcomeCallable KinesisClient::UpdateShardCountCallable(const UpdateShardCountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateShardCountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateShardCount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientUpdateShardCountAsyncHelper(KinesisClient const * const clientThis, const UpdateShardCountRequest& request, const UpdateShardCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateShardCount(request), context);
}

void KinesisClient::UpdateShardCountAsync(const UpdateShardCountRequest& request, const UpdateShardCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientUpdateShardCountAsyncHelper( this, request, handler, context ); } );
}

UpdateStreamModeOutcome KinesisClient::UpdateStreamMode(const UpdateStreamModeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateStreamModeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateStreamModeOutcomeCallable KinesisClient::UpdateStreamModeCallable(const UpdateStreamModeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStreamModeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStreamMode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisClientUpdateStreamModeAsyncHelper(KinesisClient const * const clientThis, const UpdateStreamModeRequest& request, const UpdateStreamModeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateStreamMode(request), context);
}

void KinesisClient::UpdateStreamModeAsync(const UpdateStreamModeRequest& request, const UpdateStreamModeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisClientUpdateStreamModeAsyncHelper( this, request, handler, context ); } );
}

