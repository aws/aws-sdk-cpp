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
#include <aws/firehose/FirehoseClient.h>
#include <aws/firehose/FirehoseEndpoint.h>
#include <aws/firehose/FirehoseErrorMarshaller.h>
#include <aws/firehose/model/CreateDeliveryStreamRequest.h>
#include <aws/firehose/model/DeleteDeliveryStreamRequest.h>
#include <aws/firehose/model/DescribeDeliveryStreamRequest.h>
#include <aws/firehose/model/ListDeliveryStreamsRequest.h>
#include <aws/firehose/model/PutRecordRequest.h>
#include <aws/firehose/model/PutRecordBatchRequest.h>
#include <aws/firehose/model/UpdateDestinationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Firehose;
using namespace Aws::Firehose::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "firehose";
static const char* ALLOCATION_TAG = "FirehoseClient";

FirehoseClient::FirehoseClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<FirehoseErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FirehoseClient::FirehoseClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<FirehoseErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FirehoseClient::FirehoseClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<FirehoseErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FirehoseClient::~FirehoseClient()
{
}

void FirehoseClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << FirehoseEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}
CreateDeliveryStreamOutcome FirehoseClient::CreateDeliveryStream(const CreateDeliveryStreamRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDeliveryStreamOutcome(CreateDeliveryStreamResult(outcome.GetResult()));
  }
  else
  {
    return CreateDeliveryStreamOutcome(outcome.GetError());
  }
}

CreateDeliveryStreamOutcomeCallable FirehoseClient::CreateDeliveryStreamCallable(const CreateDeliveryStreamRequest& request) const
{
  return std::async(std::launch::async, &FirehoseClient::CreateDeliveryStream, this, request);
}

void FirehoseClient::CreateDeliveryStreamAsync(const CreateDeliveryStreamRequest& request, const CreateDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&FirehoseClient::CreateDeliveryStreamAsyncHelper, this, request, handler, context);
}

void FirehoseClient::CreateDeliveryStreamAsyncHelper(const CreateDeliveryStreamRequest& request, const CreateDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDeliveryStream(request), context);
}

DeleteDeliveryStreamOutcome FirehoseClient::DeleteDeliveryStream(const DeleteDeliveryStreamRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteDeliveryStreamOutcome(DeleteDeliveryStreamResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDeliveryStreamOutcome(outcome.GetError());
  }
}

DeleteDeliveryStreamOutcomeCallable FirehoseClient::DeleteDeliveryStreamCallable(const DeleteDeliveryStreamRequest& request) const
{
  return std::async(std::launch::async, &FirehoseClient::DeleteDeliveryStream, this, request);
}

void FirehoseClient::DeleteDeliveryStreamAsync(const DeleteDeliveryStreamRequest& request, const DeleteDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&FirehoseClient::DeleteDeliveryStreamAsyncHelper, this, request, handler, context);
}

void FirehoseClient::DeleteDeliveryStreamAsyncHelper(const DeleteDeliveryStreamRequest& request, const DeleteDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDeliveryStream(request), context);
}

DescribeDeliveryStreamOutcome FirehoseClient::DescribeDeliveryStream(const DescribeDeliveryStreamRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeDeliveryStreamOutcome(DescribeDeliveryStreamResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDeliveryStreamOutcome(outcome.GetError());
  }
}

DescribeDeliveryStreamOutcomeCallable FirehoseClient::DescribeDeliveryStreamCallable(const DescribeDeliveryStreamRequest& request) const
{
  return std::async(std::launch::async, &FirehoseClient::DescribeDeliveryStream, this, request);
}

void FirehoseClient::DescribeDeliveryStreamAsync(const DescribeDeliveryStreamRequest& request, const DescribeDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&FirehoseClient::DescribeDeliveryStreamAsyncHelper, this, request, handler, context);
}

void FirehoseClient::DescribeDeliveryStreamAsyncHelper(const DescribeDeliveryStreamRequest& request, const DescribeDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDeliveryStream(request), context);
}

ListDeliveryStreamsOutcome FirehoseClient::ListDeliveryStreams(const ListDeliveryStreamsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListDeliveryStreamsOutcome(ListDeliveryStreamsResult(outcome.GetResult()));
  }
  else
  {
    return ListDeliveryStreamsOutcome(outcome.GetError());
  }
}

ListDeliveryStreamsOutcomeCallable FirehoseClient::ListDeliveryStreamsCallable(const ListDeliveryStreamsRequest& request) const
{
  return std::async(std::launch::async, &FirehoseClient::ListDeliveryStreams, this, request);
}

void FirehoseClient::ListDeliveryStreamsAsync(const ListDeliveryStreamsRequest& request, const ListDeliveryStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&FirehoseClient::ListDeliveryStreamsAsyncHelper, this, request, handler, context);
}

void FirehoseClient::ListDeliveryStreamsAsyncHelper(const ListDeliveryStreamsRequest& request, const ListDeliveryStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDeliveryStreams(request), context);
}

PutRecordOutcome FirehoseClient::PutRecord(const PutRecordRequest& request) const
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

PutRecordOutcomeCallable FirehoseClient::PutRecordCallable(const PutRecordRequest& request) const
{
  return std::async(std::launch::async, &FirehoseClient::PutRecord, this, request);
}

void FirehoseClient::PutRecordAsync(const PutRecordRequest& request, const PutRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&FirehoseClient::PutRecordAsyncHelper, this, request, handler, context);
}

void FirehoseClient::PutRecordAsyncHelper(const PutRecordRequest& request, const PutRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutRecord(request), context);
}

PutRecordBatchOutcome FirehoseClient::PutRecordBatch(const PutRecordBatchRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutRecordBatchOutcome(PutRecordBatchResult(outcome.GetResult()));
  }
  else
  {
    return PutRecordBatchOutcome(outcome.GetError());
  }
}

PutRecordBatchOutcomeCallable FirehoseClient::PutRecordBatchCallable(const PutRecordBatchRequest& request) const
{
  return std::async(std::launch::async, &FirehoseClient::PutRecordBatch, this, request);
}

void FirehoseClient::PutRecordBatchAsync(const PutRecordBatchRequest& request, const PutRecordBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&FirehoseClient::PutRecordBatchAsyncHelper, this, request, handler, context);
}

void FirehoseClient::PutRecordBatchAsyncHelper(const PutRecordBatchRequest& request, const PutRecordBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutRecordBatch(request), context);
}

UpdateDestinationOutcome FirehoseClient::UpdateDestination(const UpdateDestinationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateDestinationOutcome(UpdateDestinationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDestinationOutcome(outcome.GetError());
  }
}

UpdateDestinationOutcomeCallable FirehoseClient::UpdateDestinationCallable(const UpdateDestinationRequest& request) const
{
  return std::async(std::launch::async, &FirehoseClient::UpdateDestination, this, request);
}

void FirehoseClient::UpdateDestinationAsync(const UpdateDestinationRequest& request, const UpdateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&FirehoseClient::UpdateDestinationAsyncHelper, this, request, handler, context);
}

void FirehoseClient::UpdateDestinationAsyncHelper(const UpdateDestinationRequest& request, const UpdateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDestination(request), context);
}

