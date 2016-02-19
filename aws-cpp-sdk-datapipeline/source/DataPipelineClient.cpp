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
#include <aws/datapipeline/DataPipelineClient.h>
#include <aws/datapipeline/DataPipelineEndpoint.h>
#include <aws/datapipeline/DataPipelineErrorMarshaller.h>
#include <aws/datapipeline/model/ActivatePipelineRequest.h>
#include <aws/datapipeline/model/AddTagsRequest.h>
#include <aws/datapipeline/model/CreatePipelineRequest.h>
#include <aws/datapipeline/model/DeactivatePipelineRequest.h>
#include <aws/datapipeline/model/DeletePipelineRequest.h>
#include <aws/datapipeline/model/DescribeObjectsRequest.h>
#include <aws/datapipeline/model/DescribePipelinesRequest.h>
#include <aws/datapipeline/model/EvaluateExpressionRequest.h>
#include <aws/datapipeline/model/GetPipelineDefinitionRequest.h>
#include <aws/datapipeline/model/ListPipelinesRequest.h>
#include <aws/datapipeline/model/PollForTaskRequest.h>
#include <aws/datapipeline/model/PutPipelineDefinitionRequest.h>
#include <aws/datapipeline/model/QueryObjectsRequest.h>
#include <aws/datapipeline/model/RemoveTagsRequest.h>
#include <aws/datapipeline/model/ReportTaskProgressRequest.h>
#include <aws/datapipeline/model/ReportTaskRunnerHeartbeatRequest.h>
#include <aws/datapipeline/model/SetStatusRequest.h>
#include <aws/datapipeline/model/SetTaskStatusRequest.h>
#include <aws/datapipeline/model/ValidatePipelineDefinitionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DataPipeline;
using namespace Aws::DataPipeline::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "datapipeline";
static const char* ALLOCATION_TAG = "DataPipelineClient";

DataPipelineClient::DataPipelineClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<DataPipelineErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DataPipelineClient::DataPipelineClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<DataPipelineErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DataPipelineClient::DataPipelineClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<DataPipelineErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DataPipelineClient::~DataPipelineClient()
{
}

void DataPipelineClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << DataPipelineEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}
ActivatePipelineOutcome DataPipelineClient::ActivatePipeline(const ActivatePipelineRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ActivatePipelineOutcome(ActivatePipelineResult(outcome.GetResult()));
  }
  else
  {
    return ActivatePipelineOutcome(outcome.GetError());
  }
}

ActivatePipelineOutcomeCallable DataPipelineClient::ActivatePipelineCallable(const ActivatePipelineRequest& request) const
{
  return std::async(std::launch::async, &DataPipelineClient::ActivatePipeline, this, request);
}

void DataPipelineClient::ActivatePipelineAsync(const ActivatePipelineRequest& request, const ActivatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DataPipelineClient::ActivatePipelineAsyncHelper, this, request, handler, context);
}

void DataPipelineClient::ActivatePipelineAsyncHelper(const ActivatePipelineRequest& request, const ActivatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ActivatePipeline(request), context);
}

AddTagsOutcome DataPipelineClient::AddTags(const AddTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddTagsOutcome(AddTagsResult(outcome.GetResult()));
  }
  else
  {
    return AddTagsOutcome(outcome.GetError());
  }
}

AddTagsOutcomeCallable DataPipelineClient::AddTagsCallable(const AddTagsRequest& request) const
{
  return std::async(std::launch::async, &DataPipelineClient::AddTags, this, request);
}

void DataPipelineClient::AddTagsAsync(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DataPipelineClient::AddTagsAsyncHelper, this, request, handler, context);
}

void DataPipelineClient::AddTagsAsyncHelper(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTags(request), context);
}

CreatePipelineOutcome DataPipelineClient::CreatePipeline(const CreatePipelineRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreatePipelineOutcome(CreatePipelineResult(outcome.GetResult()));
  }
  else
  {
    return CreatePipelineOutcome(outcome.GetError());
  }
}

CreatePipelineOutcomeCallable DataPipelineClient::CreatePipelineCallable(const CreatePipelineRequest& request) const
{
  return std::async(std::launch::async, &DataPipelineClient::CreatePipeline, this, request);
}

void DataPipelineClient::CreatePipelineAsync(const CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DataPipelineClient::CreatePipelineAsyncHelper, this, request, handler, context);
}

void DataPipelineClient::CreatePipelineAsyncHelper(const CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePipeline(request), context);
}

DeactivatePipelineOutcome DataPipelineClient::DeactivatePipeline(const DeactivatePipelineRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeactivatePipelineOutcome(DeactivatePipelineResult(outcome.GetResult()));
  }
  else
  {
    return DeactivatePipelineOutcome(outcome.GetError());
  }
}

DeactivatePipelineOutcomeCallable DataPipelineClient::DeactivatePipelineCallable(const DeactivatePipelineRequest& request) const
{
  return std::async(std::launch::async, &DataPipelineClient::DeactivatePipeline, this, request);
}

void DataPipelineClient::DeactivatePipelineAsync(const DeactivatePipelineRequest& request, const DeactivatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DataPipelineClient::DeactivatePipelineAsyncHelper, this, request, handler, context);
}

void DataPipelineClient::DeactivatePipelineAsyncHelper(const DeactivatePipelineRequest& request, const DeactivatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeactivatePipeline(request), context);
}

DeletePipelineOutcome DataPipelineClient::DeletePipeline(const DeletePipelineRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeletePipelineOutcome(NoResult());
  }
  else
  {
    return DeletePipelineOutcome(outcome.GetError());
  }
}

DeletePipelineOutcomeCallable DataPipelineClient::DeletePipelineCallable(const DeletePipelineRequest& request) const
{
  return std::async(std::launch::async, &DataPipelineClient::DeletePipeline, this, request);
}

void DataPipelineClient::DeletePipelineAsync(const DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DataPipelineClient::DeletePipelineAsyncHelper, this, request, handler, context);
}

void DataPipelineClient::DeletePipelineAsyncHelper(const DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePipeline(request), context);
}

DescribeObjectsOutcome DataPipelineClient::DescribeObjects(const DescribeObjectsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeObjectsOutcome(DescribeObjectsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeObjectsOutcome(outcome.GetError());
  }
}

DescribeObjectsOutcomeCallable DataPipelineClient::DescribeObjectsCallable(const DescribeObjectsRequest& request) const
{
  return std::async(std::launch::async, &DataPipelineClient::DescribeObjects, this, request);
}

void DataPipelineClient::DescribeObjectsAsync(const DescribeObjectsRequest& request, const DescribeObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DataPipelineClient::DescribeObjectsAsyncHelper, this, request, handler, context);
}

void DataPipelineClient::DescribeObjectsAsyncHelper(const DescribeObjectsRequest& request, const DescribeObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeObjects(request), context);
}

DescribePipelinesOutcome DataPipelineClient::DescribePipelines(const DescribePipelinesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribePipelinesOutcome(DescribePipelinesResult(outcome.GetResult()));
  }
  else
  {
    return DescribePipelinesOutcome(outcome.GetError());
  }
}

DescribePipelinesOutcomeCallable DataPipelineClient::DescribePipelinesCallable(const DescribePipelinesRequest& request) const
{
  return std::async(std::launch::async, &DataPipelineClient::DescribePipelines, this, request);
}

void DataPipelineClient::DescribePipelinesAsync(const DescribePipelinesRequest& request, const DescribePipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DataPipelineClient::DescribePipelinesAsyncHelper, this, request, handler, context);
}

void DataPipelineClient::DescribePipelinesAsyncHelper(const DescribePipelinesRequest& request, const DescribePipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePipelines(request), context);
}

EvaluateExpressionOutcome DataPipelineClient::EvaluateExpression(const EvaluateExpressionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return EvaluateExpressionOutcome(EvaluateExpressionResult(outcome.GetResult()));
  }
  else
  {
    return EvaluateExpressionOutcome(outcome.GetError());
  }
}

EvaluateExpressionOutcomeCallable DataPipelineClient::EvaluateExpressionCallable(const EvaluateExpressionRequest& request) const
{
  return std::async(std::launch::async, &DataPipelineClient::EvaluateExpression, this, request);
}

void DataPipelineClient::EvaluateExpressionAsync(const EvaluateExpressionRequest& request, const EvaluateExpressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DataPipelineClient::EvaluateExpressionAsyncHelper, this, request, handler, context);
}

void DataPipelineClient::EvaluateExpressionAsyncHelper(const EvaluateExpressionRequest& request, const EvaluateExpressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EvaluateExpression(request), context);
}

GetPipelineDefinitionOutcome DataPipelineClient::GetPipelineDefinition(const GetPipelineDefinitionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetPipelineDefinitionOutcome(GetPipelineDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return GetPipelineDefinitionOutcome(outcome.GetError());
  }
}

GetPipelineDefinitionOutcomeCallable DataPipelineClient::GetPipelineDefinitionCallable(const GetPipelineDefinitionRequest& request) const
{
  return std::async(std::launch::async, &DataPipelineClient::GetPipelineDefinition, this, request);
}

void DataPipelineClient::GetPipelineDefinitionAsync(const GetPipelineDefinitionRequest& request, const GetPipelineDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DataPipelineClient::GetPipelineDefinitionAsyncHelper, this, request, handler, context);
}

void DataPipelineClient::GetPipelineDefinitionAsyncHelper(const GetPipelineDefinitionRequest& request, const GetPipelineDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPipelineDefinition(request), context);
}

ListPipelinesOutcome DataPipelineClient::ListPipelines(const ListPipelinesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListPipelinesOutcome(ListPipelinesResult(outcome.GetResult()));
  }
  else
  {
    return ListPipelinesOutcome(outcome.GetError());
  }
}

ListPipelinesOutcomeCallable DataPipelineClient::ListPipelinesCallable(const ListPipelinesRequest& request) const
{
  return std::async(std::launch::async, &DataPipelineClient::ListPipelines, this, request);
}

void DataPipelineClient::ListPipelinesAsync(const ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DataPipelineClient::ListPipelinesAsyncHelper, this, request, handler, context);
}

void DataPipelineClient::ListPipelinesAsyncHelper(const ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPipelines(request), context);
}

PollForTaskOutcome DataPipelineClient::PollForTask(const PollForTaskRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PollForTaskOutcome(PollForTaskResult(outcome.GetResult()));
  }
  else
  {
    return PollForTaskOutcome(outcome.GetError());
  }
}

PollForTaskOutcomeCallable DataPipelineClient::PollForTaskCallable(const PollForTaskRequest& request) const
{
  return std::async(std::launch::async, &DataPipelineClient::PollForTask, this, request);
}

void DataPipelineClient::PollForTaskAsync(const PollForTaskRequest& request, const PollForTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DataPipelineClient::PollForTaskAsyncHelper, this, request, handler, context);
}

void DataPipelineClient::PollForTaskAsyncHelper(const PollForTaskRequest& request, const PollForTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PollForTask(request), context);
}

PutPipelineDefinitionOutcome DataPipelineClient::PutPipelineDefinition(const PutPipelineDefinitionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutPipelineDefinitionOutcome(PutPipelineDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return PutPipelineDefinitionOutcome(outcome.GetError());
  }
}

PutPipelineDefinitionOutcomeCallable DataPipelineClient::PutPipelineDefinitionCallable(const PutPipelineDefinitionRequest& request) const
{
  return std::async(std::launch::async, &DataPipelineClient::PutPipelineDefinition, this, request);
}

void DataPipelineClient::PutPipelineDefinitionAsync(const PutPipelineDefinitionRequest& request, const PutPipelineDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DataPipelineClient::PutPipelineDefinitionAsyncHelper, this, request, handler, context);
}

void DataPipelineClient::PutPipelineDefinitionAsyncHelper(const PutPipelineDefinitionRequest& request, const PutPipelineDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutPipelineDefinition(request), context);
}

QueryObjectsOutcome DataPipelineClient::QueryObjects(const QueryObjectsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return QueryObjectsOutcome(QueryObjectsResult(outcome.GetResult()));
  }
  else
  {
    return QueryObjectsOutcome(outcome.GetError());
  }
}

QueryObjectsOutcomeCallable DataPipelineClient::QueryObjectsCallable(const QueryObjectsRequest& request) const
{
  return std::async(std::launch::async, &DataPipelineClient::QueryObjects, this, request);
}

void DataPipelineClient::QueryObjectsAsync(const QueryObjectsRequest& request, const QueryObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DataPipelineClient::QueryObjectsAsyncHelper, this, request, handler, context);
}

void DataPipelineClient::QueryObjectsAsyncHelper(const QueryObjectsRequest& request, const QueryObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, QueryObjects(request), context);
}

RemoveTagsOutcome DataPipelineClient::RemoveTags(const RemoveTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RemoveTagsOutcome(RemoveTagsResult(outcome.GetResult()));
  }
  else
  {
    return RemoveTagsOutcome(outcome.GetError());
  }
}

RemoveTagsOutcomeCallable DataPipelineClient::RemoveTagsCallable(const RemoveTagsRequest& request) const
{
  return std::async(std::launch::async, &DataPipelineClient::RemoveTags, this, request);
}

void DataPipelineClient::RemoveTagsAsync(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DataPipelineClient::RemoveTagsAsyncHelper, this, request, handler, context);
}

void DataPipelineClient::RemoveTagsAsyncHelper(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTags(request), context);
}

ReportTaskProgressOutcome DataPipelineClient::ReportTaskProgress(const ReportTaskProgressRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ReportTaskProgressOutcome(ReportTaskProgressResult(outcome.GetResult()));
  }
  else
  {
    return ReportTaskProgressOutcome(outcome.GetError());
  }
}

ReportTaskProgressOutcomeCallable DataPipelineClient::ReportTaskProgressCallable(const ReportTaskProgressRequest& request) const
{
  return std::async(std::launch::async, &DataPipelineClient::ReportTaskProgress, this, request);
}

void DataPipelineClient::ReportTaskProgressAsync(const ReportTaskProgressRequest& request, const ReportTaskProgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DataPipelineClient::ReportTaskProgressAsyncHelper, this, request, handler, context);
}

void DataPipelineClient::ReportTaskProgressAsyncHelper(const ReportTaskProgressRequest& request, const ReportTaskProgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReportTaskProgress(request), context);
}

ReportTaskRunnerHeartbeatOutcome DataPipelineClient::ReportTaskRunnerHeartbeat(const ReportTaskRunnerHeartbeatRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ReportTaskRunnerHeartbeatOutcome(ReportTaskRunnerHeartbeatResult(outcome.GetResult()));
  }
  else
  {
    return ReportTaskRunnerHeartbeatOutcome(outcome.GetError());
  }
}

ReportTaskRunnerHeartbeatOutcomeCallable DataPipelineClient::ReportTaskRunnerHeartbeatCallable(const ReportTaskRunnerHeartbeatRequest& request) const
{
  return std::async(std::launch::async, &DataPipelineClient::ReportTaskRunnerHeartbeat, this, request);
}

void DataPipelineClient::ReportTaskRunnerHeartbeatAsync(const ReportTaskRunnerHeartbeatRequest& request, const ReportTaskRunnerHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DataPipelineClient::ReportTaskRunnerHeartbeatAsyncHelper, this, request, handler, context);
}

void DataPipelineClient::ReportTaskRunnerHeartbeatAsyncHelper(const ReportTaskRunnerHeartbeatRequest& request, const ReportTaskRunnerHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReportTaskRunnerHeartbeat(request), context);
}

SetStatusOutcome DataPipelineClient::SetStatus(const SetStatusRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetStatusOutcome(NoResult());
  }
  else
  {
    return SetStatusOutcome(outcome.GetError());
  }
}

SetStatusOutcomeCallable DataPipelineClient::SetStatusCallable(const SetStatusRequest& request) const
{
  return std::async(std::launch::async, &DataPipelineClient::SetStatus, this, request);
}

void DataPipelineClient::SetStatusAsync(const SetStatusRequest& request, const SetStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DataPipelineClient::SetStatusAsyncHelper, this, request, handler, context);
}

void DataPipelineClient::SetStatusAsyncHelper(const SetStatusRequest& request, const SetStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetStatus(request), context);
}

SetTaskStatusOutcome DataPipelineClient::SetTaskStatus(const SetTaskStatusRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetTaskStatusOutcome(SetTaskStatusResult(outcome.GetResult()));
  }
  else
  {
    return SetTaskStatusOutcome(outcome.GetError());
  }
}

SetTaskStatusOutcomeCallable DataPipelineClient::SetTaskStatusCallable(const SetTaskStatusRequest& request) const
{
  return std::async(std::launch::async, &DataPipelineClient::SetTaskStatus, this, request);
}

void DataPipelineClient::SetTaskStatusAsync(const SetTaskStatusRequest& request, const SetTaskStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DataPipelineClient::SetTaskStatusAsyncHelper, this, request, handler, context);
}

void DataPipelineClient::SetTaskStatusAsyncHelper(const SetTaskStatusRequest& request, const SetTaskStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetTaskStatus(request), context);
}

ValidatePipelineDefinitionOutcome DataPipelineClient::ValidatePipelineDefinition(const ValidatePipelineDefinitionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ValidatePipelineDefinitionOutcome(ValidatePipelineDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return ValidatePipelineDefinitionOutcome(outcome.GetError());
  }
}

ValidatePipelineDefinitionOutcomeCallable DataPipelineClient::ValidatePipelineDefinitionCallable(const ValidatePipelineDefinitionRequest& request) const
{
  return std::async(std::launch::async, &DataPipelineClient::ValidatePipelineDefinition, this, request);
}

void DataPipelineClient::ValidatePipelineDefinitionAsync(const ValidatePipelineDefinitionRequest& request, const ValidatePipelineDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DataPipelineClient::ValidatePipelineDefinitionAsyncHelper, this, request, handler, context);
}

void DataPipelineClient::ValidatePipelineDefinitionAsyncHelper(const ValidatePipelineDefinitionRequest& request, const ValidatePipelineDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ValidatePipelineDefinition(request), context);
}

