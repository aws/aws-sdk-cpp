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
#include <aws/elastictranscoder/ElasticTranscoderClient.h>
#include <aws/elastictranscoder/ElasticTranscoderEndpoint.h>
#include <aws/elastictranscoder/ElasticTranscoderErrorMarshaller.h>
#include <aws/elastictranscoder/model/CancelJobRequest.h>
#include <aws/elastictranscoder/model/CreateJobRequest.h>
#include <aws/elastictranscoder/model/CreatePipelineRequest.h>
#include <aws/elastictranscoder/model/CreatePresetRequest.h>
#include <aws/elastictranscoder/model/DeletePipelineRequest.h>
#include <aws/elastictranscoder/model/DeletePresetRequest.h>
#include <aws/elastictranscoder/model/ListJobsByPipelineRequest.h>
#include <aws/elastictranscoder/model/ListJobsByStatusRequest.h>
#include <aws/elastictranscoder/model/ListPipelinesRequest.h>
#include <aws/elastictranscoder/model/ListPresetsRequest.h>
#include <aws/elastictranscoder/model/ReadJobRequest.h>
#include <aws/elastictranscoder/model/ReadPipelineRequest.h>
#include <aws/elastictranscoder/model/ReadPresetRequest.h>
#include <aws/elastictranscoder/model/TestRoleRequest.h>
#include <aws/elastictranscoder/model/UpdatePipelineRequest.h>
#include <aws/elastictranscoder/model/UpdatePipelineNotificationsRequest.h>
#include <aws/elastictranscoder/model/UpdatePipelineStatusRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ElasticTranscoder;
using namespace Aws::ElasticTranscoder::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "elastictranscoder";
static const char* ALLOCATION_TAG = "ElasticTranscoderClient";

ElasticTranscoderClient::ElasticTranscoderClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<ElasticTranscoderErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticTranscoderClient::ElasticTranscoderClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<ElasticTranscoderErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticTranscoderClient::ElasticTranscoderClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<ElasticTranscoderErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticTranscoderClient::~ElasticTranscoderClient()
{
}

void ElasticTranscoderClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << ElasticTranscoderEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}
CancelJobOutcome ElasticTranscoderClient::CancelJob(const CancelJobRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2012-09-25/jobs/";
  ss << request.GetId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return CancelJobOutcome(CancelJobResult(outcome.GetResult()));
  }
  else
  {
    return CancelJobOutcome(outcome.GetError());
  }
}

CancelJobOutcomeCallable ElasticTranscoderClient::CancelJobCallable(const CancelJobRequest& request) const
{
  return std::async(std::launch::async, &ElasticTranscoderClient::CancelJob, this, request);
}

void ElasticTranscoderClient::CancelJobAsync(const CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ElasticTranscoderClient::CancelJobAsyncHelper, this, request, handler, context);
}

void ElasticTranscoderClient::CancelJobAsyncHelper(const CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelJob(request), context);
}

CreateJobOutcome ElasticTranscoderClient::CreateJob(const CreateJobRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2012-09-25/jobs";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateJobOutcome(CreateJobResult(outcome.GetResult()));
  }
  else
  {
    return CreateJobOutcome(outcome.GetError());
  }
}

CreateJobOutcomeCallable ElasticTranscoderClient::CreateJobCallable(const CreateJobRequest& request) const
{
  return std::async(std::launch::async, &ElasticTranscoderClient::CreateJob, this, request);
}

void ElasticTranscoderClient::CreateJobAsync(const CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ElasticTranscoderClient::CreateJobAsyncHelper, this, request, handler, context);
}

void ElasticTranscoderClient::CreateJobAsyncHelper(const CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateJob(request), context);
}

CreatePipelineOutcome ElasticTranscoderClient::CreatePipeline(const CreatePipelineRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2012-09-25/pipelines";

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

CreatePipelineOutcomeCallable ElasticTranscoderClient::CreatePipelineCallable(const CreatePipelineRequest& request) const
{
  return std::async(std::launch::async, &ElasticTranscoderClient::CreatePipeline, this, request);
}

void ElasticTranscoderClient::CreatePipelineAsync(const CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ElasticTranscoderClient::CreatePipelineAsyncHelper, this, request, handler, context);
}

void ElasticTranscoderClient::CreatePipelineAsyncHelper(const CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePipeline(request), context);
}

CreatePresetOutcome ElasticTranscoderClient::CreatePreset(const CreatePresetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2012-09-25/presets";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreatePresetOutcome(CreatePresetResult(outcome.GetResult()));
  }
  else
  {
    return CreatePresetOutcome(outcome.GetError());
  }
}

CreatePresetOutcomeCallable ElasticTranscoderClient::CreatePresetCallable(const CreatePresetRequest& request) const
{
  return std::async(std::launch::async, &ElasticTranscoderClient::CreatePreset, this, request);
}

void ElasticTranscoderClient::CreatePresetAsync(const CreatePresetRequest& request, const CreatePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ElasticTranscoderClient::CreatePresetAsyncHelper, this, request, handler, context);
}

void ElasticTranscoderClient::CreatePresetAsyncHelper(const CreatePresetRequest& request, const CreatePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePreset(request), context);
}

DeletePipelineOutcome ElasticTranscoderClient::DeletePipeline(const DeletePipelineRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2012-09-25/pipelines/";
  ss << request.GetId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeletePipelineOutcome(DeletePipelineResult(outcome.GetResult()));
  }
  else
  {
    return DeletePipelineOutcome(outcome.GetError());
  }
}

DeletePipelineOutcomeCallable ElasticTranscoderClient::DeletePipelineCallable(const DeletePipelineRequest& request) const
{
  return std::async(std::launch::async, &ElasticTranscoderClient::DeletePipeline, this, request);
}

void ElasticTranscoderClient::DeletePipelineAsync(const DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ElasticTranscoderClient::DeletePipelineAsyncHelper, this, request, handler, context);
}

void ElasticTranscoderClient::DeletePipelineAsyncHelper(const DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePipeline(request), context);
}

DeletePresetOutcome ElasticTranscoderClient::DeletePreset(const DeletePresetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2012-09-25/presets/";
  ss << request.GetId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeletePresetOutcome(DeletePresetResult(outcome.GetResult()));
  }
  else
  {
    return DeletePresetOutcome(outcome.GetError());
  }
}

DeletePresetOutcomeCallable ElasticTranscoderClient::DeletePresetCallable(const DeletePresetRequest& request) const
{
  return std::async(std::launch::async, &ElasticTranscoderClient::DeletePreset, this, request);
}

void ElasticTranscoderClient::DeletePresetAsync(const DeletePresetRequest& request, const DeletePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ElasticTranscoderClient::DeletePresetAsyncHelper, this, request, handler, context);
}

void ElasticTranscoderClient::DeletePresetAsyncHelper(const DeletePresetRequest& request, const DeletePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePreset(request), context);
}

ListJobsByPipelineOutcome ElasticTranscoderClient::ListJobsByPipeline(const ListJobsByPipelineRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2012-09-25/jobsByPipeline/";
  ss << request.GetPipelineId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListJobsByPipelineOutcome(ListJobsByPipelineResult(outcome.GetResult()));
  }
  else
  {
    return ListJobsByPipelineOutcome(outcome.GetError());
  }
}

ListJobsByPipelineOutcomeCallable ElasticTranscoderClient::ListJobsByPipelineCallable(const ListJobsByPipelineRequest& request) const
{
  return std::async(std::launch::async, &ElasticTranscoderClient::ListJobsByPipeline, this, request);
}

void ElasticTranscoderClient::ListJobsByPipelineAsync(const ListJobsByPipelineRequest& request, const ListJobsByPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ElasticTranscoderClient::ListJobsByPipelineAsyncHelper, this, request, handler, context);
}

void ElasticTranscoderClient::ListJobsByPipelineAsyncHelper(const ListJobsByPipelineRequest& request, const ListJobsByPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListJobsByPipeline(request), context);
}

ListJobsByStatusOutcome ElasticTranscoderClient::ListJobsByStatus(const ListJobsByStatusRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2012-09-25/jobsByStatus/";
  ss << request.GetStatus();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListJobsByStatusOutcome(ListJobsByStatusResult(outcome.GetResult()));
  }
  else
  {
    return ListJobsByStatusOutcome(outcome.GetError());
  }
}

ListJobsByStatusOutcomeCallable ElasticTranscoderClient::ListJobsByStatusCallable(const ListJobsByStatusRequest& request) const
{
  return std::async(std::launch::async, &ElasticTranscoderClient::ListJobsByStatus, this, request);
}

void ElasticTranscoderClient::ListJobsByStatusAsync(const ListJobsByStatusRequest& request, const ListJobsByStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ElasticTranscoderClient::ListJobsByStatusAsyncHelper, this, request, handler, context);
}

void ElasticTranscoderClient::ListJobsByStatusAsyncHelper(const ListJobsByStatusRequest& request, const ListJobsByStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListJobsByStatus(request), context);
}

ListPipelinesOutcome ElasticTranscoderClient::ListPipelines(const ListPipelinesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2012-09-25/pipelines";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListPipelinesOutcome(ListPipelinesResult(outcome.GetResult()));
  }
  else
  {
    return ListPipelinesOutcome(outcome.GetError());
  }
}

ListPipelinesOutcomeCallable ElasticTranscoderClient::ListPipelinesCallable(const ListPipelinesRequest& request) const
{
  return std::async(std::launch::async, &ElasticTranscoderClient::ListPipelines, this, request);
}

void ElasticTranscoderClient::ListPipelinesAsync(const ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ElasticTranscoderClient::ListPipelinesAsyncHelper, this, request, handler, context);
}

void ElasticTranscoderClient::ListPipelinesAsyncHelper(const ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPipelines(request), context);
}

ListPresetsOutcome ElasticTranscoderClient::ListPresets(const ListPresetsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2012-09-25/presets";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListPresetsOutcome(ListPresetsResult(outcome.GetResult()));
  }
  else
  {
    return ListPresetsOutcome(outcome.GetError());
  }
}

ListPresetsOutcomeCallable ElasticTranscoderClient::ListPresetsCallable(const ListPresetsRequest& request) const
{
  return std::async(std::launch::async, &ElasticTranscoderClient::ListPresets, this, request);
}

void ElasticTranscoderClient::ListPresetsAsync(const ListPresetsRequest& request, const ListPresetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ElasticTranscoderClient::ListPresetsAsyncHelper, this, request, handler, context);
}

void ElasticTranscoderClient::ListPresetsAsyncHelper(const ListPresetsRequest& request, const ListPresetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPresets(request), context);
}

ReadJobOutcome ElasticTranscoderClient::ReadJob(const ReadJobRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2012-09-25/jobs/";
  ss << request.GetId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ReadJobOutcome(ReadJobResult(outcome.GetResult()));
  }
  else
  {
    return ReadJobOutcome(outcome.GetError());
  }
}

ReadJobOutcomeCallable ElasticTranscoderClient::ReadJobCallable(const ReadJobRequest& request) const
{
  return std::async(std::launch::async, &ElasticTranscoderClient::ReadJob, this, request);
}

void ElasticTranscoderClient::ReadJobAsync(const ReadJobRequest& request, const ReadJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ElasticTranscoderClient::ReadJobAsyncHelper, this, request, handler, context);
}

void ElasticTranscoderClient::ReadJobAsyncHelper(const ReadJobRequest& request, const ReadJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReadJob(request), context);
}

ReadPipelineOutcome ElasticTranscoderClient::ReadPipeline(const ReadPipelineRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2012-09-25/pipelines/";
  ss << request.GetId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ReadPipelineOutcome(ReadPipelineResult(outcome.GetResult()));
  }
  else
  {
    return ReadPipelineOutcome(outcome.GetError());
  }
}

ReadPipelineOutcomeCallable ElasticTranscoderClient::ReadPipelineCallable(const ReadPipelineRequest& request) const
{
  return std::async(std::launch::async, &ElasticTranscoderClient::ReadPipeline, this, request);
}

void ElasticTranscoderClient::ReadPipelineAsync(const ReadPipelineRequest& request, const ReadPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ElasticTranscoderClient::ReadPipelineAsyncHelper, this, request, handler, context);
}

void ElasticTranscoderClient::ReadPipelineAsyncHelper(const ReadPipelineRequest& request, const ReadPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReadPipeline(request), context);
}

ReadPresetOutcome ElasticTranscoderClient::ReadPreset(const ReadPresetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2012-09-25/presets/";
  ss << request.GetId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ReadPresetOutcome(ReadPresetResult(outcome.GetResult()));
  }
  else
  {
    return ReadPresetOutcome(outcome.GetError());
  }
}

ReadPresetOutcomeCallable ElasticTranscoderClient::ReadPresetCallable(const ReadPresetRequest& request) const
{
  return std::async(std::launch::async, &ElasticTranscoderClient::ReadPreset, this, request);
}

void ElasticTranscoderClient::ReadPresetAsync(const ReadPresetRequest& request, const ReadPresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ElasticTranscoderClient::ReadPresetAsyncHelper, this, request, handler, context);
}

void ElasticTranscoderClient::ReadPresetAsyncHelper(const ReadPresetRequest& request, const ReadPresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReadPreset(request), context);
}

TestRoleOutcome ElasticTranscoderClient::TestRole(const TestRoleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2012-09-25/roleTests";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return TestRoleOutcome(TestRoleResult(outcome.GetResult()));
  }
  else
  {
    return TestRoleOutcome(outcome.GetError());
  }
}

TestRoleOutcomeCallable ElasticTranscoderClient::TestRoleCallable(const TestRoleRequest& request) const
{
  return std::async(std::launch::async, &ElasticTranscoderClient::TestRole, this, request);
}

void ElasticTranscoderClient::TestRoleAsync(const TestRoleRequest& request, const TestRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ElasticTranscoderClient::TestRoleAsyncHelper, this, request, handler, context);
}

void ElasticTranscoderClient::TestRoleAsyncHelper(const TestRoleRequest& request, const TestRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TestRole(request), context);
}

UpdatePipelineOutcome ElasticTranscoderClient::UpdatePipeline(const UpdatePipelineRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2012-09-25/pipelines/";
  ss << request.GetId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdatePipelineOutcome(UpdatePipelineResult(outcome.GetResult()));
  }
  else
  {
    return UpdatePipelineOutcome(outcome.GetError());
  }
}

UpdatePipelineOutcomeCallable ElasticTranscoderClient::UpdatePipelineCallable(const UpdatePipelineRequest& request) const
{
  return std::async(std::launch::async, &ElasticTranscoderClient::UpdatePipeline, this, request);
}

void ElasticTranscoderClient::UpdatePipelineAsync(const UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ElasticTranscoderClient::UpdatePipelineAsyncHelper, this, request, handler, context);
}

void ElasticTranscoderClient::UpdatePipelineAsyncHelper(const UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePipeline(request), context);
}

UpdatePipelineNotificationsOutcome ElasticTranscoderClient::UpdatePipelineNotifications(const UpdatePipelineNotificationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2012-09-25/pipelines/";
  ss << request.GetId();
  ss << "/notifications";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdatePipelineNotificationsOutcome(UpdatePipelineNotificationsResult(outcome.GetResult()));
  }
  else
  {
    return UpdatePipelineNotificationsOutcome(outcome.GetError());
  }
}

UpdatePipelineNotificationsOutcomeCallable ElasticTranscoderClient::UpdatePipelineNotificationsCallable(const UpdatePipelineNotificationsRequest& request) const
{
  return std::async(std::launch::async, &ElasticTranscoderClient::UpdatePipelineNotifications, this, request);
}

void ElasticTranscoderClient::UpdatePipelineNotificationsAsync(const UpdatePipelineNotificationsRequest& request, const UpdatePipelineNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ElasticTranscoderClient::UpdatePipelineNotificationsAsyncHelper, this, request, handler, context);
}

void ElasticTranscoderClient::UpdatePipelineNotificationsAsyncHelper(const UpdatePipelineNotificationsRequest& request, const UpdatePipelineNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePipelineNotifications(request), context);
}

UpdatePipelineStatusOutcome ElasticTranscoderClient::UpdatePipelineStatus(const UpdatePipelineStatusRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2012-09-25/pipelines/";
  ss << request.GetId();
  ss << "/status";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdatePipelineStatusOutcome(UpdatePipelineStatusResult(outcome.GetResult()));
  }
  else
  {
    return UpdatePipelineStatusOutcome(outcome.GetError());
  }
}

UpdatePipelineStatusOutcomeCallable ElasticTranscoderClient::UpdatePipelineStatusCallable(const UpdatePipelineStatusRequest& request) const
{
  return std::async(std::launch::async, &ElasticTranscoderClient::UpdatePipelineStatus, this, request);
}

void ElasticTranscoderClient::UpdatePipelineStatusAsync(const UpdatePipelineStatusRequest& request, const UpdatePipelineStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ElasticTranscoderClient::UpdatePipelineStatusAsyncHelper, this, request, handler, context);
}

void ElasticTranscoderClient::UpdatePipelineStatusAsyncHelper(const UpdatePipelineStatusRequest& request, const UpdatePipelineStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePipelineStatus(request), context);
}

