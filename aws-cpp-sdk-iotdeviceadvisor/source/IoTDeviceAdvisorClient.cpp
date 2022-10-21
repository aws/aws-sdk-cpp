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

#include <aws/iotdeviceadvisor/IoTDeviceAdvisorClient.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorEndpoint.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorErrorMarshaller.h>
#include <aws/iotdeviceadvisor/model/CreateSuiteDefinitionRequest.h>
#include <aws/iotdeviceadvisor/model/DeleteSuiteDefinitionRequest.h>
#include <aws/iotdeviceadvisor/model/GetEndpointRequest.h>
#include <aws/iotdeviceadvisor/model/GetSuiteDefinitionRequest.h>
#include <aws/iotdeviceadvisor/model/GetSuiteRunRequest.h>
#include <aws/iotdeviceadvisor/model/GetSuiteRunReportRequest.h>
#include <aws/iotdeviceadvisor/model/ListSuiteDefinitionsRequest.h>
#include <aws/iotdeviceadvisor/model/ListSuiteRunsRequest.h>
#include <aws/iotdeviceadvisor/model/ListTagsForResourceRequest.h>
#include <aws/iotdeviceadvisor/model/StartSuiteRunRequest.h>
#include <aws/iotdeviceadvisor/model/StopSuiteRunRequest.h>
#include <aws/iotdeviceadvisor/model/TagResourceRequest.h>
#include <aws/iotdeviceadvisor/model/UntagResourceRequest.h>
#include <aws/iotdeviceadvisor/model/UpdateSuiteDefinitionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoTDeviceAdvisor;
using namespace Aws::IoTDeviceAdvisor::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

const char* IoTDeviceAdvisorClient::SERVICE_NAME = "iotdeviceadvisor";
const char* IoTDeviceAdvisorClient::ALLOCATION_TAG = "IoTDeviceAdvisorClient";

IoTDeviceAdvisorClient::IoTDeviceAdvisorClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTDeviceAdvisorErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTDeviceAdvisorClient::IoTDeviceAdvisorClient(const AWSCredentials& credentials,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTDeviceAdvisorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTDeviceAdvisorClient::IoTDeviceAdvisorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTDeviceAdvisorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTDeviceAdvisorClient::~IoTDeviceAdvisorClient()
{
}

void IoTDeviceAdvisorClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("IotDeviceAdvisor");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + IoTDeviceAdvisorEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void IoTDeviceAdvisorClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateSuiteDefinitionOutcome IoTDeviceAdvisorClient::CreateSuiteDefinition(const CreateSuiteDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/suiteDefinitions");
  return CreateSuiteDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSuiteDefinitionOutcomeCallable IoTDeviceAdvisorClient::CreateSuiteDefinitionCallable(const CreateSuiteDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSuiteDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSuiteDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTDeviceAdvisorClient::CreateSuiteDefinitionAsync(const CreateSuiteDefinitionRequest& request, const CreateSuiteDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSuiteDefinition(request), context);
    } );
}

DeleteSuiteDefinitionOutcome IoTDeviceAdvisorClient::DeleteSuiteDefinition(const DeleteSuiteDefinitionRequest& request) const
{
  if (!request.SuiteDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSuiteDefinition", "Required field: SuiteDefinitionId, is not set");
    return DeleteSuiteDefinitionOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteDefinitionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/suiteDefinitions/");
  uri.AddPathSegment(request.GetSuiteDefinitionId());
  return DeleteSuiteDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSuiteDefinitionOutcomeCallable IoTDeviceAdvisorClient::DeleteSuiteDefinitionCallable(const DeleteSuiteDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSuiteDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSuiteDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTDeviceAdvisorClient::DeleteSuiteDefinitionAsync(const DeleteSuiteDefinitionRequest& request, const DeleteSuiteDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSuiteDefinition(request), context);
    } );
}

GetEndpointOutcome IoTDeviceAdvisorClient::GetEndpoint(const GetEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/endpoint");
  return GetEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEndpointOutcomeCallable IoTDeviceAdvisorClient::GetEndpointCallable(const GetEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTDeviceAdvisorClient::GetEndpointAsync(const GetEndpointRequest& request, const GetEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEndpoint(request), context);
    } );
}

GetSuiteDefinitionOutcome IoTDeviceAdvisorClient::GetSuiteDefinition(const GetSuiteDefinitionRequest& request) const
{
  if (!request.SuiteDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSuiteDefinition", "Required field: SuiteDefinitionId, is not set");
    return GetSuiteDefinitionOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteDefinitionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/suiteDefinitions/");
  uri.AddPathSegment(request.GetSuiteDefinitionId());
  return GetSuiteDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSuiteDefinitionOutcomeCallable IoTDeviceAdvisorClient::GetSuiteDefinitionCallable(const GetSuiteDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSuiteDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSuiteDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTDeviceAdvisorClient::GetSuiteDefinitionAsync(const GetSuiteDefinitionRequest& request, const GetSuiteDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSuiteDefinition(request), context);
    } );
}

GetSuiteRunOutcome IoTDeviceAdvisorClient::GetSuiteRun(const GetSuiteRunRequest& request) const
{
  if (!request.SuiteDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSuiteRun", "Required field: SuiteDefinitionId, is not set");
    return GetSuiteRunOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteDefinitionId]", false));
  }
  if (!request.SuiteRunIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSuiteRun", "Required field: SuiteRunId, is not set");
    return GetSuiteRunOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteRunId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/suiteDefinitions/");
  uri.AddPathSegment(request.GetSuiteDefinitionId());
  uri.AddPathSegments("/suiteRuns/");
  uri.AddPathSegment(request.GetSuiteRunId());
  return GetSuiteRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSuiteRunOutcomeCallable IoTDeviceAdvisorClient::GetSuiteRunCallable(const GetSuiteRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSuiteRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSuiteRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTDeviceAdvisorClient::GetSuiteRunAsync(const GetSuiteRunRequest& request, const GetSuiteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSuiteRun(request), context);
    } );
}

GetSuiteRunReportOutcome IoTDeviceAdvisorClient::GetSuiteRunReport(const GetSuiteRunReportRequest& request) const
{
  if (!request.SuiteDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSuiteRunReport", "Required field: SuiteDefinitionId, is not set");
    return GetSuiteRunReportOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteDefinitionId]", false));
  }
  if (!request.SuiteRunIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSuiteRunReport", "Required field: SuiteRunId, is not set");
    return GetSuiteRunReportOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteRunId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/suiteDefinitions/");
  uri.AddPathSegment(request.GetSuiteDefinitionId());
  uri.AddPathSegments("/suiteRuns/");
  uri.AddPathSegment(request.GetSuiteRunId());
  uri.AddPathSegments("/report");
  return GetSuiteRunReportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSuiteRunReportOutcomeCallable IoTDeviceAdvisorClient::GetSuiteRunReportCallable(const GetSuiteRunReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSuiteRunReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSuiteRunReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTDeviceAdvisorClient::GetSuiteRunReportAsync(const GetSuiteRunReportRequest& request, const GetSuiteRunReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSuiteRunReport(request), context);
    } );
}

ListSuiteDefinitionsOutcome IoTDeviceAdvisorClient::ListSuiteDefinitions(const ListSuiteDefinitionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/suiteDefinitions");
  return ListSuiteDefinitionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSuiteDefinitionsOutcomeCallable IoTDeviceAdvisorClient::ListSuiteDefinitionsCallable(const ListSuiteDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSuiteDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSuiteDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTDeviceAdvisorClient::ListSuiteDefinitionsAsync(const ListSuiteDefinitionsRequest& request, const ListSuiteDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSuiteDefinitions(request), context);
    } );
}

ListSuiteRunsOutcome IoTDeviceAdvisorClient::ListSuiteRuns(const ListSuiteRunsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/suiteRuns");
  return ListSuiteRunsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSuiteRunsOutcomeCallable IoTDeviceAdvisorClient::ListSuiteRunsCallable(const ListSuiteRunsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSuiteRunsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSuiteRuns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTDeviceAdvisorClient::ListSuiteRunsAsync(const ListSuiteRunsRequest& request, const ListSuiteRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSuiteRuns(request), context);
    } );
}

ListTagsForResourceOutcome IoTDeviceAdvisorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable IoTDeviceAdvisorClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTDeviceAdvisorClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

StartSuiteRunOutcome IoTDeviceAdvisorClient::StartSuiteRun(const StartSuiteRunRequest& request) const
{
  if (!request.SuiteDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartSuiteRun", "Required field: SuiteDefinitionId, is not set");
    return StartSuiteRunOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteDefinitionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/suiteDefinitions/");
  uri.AddPathSegment(request.GetSuiteDefinitionId());
  uri.AddPathSegments("/suiteRuns");
  return StartSuiteRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartSuiteRunOutcomeCallable IoTDeviceAdvisorClient::StartSuiteRunCallable(const StartSuiteRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartSuiteRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartSuiteRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTDeviceAdvisorClient::StartSuiteRunAsync(const StartSuiteRunRequest& request, const StartSuiteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartSuiteRun(request), context);
    } );
}

StopSuiteRunOutcome IoTDeviceAdvisorClient::StopSuiteRun(const StopSuiteRunRequest& request) const
{
  if (!request.SuiteDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopSuiteRun", "Required field: SuiteDefinitionId, is not set");
    return StopSuiteRunOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteDefinitionId]", false));
  }
  if (!request.SuiteRunIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopSuiteRun", "Required field: SuiteRunId, is not set");
    return StopSuiteRunOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteRunId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/suiteDefinitions/");
  uri.AddPathSegment(request.GetSuiteDefinitionId());
  uri.AddPathSegments("/suiteRuns/");
  uri.AddPathSegment(request.GetSuiteRunId());
  uri.AddPathSegments("/stop");
  return StopSuiteRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopSuiteRunOutcomeCallable IoTDeviceAdvisorClient::StopSuiteRunCallable(const StopSuiteRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopSuiteRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopSuiteRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTDeviceAdvisorClient::StopSuiteRunAsync(const StopSuiteRunRequest& request, const StopSuiteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopSuiteRun(request), context);
    } );
}

TagResourceOutcome IoTDeviceAdvisorClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable IoTDeviceAdvisorClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTDeviceAdvisorClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome IoTDeviceAdvisorClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable IoTDeviceAdvisorClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTDeviceAdvisorClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateSuiteDefinitionOutcome IoTDeviceAdvisorClient::UpdateSuiteDefinition(const UpdateSuiteDefinitionRequest& request) const
{
  if (!request.SuiteDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSuiteDefinition", "Required field: SuiteDefinitionId, is not set");
    return UpdateSuiteDefinitionOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteDefinitionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/suiteDefinitions/");
  uri.AddPathSegment(request.GetSuiteDefinitionId());
  return UpdateSuiteDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateSuiteDefinitionOutcomeCallable IoTDeviceAdvisorClient::UpdateSuiteDefinitionCallable(const UpdateSuiteDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSuiteDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSuiteDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTDeviceAdvisorClient::UpdateSuiteDefinitionAsync(const UpdateSuiteDefinitionRequest& request, const UpdateSuiteDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSuiteDefinition(request), context);
    } );
}

