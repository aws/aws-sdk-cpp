/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<KinesisErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KinesisClient::KinesisClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<KinesisErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KinesisClient::KinesisClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<KinesisErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KinesisClient::~KinesisClient()
{
}

void KinesisClient::init(const ClientConfiguration& config)
{
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
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AddTagsToStreamOutcome(NoResult());
  }
  else
  {
    return AddTagsToStreamOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->AddTagsToStreamAsyncHelper( request, handler, context ); } );
}

void KinesisClient::AddTagsToStreamAsyncHelper(const AddTagsToStreamRequest& request, const AddTagsToStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTagsToStream(request), context);
}

CreateStreamOutcome KinesisClient::CreateStream(const CreateStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateStreamOutcome(NoResult());
  }
  else
  {
    return CreateStreamOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateStreamAsyncHelper( request, handler, context ); } );
}

void KinesisClient::CreateStreamAsyncHelper(const CreateStreamRequest& request, const CreateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStream(request), context);
}

DecreaseStreamRetentionPeriodOutcome KinesisClient::DecreaseStreamRetentionPeriod(const DecreaseStreamRetentionPeriodRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DecreaseStreamRetentionPeriodOutcome(NoResult());
  }
  else
  {
    return DecreaseStreamRetentionPeriodOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DecreaseStreamRetentionPeriodAsyncHelper( request, handler, context ); } );
}

void KinesisClient::DecreaseStreamRetentionPeriodAsyncHelper(const DecreaseStreamRetentionPeriodRequest& request, const DecreaseStreamRetentionPeriodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DecreaseStreamRetentionPeriod(request), context);
}

DeleteStreamOutcome KinesisClient::DeleteStream(const DeleteStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteStreamOutcome(NoResult());
  }
  else
  {
    return DeleteStreamOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStreamAsyncHelper( request, handler, context ); } );
}

void KinesisClient::DeleteStreamAsyncHelper(const DeleteStreamRequest& request, const DeleteStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStream(request), context);
}

DeregisterStreamConsumerOutcome KinesisClient::DeregisterStreamConsumer(const DeregisterStreamConsumerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeregisterStreamConsumerOutcome(NoResult());
  }
  else
  {
    return DeregisterStreamConsumerOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterStreamConsumerAsyncHelper( request, handler, context ); } );
}

void KinesisClient::DeregisterStreamConsumerAsyncHelper(const DeregisterStreamConsumerRequest& request, const DeregisterStreamConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterStreamConsumer(request), context);
}

DescribeLimitsOutcome KinesisClient::DescribeLimits(const DescribeLimitsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeLimitsOutcome(DescribeLimitsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLimitsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLimitsAsyncHelper( request, handler, context ); } );
}

void KinesisClient::DescribeLimitsAsyncHelper(const DescribeLimitsRequest& request, const DescribeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLimits(request), context);
}

DescribeStreamOutcome KinesisClient::DescribeStream(const DescribeStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeStreamOutcome(DescribeStreamResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStreamOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStreamAsyncHelper( request, handler, context ); } );
}

void KinesisClient::DescribeStreamAsyncHelper(const DescribeStreamRequest& request, const DescribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStream(request), context);
}

DescribeStreamConsumerOutcome KinesisClient::DescribeStreamConsumer(const DescribeStreamConsumerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeStreamConsumerOutcome(DescribeStreamConsumerResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStreamConsumerOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStreamConsumerAsyncHelper( request, handler, context ); } );
}

void KinesisClient::DescribeStreamConsumerAsyncHelper(const DescribeStreamConsumerRequest& request, const DescribeStreamConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStreamConsumer(request), context);
}

DescribeStreamSummaryOutcome KinesisClient::DescribeStreamSummary(const DescribeStreamSummaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeStreamSummaryOutcome(DescribeStreamSummaryResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStreamSummaryOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStreamSummaryAsyncHelper( request, handler, context ); } );
}

void KinesisClient::DescribeStreamSummaryAsyncHelper(const DescribeStreamSummaryRequest& request, const DescribeStreamSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStreamSummary(request), context);
}

DisableEnhancedMonitoringOutcome KinesisClient::DisableEnhancedMonitoring(const DisableEnhancedMonitoringRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisableEnhancedMonitoringOutcome(DisableEnhancedMonitoringResult(outcome.GetResult()));
  }
  else
  {
    return DisableEnhancedMonitoringOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DisableEnhancedMonitoringAsyncHelper( request, handler, context ); } );
}

void KinesisClient::DisableEnhancedMonitoringAsyncHelper(const DisableEnhancedMonitoringRequest& request, const DisableEnhancedMonitoringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableEnhancedMonitoring(request), context);
}

EnableEnhancedMonitoringOutcome KinesisClient::EnableEnhancedMonitoring(const EnableEnhancedMonitoringRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return EnableEnhancedMonitoringOutcome(EnableEnhancedMonitoringResult(outcome.GetResult()));
  }
  else
  {
    return EnableEnhancedMonitoringOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->EnableEnhancedMonitoringAsyncHelper( request, handler, context ); } );
}

void KinesisClient::EnableEnhancedMonitoringAsyncHelper(const EnableEnhancedMonitoringRequest& request, const EnableEnhancedMonitoringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableEnhancedMonitoring(request), context);
}

GetRecordsOutcome KinesisClient::GetRecords(const GetRecordsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRecordsOutcome(GetRecordsResult(outcome.GetResult()));
  }
  else
  {
    return GetRecordsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetRecordsAsyncHelper( request, handler, context ); } );
}

void KinesisClient::GetRecordsAsyncHelper(const GetRecordsRequest& request, const GetRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRecords(request), context);
}

GetShardIteratorOutcome KinesisClient::GetShardIterator(const GetShardIteratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetShardIteratorOutcome(GetShardIteratorResult(outcome.GetResult()));
  }
  else
  {
    return GetShardIteratorOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetShardIteratorAsyncHelper( request, handler, context ); } );
}

void KinesisClient::GetShardIteratorAsyncHelper(const GetShardIteratorRequest& request, const GetShardIteratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetShardIterator(request), context);
}

IncreaseStreamRetentionPeriodOutcome KinesisClient::IncreaseStreamRetentionPeriod(const IncreaseStreamRetentionPeriodRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return IncreaseStreamRetentionPeriodOutcome(NoResult());
  }
  else
  {
    return IncreaseStreamRetentionPeriodOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->IncreaseStreamRetentionPeriodAsyncHelper( request, handler, context ); } );
}

void KinesisClient::IncreaseStreamRetentionPeriodAsyncHelper(const IncreaseStreamRetentionPeriodRequest& request, const IncreaseStreamRetentionPeriodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, IncreaseStreamRetentionPeriod(request), context);
}

ListShardsOutcome KinesisClient::ListShards(const ListShardsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListShardsOutcome(ListShardsResult(outcome.GetResult()));
  }
  else
  {
    return ListShardsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListShardsAsyncHelper( request, handler, context ); } );
}

void KinesisClient::ListShardsAsyncHelper(const ListShardsRequest& request, const ListShardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListShards(request), context);
}

ListStreamConsumersOutcome KinesisClient::ListStreamConsumers(const ListStreamConsumersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListStreamConsumersOutcome(ListStreamConsumersResult(outcome.GetResult()));
  }
  else
  {
    return ListStreamConsumersOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListStreamConsumersAsyncHelper( request, handler, context ); } );
}

void KinesisClient::ListStreamConsumersAsyncHelper(const ListStreamConsumersRequest& request, const ListStreamConsumersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStreamConsumers(request), context);
}

ListStreamsOutcome KinesisClient::ListStreams(const ListStreamsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListStreamsOutcome(ListStreamsResult(outcome.GetResult()));
  }
  else
  {
    return ListStreamsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListStreamsAsyncHelper( request, handler, context ); } );
}

void KinesisClient::ListStreamsAsyncHelper(const ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStreams(request), context);
}

ListTagsForStreamOutcome KinesisClient::ListTagsForStream(const ListTagsForStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForStreamOutcome(ListTagsForStreamResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForStreamOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForStreamAsyncHelper( request, handler, context ); } );
}

void KinesisClient::ListTagsForStreamAsyncHelper(const ListTagsForStreamRequest& request, const ListTagsForStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForStream(request), context);
}

MergeShardsOutcome KinesisClient::MergeShards(const MergeShardsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return MergeShardsOutcome(NoResult());
  }
  else
  {
    return MergeShardsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->MergeShardsAsyncHelper( request, handler, context ); } );
}

void KinesisClient::MergeShardsAsyncHelper(const MergeShardsRequest& request, const MergeShardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, MergeShards(request), context);
}

PutRecordOutcome KinesisClient::PutRecord(const PutRecordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutRecordOutcome(PutRecordResult(outcome.GetResult()));
  }
  else
  {
    return PutRecordOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->PutRecordAsyncHelper( request, handler, context ); } );
}

void KinesisClient::PutRecordAsyncHelper(const PutRecordRequest& request, const PutRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutRecord(request), context);
}

PutRecordsOutcome KinesisClient::PutRecords(const PutRecordsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutRecordsOutcome(PutRecordsResult(outcome.GetResult()));
  }
  else
  {
    return PutRecordsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->PutRecordsAsyncHelper( request, handler, context ); } );
}

void KinesisClient::PutRecordsAsyncHelper(const PutRecordsRequest& request, const PutRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutRecords(request), context);
}

RegisterStreamConsumerOutcome KinesisClient::RegisterStreamConsumer(const RegisterStreamConsumerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RegisterStreamConsumerOutcome(RegisterStreamConsumerResult(outcome.GetResult()));
  }
  else
  {
    return RegisterStreamConsumerOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->RegisterStreamConsumerAsyncHelper( request, handler, context ); } );
}

void KinesisClient::RegisterStreamConsumerAsyncHelper(const RegisterStreamConsumerRequest& request, const RegisterStreamConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterStreamConsumer(request), context);
}

RemoveTagsFromStreamOutcome KinesisClient::RemoveTagsFromStream(const RemoveTagsFromStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RemoveTagsFromStreamOutcome(NoResult());
  }
  else
  {
    return RemoveTagsFromStreamOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->RemoveTagsFromStreamAsyncHelper( request, handler, context ); } );
}

void KinesisClient::RemoveTagsFromStreamAsyncHelper(const RemoveTagsFromStreamRequest& request, const RemoveTagsFromStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTagsFromStream(request), context);
}

SplitShardOutcome KinesisClient::SplitShard(const SplitShardRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SplitShardOutcome(NoResult());
  }
  else
  {
    return SplitShardOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->SplitShardAsyncHelper( request, handler, context ); } );
}

void KinesisClient::SplitShardAsyncHelper(const SplitShardRequest& request, const SplitShardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SplitShard(request), context);
}

StartStreamEncryptionOutcome KinesisClient::StartStreamEncryption(const StartStreamEncryptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartStreamEncryptionOutcome(NoResult());
  }
  else
  {
    return StartStreamEncryptionOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StartStreamEncryptionAsyncHelper( request, handler, context ); } );
}

void KinesisClient::StartStreamEncryptionAsyncHelper(const StartStreamEncryptionRequest& request, const StartStreamEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartStreamEncryption(request), context);
}

StopStreamEncryptionOutcome KinesisClient::StopStreamEncryption(const StopStreamEncryptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopStreamEncryptionOutcome(NoResult());
  }
  else
  {
    return StopStreamEncryptionOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StopStreamEncryptionAsyncHelper( request, handler, context ); } );
}

void KinesisClient::StopStreamEncryptionAsyncHelper(const StopStreamEncryptionRequest& request, const StopStreamEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopStreamEncryption(request), context);
}

SubscribeToShardOutcome KinesisClient::SubscribeToShard(SubscribeToShardRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  request.SetResponseStreamFactory(
      [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
  );
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SubscribeToShardOutcome(NoResult());
  }
  else
  {
    return SubscribeToShardOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, &request, handler, context](){ this->SubscribeToShardAsyncHelper( request, handler, context ); } );
}

void KinesisClient::SubscribeToShardAsyncHelper(SubscribeToShardRequest& request, const SubscribeToShardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SubscribeToShard(request), context);
}

UpdateShardCountOutcome KinesisClient::UpdateShardCount(const UpdateShardCountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateShardCountOutcome(UpdateShardCountResult(outcome.GetResult()));
  }
  else
  {
    return UpdateShardCountOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateShardCountAsyncHelper( request, handler, context ); } );
}

void KinesisClient::UpdateShardCountAsyncHelper(const UpdateShardCountRequest& request, const UpdateShardCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateShardCount(request), context);
}

