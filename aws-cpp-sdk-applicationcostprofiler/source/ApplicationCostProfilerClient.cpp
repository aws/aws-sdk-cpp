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

#include <aws/applicationcostprofiler/ApplicationCostProfilerClient.h>
#include <aws/applicationcostprofiler/ApplicationCostProfilerEndpoint.h>
#include <aws/applicationcostprofiler/ApplicationCostProfilerErrorMarshaller.h>
#include <aws/applicationcostprofiler/model/DeleteReportDefinitionRequest.h>
#include <aws/applicationcostprofiler/model/GetReportDefinitionRequest.h>
#include <aws/applicationcostprofiler/model/ImportApplicationUsageRequest.h>
#include <aws/applicationcostprofiler/model/ListReportDefinitionsRequest.h>
#include <aws/applicationcostprofiler/model/PutReportDefinitionRequest.h>
#include <aws/applicationcostprofiler/model/UpdateReportDefinitionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ApplicationCostProfiler;
using namespace Aws::ApplicationCostProfiler::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "application-cost-profiler";
static const char* ALLOCATION_TAG = "ApplicationCostProfilerClient";

ApplicationCostProfilerClient::ApplicationCostProfilerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ApplicationCostProfilerErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApplicationCostProfilerClient::ApplicationCostProfilerClient(const AWSCredentials& credentials,
                                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ApplicationCostProfilerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApplicationCostProfilerClient::ApplicationCostProfilerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ApplicationCostProfilerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApplicationCostProfilerClient::~ApplicationCostProfilerClient()
{
}

void ApplicationCostProfilerClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("ApplicationCostProfiler");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ApplicationCostProfilerEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ApplicationCostProfilerClient::OverrideEndpoint(const Aws::String& endpoint)
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

DeleteReportDefinitionOutcome ApplicationCostProfilerClient::DeleteReportDefinition(const DeleteReportDefinitionRequest& request) const
{
  if (!request.ReportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteReportDefinition", "Required field: ReportId, is not set");
    return DeleteReportDefinitionOutcome(Aws::Client::AWSError<ApplicationCostProfilerErrors>(ApplicationCostProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReportId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/reportDefinition/");
  uri.AddPathSegment(request.GetReportId());
  return DeleteReportDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteReportDefinitionOutcomeCallable ApplicationCostProfilerClient::DeleteReportDefinitionCallable(const DeleteReportDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReportDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReportDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationCostProfilerClient::DeleteReportDefinitionAsync(const DeleteReportDefinitionRequest& request, const DeleteReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteReportDefinitionAsyncHelper( request, handler, context ); } );
}

void ApplicationCostProfilerClient::DeleteReportDefinitionAsyncHelper(const DeleteReportDefinitionRequest& request, const DeleteReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteReportDefinition(request), context);
}

GetReportDefinitionOutcome ApplicationCostProfilerClient::GetReportDefinition(const GetReportDefinitionRequest& request) const
{
  if (!request.ReportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetReportDefinition", "Required field: ReportId, is not set");
    return GetReportDefinitionOutcome(Aws::Client::AWSError<ApplicationCostProfilerErrors>(ApplicationCostProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReportId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/reportDefinition/");
  uri.AddPathSegment(request.GetReportId());
  return GetReportDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetReportDefinitionOutcomeCallable ApplicationCostProfilerClient::GetReportDefinitionCallable(const GetReportDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReportDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReportDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationCostProfilerClient::GetReportDefinitionAsync(const GetReportDefinitionRequest& request, const GetReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetReportDefinitionAsyncHelper( request, handler, context ); } );
}

void ApplicationCostProfilerClient::GetReportDefinitionAsyncHelper(const GetReportDefinitionRequest& request, const GetReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetReportDefinition(request), context);
}

ImportApplicationUsageOutcome ApplicationCostProfilerClient::ImportApplicationUsage(const ImportApplicationUsageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/importApplicationUsage");
  return ImportApplicationUsageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportApplicationUsageOutcomeCallable ApplicationCostProfilerClient::ImportApplicationUsageCallable(const ImportApplicationUsageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportApplicationUsageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportApplicationUsage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationCostProfilerClient::ImportApplicationUsageAsync(const ImportApplicationUsageRequest& request, const ImportApplicationUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportApplicationUsageAsyncHelper( request, handler, context ); } );
}

void ApplicationCostProfilerClient::ImportApplicationUsageAsyncHelper(const ImportApplicationUsageRequest& request, const ImportApplicationUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportApplicationUsage(request), context);
}

ListReportDefinitionsOutcome ApplicationCostProfilerClient::ListReportDefinitions(const ListReportDefinitionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/reportDefinition");
  return ListReportDefinitionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListReportDefinitionsOutcomeCallable ApplicationCostProfilerClient::ListReportDefinitionsCallable(const ListReportDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReportDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReportDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationCostProfilerClient::ListReportDefinitionsAsync(const ListReportDefinitionsRequest& request, const ListReportDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListReportDefinitionsAsyncHelper( request, handler, context ); } );
}

void ApplicationCostProfilerClient::ListReportDefinitionsAsyncHelper(const ListReportDefinitionsRequest& request, const ListReportDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListReportDefinitions(request), context);
}

PutReportDefinitionOutcome ApplicationCostProfilerClient::PutReportDefinition(const PutReportDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/reportDefinition");
  return PutReportDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutReportDefinitionOutcomeCallable ApplicationCostProfilerClient::PutReportDefinitionCallable(const PutReportDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutReportDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutReportDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationCostProfilerClient::PutReportDefinitionAsync(const PutReportDefinitionRequest& request, const PutReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutReportDefinitionAsyncHelper( request, handler, context ); } );
}

void ApplicationCostProfilerClient::PutReportDefinitionAsyncHelper(const PutReportDefinitionRequest& request, const PutReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutReportDefinition(request), context);
}

UpdateReportDefinitionOutcome ApplicationCostProfilerClient::UpdateReportDefinition(const UpdateReportDefinitionRequest& request) const
{
  if (!request.ReportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateReportDefinition", "Required field: ReportId, is not set");
    return UpdateReportDefinitionOutcome(Aws::Client::AWSError<ApplicationCostProfilerErrors>(ApplicationCostProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReportId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/reportDefinition/");
  uri.AddPathSegment(request.GetReportId());
  return UpdateReportDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateReportDefinitionOutcomeCallable ApplicationCostProfilerClient::UpdateReportDefinitionCallable(const UpdateReportDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateReportDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateReportDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationCostProfilerClient::UpdateReportDefinitionAsync(const UpdateReportDefinitionRequest& request, const UpdateReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateReportDefinitionAsyncHelper( request, handler, context ); } );
}

void ApplicationCostProfilerClient::UpdateReportDefinitionAsyncHelper(const UpdateReportDefinitionRequest& request, const UpdateReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateReportDefinition(request), context);
}

