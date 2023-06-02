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
  ShutdownSdkClient(this, -1);
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
  AWS_OPERATION_GUARD(DeleteReportDefinition);
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

GetReportDefinitionOutcome ApplicationCostProfilerClient::GetReportDefinition(const GetReportDefinitionRequest& request) const
{
  AWS_OPERATION_GUARD(GetReportDefinition);
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

ImportApplicationUsageOutcome ApplicationCostProfilerClient::ImportApplicationUsage(const ImportApplicationUsageRequest& request) const
{
  AWS_OPERATION_GUARD(ImportApplicationUsage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportApplicationUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportApplicationUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/importApplicationUsage");
  return ImportApplicationUsageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListReportDefinitionsOutcome ApplicationCostProfilerClient::ListReportDefinitions(const ListReportDefinitionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListReportDefinitions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListReportDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListReportDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/reportDefinition");
  return ListReportDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

PutReportDefinitionOutcome ApplicationCostProfilerClient::PutReportDefinition(const PutReportDefinitionRequest& request) const
{
  AWS_OPERATION_GUARD(PutReportDefinition);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutReportDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutReportDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/reportDefinition");
  return PutReportDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateReportDefinitionOutcome ApplicationCostProfilerClient::UpdateReportDefinition(const UpdateReportDefinitionRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateReportDefinition);
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

