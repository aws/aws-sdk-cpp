/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kinesis/KinesisClient.h>
#include <aws/kinesis/KinesisEndpoint.h>
#include <aws/kinesis/KinesisErrorMarshaller.h>
#include <aws/kinesis/model/AddTagsToStreamRequest.h>
#include <aws/kinesis/model/CreateStreamRequest.h>
#include <aws/kinesis/model/DecreaseStreamRetentionPeriodRequest.h>
#include <aws/kinesis/model/DeleteStreamRequest.h>
#include <aws/kinesis/model/DescribeStreamRequest.h>
#include <aws/kinesis/model/DisableEnhancedMonitoringRequest.h>
#include <aws/kinesis/model/EnableEnhancedMonitoringRequest.h>
#include <aws/kinesis/model/GetRecordsRequest.h>
#include <aws/kinesis/model/GetShardIteratorRequest.h>
#include <aws/kinesis/model/IncreaseStreamRetentionPeriodRequest.h>
#include <aws/kinesis/model/ListStreamsRequest.h>
#include <aws/kinesis/model/ListTagsForStreamRequest.h>
#include <aws/kinesis/model/MergeShardsRequest.h>
#include <aws/kinesis/model/PutRecordRequest.h>
#include <aws/kinesis/model/PutRecordsRequest.h>
#include <aws/kinesis/model/RemoveTagsFromStreamRequest.h>
#include <aws/kinesis/model/SplitShardRequest.h>

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
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << KinesisEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AddTagsToStreamOutcome KinesisClient::AddTagsToStream(const AddTagsToStreamRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, [this, request](){ return this->AddTagsToStream(request); } );
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, [this, request](){ return this->CreateStream(request); } );
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, [this, request](){ return this->DecreaseStreamRetentionPeriod(request); } );
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, [this, request](){ return this->DeleteStream(request); } );
}

void KinesisClient::DeleteStreamAsync(const DeleteStreamRequest& request, const DeleteStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStreamAsyncHelper( request, handler, context ); } );
}

void KinesisClient::DeleteStreamAsyncHelper(const DeleteStreamRequest& request, const DeleteStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStream(request), context);
}

DescribeStreamOutcome KinesisClient::DescribeStream(const DescribeStreamRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, [this, request](){ return this->DescribeStream(request); } );
}

void KinesisClient::DescribeStreamAsync(const DescribeStreamRequest& request, const DescribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStreamAsyncHelper( request, handler, context ); } );
}

void KinesisClient::DescribeStreamAsyncHelper(const DescribeStreamRequest& request, const DescribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStream(request), context);
}

DisableEnhancedMonitoringOutcome KinesisClient::DisableEnhancedMonitoring(const DisableEnhancedMonitoringRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, [this, request](){ return this->DisableEnhancedMonitoring(request); } );
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, [this, request](){ return this->EnableEnhancedMonitoring(request); } );
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, [this, request](){ return this->GetRecords(request); } );
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, [this, request](){ return this->GetShardIterator(request); } );
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, [this, request](){ return this->IncreaseStreamRetentionPeriod(request); } );
}

void KinesisClient::IncreaseStreamRetentionPeriodAsync(const IncreaseStreamRetentionPeriodRequest& request, const IncreaseStreamRetentionPeriodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->IncreaseStreamRetentionPeriodAsyncHelper( request, handler, context ); } );
}

void KinesisClient::IncreaseStreamRetentionPeriodAsyncHelper(const IncreaseStreamRetentionPeriodRequest& request, const IncreaseStreamRetentionPeriodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, IncreaseStreamRetentionPeriod(request), context);
}

ListStreamsOutcome KinesisClient::ListStreams(const ListStreamsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, [this, request](){ return this->ListStreams(request); } );
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, [this, request](){ return this->ListTagsForStream(request); } );
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, [this, request](){ return this->MergeShards(request); } );
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, [this, request](){ return this->PutRecord(request); } );
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, [this, request](){ return this->PutRecords(request); } );
}

void KinesisClient::PutRecordsAsync(const PutRecordsRequest& request, const PutRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutRecordsAsyncHelper( request, handler, context ); } );
}

void KinesisClient::PutRecordsAsyncHelper(const PutRecordsRequest& request, const PutRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutRecords(request), context);
}

RemoveTagsFromStreamOutcome KinesisClient::RemoveTagsFromStream(const RemoveTagsFromStreamRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, [this, request](){ return this->RemoveTagsFromStream(request); } );
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, [this, request](){ return this->SplitShard(request); } );
}

void KinesisClient::SplitShardAsync(const SplitShardRequest& request, const SplitShardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SplitShardAsyncHelper( request, handler, context ); } );
}

void KinesisClient::SplitShardAsyncHelper(const SplitShardRequest& request, const SplitShardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SplitShard(request), context);
}

