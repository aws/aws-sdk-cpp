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

#include <aws/applicationcostprofiler/ApplicationCostProfilerClient.h>
#include <aws/applicationcostprofiler/ApplicationCostProfilerErrorMarshaller.h>
#include <aws/applicationcostprofiler/ApplicationCostProfilerEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* ApplicationCostProfilerClient::SERVICE_NAME = "application-cost-profiler";
const char* ApplicationCostProfilerClient::ALLOCATION_TAG = "ApplicationCostProfilerClient";

ApplicationCostProfilerClient::ApplicationCostProfilerClient(const ApplicationCostProfiler::ApplicationCostProfilerClientConfiguration& clientConfiguration,
                                                             std::shared_ptr<ApplicationCostProfilerEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ApplicationCostProfilerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ApplicationCostProfilerClient::ApplicationCostProfilerClient(const AWSCredentials& credentials,
                                                             std::shared_ptr<ApplicationCostProfilerEndpointProviderBase> endpointProvider,
                                                             const ApplicationCostProfiler::ApplicationCostProfilerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ApplicationCostProfilerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ApplicationCostProfilerClient::ApplicationCostProfilerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                             std::shared_ptr<ApplicationCostProfilerEndpointProviderBase> endpointProvider,
                                                             const ApplicationCostProfiler::ApplicationCostProfilerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ApplicationCostProfilerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  ApplicationCostProfilerClient::ApplicationCostProfilerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ApplicationCostProfilerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<ApplicationCostProfilerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ApplicationCostProfilerClient::ApplicationCostProfilerClient(const AWSCredentials& credentials,
                                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ApplicationCostProfilerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ApplicationCostProfilerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ApplicationCostProfilerClient::ApplicationCostProfilerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ApplicationCostProfilerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ApplicationCostProfilerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
ApplicationCostProfilerClient::~ApplicationCostProfilerClient()
{
}

std::shared_ptr<ApplicationCostProfilerEndpointProviderBase>& ApplicationCostProfilerClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ApplicationCostProfilerClient::init(const ApplicationCostProfiler::ApplicationCostProfilerClientConfiguration& config)
{
  AWSClient::SetServiceClientName("ApplicationCostProfiler");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void ApplicationCostProfilerClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

DeleteReportDefinitionOutcome ApplicationCostProfilerClient::DeleteReportDefinition(const DeleteReportDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteReportDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ReportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteReportDefinition", "Required field: ReportId, is not set");
    return DeleteReportDefinitionOutcome(Aws::Client::AWSError<ApplicationCostProfilerErrors>(ApplicationCostProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReportId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteReportDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/reportDefinition/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReportId());
  return DeleteReportDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteReportDefinition(request), context);
    } );
}

GetReportDefinitionOutcome ApplicationCostProfilerClient::GetReportDefinition(const GetReportDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetReportDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ReportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetReportDefinition", "Required field: ReportId, is not set");
    return GetReportDefinitionOutcome(Aws::Client::AWSError<ApplicationCostProfilerErrors>(ApplicationCostProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReportId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetReportDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/reportDefinition/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReportId());
  return GetReportDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetReportDefinition(request), context);
    } );
}

ImportApplicationUsageOutcome ApplicationCostProfilerClient::ImportApplicationUsage(const ImportApplicationUsageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportApplicationUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportApplicationUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/importApplicationUsage");
  return ImportApplicationUsageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ImportApplicationUsage(request), context);
    } );
}

ListReportDefinitionsOutcome ApplicationCostProfilerClient::ListReportDefinitions(const ListReportDefinitionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListReportDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListReportDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/reportDefinition");
  return ListReportDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListReportDefinitions(request), context);
    } );
}

PutReportDefinitionOutcome ApplicationCostProfilerClient::PutReportDefinition(const PutReportDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutReportDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutReportDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/reportDefinition");
  return PutReportDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutReportDefinition(request), context);
    } );
}

UpdateReportDefinitionOutcome ApplicationCostProfilerClient::UpdateReportDefinition(const UpdateReportDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateReportDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ReportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateReportDefinition", "Required field: ReportId, is not set");
    return UpdateReportDefinitionOutcome(Aws::Client::AWSError<ApplicationCostProfilerErrors>(ApplicationCostProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReportId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateReportDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/reportDefinition/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReportId());
  return UpdateReportDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateReportDefinition(request), context);
    } );
}

