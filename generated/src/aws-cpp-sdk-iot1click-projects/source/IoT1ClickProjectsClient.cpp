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

#include <aws/iot1click-projects/IoT1ClickProjectsClient.h>
#include <aws/iot1click-projects/IoT1ClickProjectsErrorMarshaller.h>
#include <aws/iot1click-projects/IoT1ClickProjectsEndpointProvider.h>
#include <aws/iot1click-projects/model/AssociateDeviceWithPlacementRequest.h>
#include <aws/iot1click-projects/model/CreatePlacementRequest.h>
#include <aws/iot1click-projects/model/CreateProjectRequest.h>
#include <aws/iot1click-projects/model/DeletePlacementRequest.h>
#include <aws/iot1click-projects/model/DeleteProjectRequest.h>
#include <aws/iot1click-projects/model/DescribePlacementRequest.h>
#include <aws/iot1click-projects/model/DescribeProjectRequest.h>
#include <aws/iot1click-projects/model/DisassociateDeviceFromPlacementRequest.h>
#include <aws/iot1click-projects/model/GetDevicesInPlacementRequest.h>
#include <aws/iot1click-projects/model/ListPlacementsRequest.h>
#include <aws/iot1click-projects/model/ListProjectsRequest.h>
#include <aws/iot1click-projects/model/ListTagsForResourceRequest.h>
#include <aws/iot1click-projects/model/TagResourceRequest.h>
#include <aws/iot1click-projects/model/UntagResourceRequest.h>
#include <aws/iot1click-projects/model/UpdatePlacementRequest.h>
#include <aws/iot1click-projects/model/UpdateProjectRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoT1ClickProjects;
using namespace Aws::IoT1ClickProjects::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* IoT1ClickProjectsClient::SERVICE_NAME = "iot1click";
const char* IoT1ClickProjectsClient::ALLOCATION_TAG = "IoT1ClickProjectsClient";

IoT1ClickProjectsClient::IoT1ClickProjectsClient(const IoT1ClickProjects::IoT1ClickProjectsClientConfiguration& clientConfiguration,
                                                 std::shared_ptr<IoT1ClickProjectsEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoT1ClickProjectsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

IoT1ClickProjectsClient::IoT1ClickProjectsClient(const AWSCredentials& credentials,
                                                 std::shared_ptr<IoT1ClickProjectsEndpointProviderBase> endpointProvider,
                                                 const IoT1ClickProjects::IoT1ClickProjectsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoT1ClickProjectsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

IoT1ClickProjectsClient::IoT1ClickProjectsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 std::shared_ptr<IoT1ClickProjectsEndpointProviderBase> endpointProvider,
                                                 const IoT1ClickProjects::IoT1ClickProjectsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoT1ClickProjectsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  IoT1ClickProjectsClient::IoT1ClickProjectsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoT1ClickProjectsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<IoT1ClickProjectsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

IoT1ClickProjectsClient::IoT1ClickProjectsClient(const AWSCredentials& credentials,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoT1ClickProjectsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<IoT1ClickProjectsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

IoT1ClickProjectsClient::IoT1ClickProjectsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoT1ClickProjectsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<IoT1ClickProjectsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
IoT1ClickProjectsClient::~IoT1ClickProjectsClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<IoT1ClickProjectsEndpointProviderBase>& IoT1ClickProjectsClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void IoT1ClickProjectsClient::init(const IoT1ClickProjects::IoT1ClickProjectsClientConfiguration& config)
{
  AWSClient::SetServiceClientName("IoT 1Click Projects");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void IoT1ClickProjectsClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateDeviceWithPlacementOutcome IoT1ClickProjectsClient::AssociateDeviceWithPlacement(const AssociateDeviceWithPlacementRequest& request) const
{
  AWS_OPERATION_GUARD(AssociateDeviceWithPlacement);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateDeviceWithPlacement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateDeviceWithPlacement", "Required field: ProjectName, is not set");
    return AssociateDeviceWithPlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.PlacementNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateDeviceWithPlacement", "Required field: PlacementName, is not set");
    return AssociateDeviceWithPlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlacementName]", false));
  }
  if (!request.DeviceTemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateDeviceWithPlacement", "Required field: DeviceTemplateName, is not set");
    return AssociateDeviceWithPlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceTemplateName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateDeviceWithPlacement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/placements/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPlacementName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceTemplateName());
  return AssociateDeviceWithPlacementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreatePlacementOutcome IoT1ClickProjectsClient::CreatePlacement(const CreatePlacementRequest& request) const
{
  AWS_OPERATION_GUARD(CreatePlacement);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePlacement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreatePlacement", "Required field: ProjectName, is not set");
    return CreatePlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePlacement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/placements");
  return CreatePlacementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProjectOutcome IoT1ClickProjectsClient::CreateProject(const CreateProjectRequest& request) const
{
  AWS_OPERATION_GUARD(CreateProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects");
  return CreateProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePlacementOutcome IoT1ClickProjectsClient::DeletePlacement(const DeletePlacementRequest& request) const
{
  AWS_OPERATION_GUARD(DeletePlacement);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePlacement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PlacementNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePlacement", "Required field: PlacementName, is not set");
    return DeletePlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlacementName]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePlacement", "Required field: ProjectName, is not set");
    return DeletePlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePlacement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/placements/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPlacementName());
  return DeletePlacementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteProjectOutcome IoT1ClickProjectsClient::DeleteProject(const DeleteProjectRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProject", "Required field: ProjectName, is not set");
    return DeleteProjectOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
  return DeleteProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DescribePlacementOutcome IoT1ClickProjectsClient::DescribePlacement(const DescribePlacementRequest& request) const
{
  AWS_OPERATION_GUARD(DescribePlacement);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePlacement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PlacementNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePlacement", "Required field: PlacementName, is not set");
    return DescribePlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlacementName]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePlacement", "Required field: ProjectName, is not set");
    return DescribePlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePlacement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/placements/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPlacementName());
  return DescribePlacementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeProjectOutcome IoT1ClickProjectsClient::DescribeProject(const DescribeProjectRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeProject", "Required field: ProjectName, is not set");
    return DescribeProjectOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
  return DescribeProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DisassociateDeviceFromPlacementOutcome IoT1ClickProjectsClient::DisassociateDeviceFromPlacement(const DisassociateDeviceFromPlacementRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociateDeviceFromPlacement);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateDeviceFromPlacement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateDeviceFromPlacement", "Required field: ProjectName, is not set");
    return DisassociateDeviceFromPlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.PlacementNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateDeviceFromPlacement", "Required field: PlacementName, is not set");
    return DisassociateDeviceFromPlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlacementName]", false));
  }
  if (!request.DeviceTemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateDeviceFromPlacement", "Required field: DeviceTemplateName, is not set");
    return DisassociateDeviceFromPlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceTemplateName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateDeviceFromPlacement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/placements/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPlacementName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceTemplateName());
  return DisassociateDeviceFromPlacementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

GetDevicesInPlacementOutcome IoT1ClickProjectsClient::GetDevicesInPlacement(const GetDevicesInPlacementRequest& request) const
{
  AWS_OPERATION_GUARD(GetDevicesInPlacement);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDevicesInPlacement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDevicesInPlacement", "Required field: ProjectName, is not set");
    return GetDevicesInPlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.PlacementNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDevicesInPlacement", "Required field: PlacementName, is not set");
    return GetDevicesInPlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlacementName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDevicesInPlacement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/placements/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPlacementName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/devices");
  return GetDevicesInPlacementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPlacementsOutcome IoT1ClickProjectsClient::ListPlacements(const ListPlacementsRequest& request) const
{
  AWS_OPERATION_GUARD(ListPlacements);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPlacements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPlacements", "Required field: ProjectName, is not set");
    return ListPlacementsOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPlacements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/placements");
  return ListPlacementsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProjectsOutcome IoT1ClickProjectsClient::ListProjects(const ListProjectsRequest& request) const
{
  AWS_OPERATION_GUARD(ListProjects);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects");
  return ListProjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome IoT1ClickProjectsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome IoT1ClickProjectsClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome IoT1ClickProjectsClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdatePlacementOutcome IoT1ClickProjectsClient::UpdatePlacement(const UpdatePlacementRequest& request) const
{
  AWS_OPERATION_GUARD(UpdatePlacement);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePlacement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PlacementNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePlacement", "Required field: PlacementName, is not set");
    return UpdatePlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlacementName]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePlacement", "Required field: ProjectName, is not set");
    return UpdatePlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePlacement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/placements/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPlacementName());
  return UpdatePlacementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateProjectOutcome IoT1ClickProjectsClient::UpdateProject(const UpdateProjectRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProject", "Required field: ProjectName, is not set");
    return UpdateProjectOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectName());
  return UpdateProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

