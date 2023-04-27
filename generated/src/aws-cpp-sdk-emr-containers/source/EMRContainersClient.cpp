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

#include <aws/emr-containers/EMRContainersClient.h>
#include <aws/emr-containers/EMRContainersErrorMarshaller.h>
#include <aws/emr-containers/EMRContainersEndpointProvider.h>
#include <aws/emr-containers/model/CancelJobRunRequest.h>
#include <aws/emr-containers/model/CreateJobTemplateRequest.h>
#include <aws/emr-containers/model/CreateManagedEndpointRequest.h>
#include <aws/emr-containers/model/CreateVirtualClusterRequest.h>
#include <aws/emr-containers/model/DeleteJobTemplateRequest.h>
#include <aws/emr-containers/model/DeleteManagedEndpointRequest.h>
#include <aws/emr-containers/model/DeleteVirtualClusterRequest.h>
#include <aws/emr-containers/model/DescribeJobRunRequest.h>
#include <aws/emr-containers/model/DescribeJobTemplateRequest.h>
#include <aws/emr-containers/model/DescribeManagedEndpointRequest.h>
#include <aws/emr-containers/model/DescribeVirtualClusterRequest.h>
#include <aws/emr-containers/model/GetManagedEndpointSessionCredentialsRequest.h>
#include <aws/emr-containers/model/ListJobRunsRequest.h>
#include <aws/emr-containers/model/ListJobTemplatesRequest.h>
#include <aws/emr-containers/model/ListManagedEndpointsRequest.h>
#include <aws/emr-containers/model/ListTagsForResourceRequest.h>
#include <aws/emr-containers/model/ListVirtualClustersRequest.h>
#include <aws/emr-containers/model/StartJobRunRequest.h>
#include <aws/emr-containers/model/TagResourceRequest.h>
#include <aws/emr-containers/model/UntagResourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EMRContainers;
using namespace Aws::EMRContainers::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* EMRContainersClient::SERVICE_NAME = "emr-containers";
const char* EMRContainersClient::ALLOCATION_TAG = "EMRContainersClient";

EMRContainersClient::EMRContainersClient(const EMRContainers::EMRContainersClientConfiguration& clientConfiguration,
                                         std::shared_ptr<EMRContainersEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EMRContainersErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

EMRContainersClient::EMRContainersClient(const AWSCredentials& credentials,
                                         std::shared_ptr<EMRContainersEndpointProviderBase> endpointProvider,
                                         const EMRContainers::EMRContainersClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EMRContainersErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

EMRContainersClient::EMRContainersClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<EMRContainersEndpointProviderBase> endpointProvider,
                                         const EMRContainers::EMRContainersClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EMRContainersErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  EMRContainersClient::EMRContainersClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EMRContainersErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<EMRContainersEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

EMRContainersClient::EMRContainersClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EMRContainersErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<EMRContainersEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

EMRContainersClient::EMRContainersClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EMRContainersErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<EMRContainersEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
EMRContainersClient::~EMRContainersClient()
{
}

std::shared_ptr<EMRContainersEndpointProviderBase>& EMRContainersClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void EMRContainersClient::init(const EMRContainers::EMRContainersClientConfiguration& config)
{
  AWSClient::SetServiceClientName("EMR containers");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void EMRContainersClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CancelJobRunOutcome EMRContainersClient::CancelJobRun(const CancelJobRunRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelJobRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelJobRun", "Required field: Id, is not set");
    return CancelJobRunOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.VirtualClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelJobRun", "Required field: VirtualClusterId, is not set");
    return CancelJobRunOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualClusterId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelJobRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobruns/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return CancelJobRunOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

CreateJobTemplateOutcome EMRContainersClient::CreateJobTemplate(const CreateJobTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateJobTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateJobTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobtemplates");
  return CreateJobTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateManagedEndpointOutcome EMRContainersClient::CreateManagedEndpoint(const CreateManagedEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateManagedEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VirtualClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateManagedEndpoint", "Required field: VirtualClusterId, is not set");
    return CreateManagedEndpointOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualClusterId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateManagedEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints");
  return CreateManagedEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVirtualClusterOutcome EMRContainersClient::CreateVirtualCluster(const CreateVirtualClusterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVirtualCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVirtualCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters");
  return CreateVirtualClusterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteJobTemplateOutcome EMRContainersClient::DeleteJobTemplate(const DeleteJobTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteJobTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteJobTemplate", "Required field: Id, is not set");
    return DeleteJobTemplateOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteJobTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobtemplates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteJobTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteManagedEndpointOutcome EMRContainersClient::DeleteManagedEndpoint(const DeleteManagedEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteManagedEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteManagedEndpoint", "Required field: Id, is not set");
    return DeleteManagedEndpointOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.VirtualClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteManagedEndpoint", "Required field: VirtualClusterId, is not set");
    return DeleteManagedEndpointOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualClusterId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteManagedEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteManagedEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVirtualClusterOutcome EMRContainersClient::DeleteVirtualCluster(const DeleteVirtualClusterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVirtualCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVirtualCluster", "Required field: Id, is not set");
    return DeleteVirtualClusterOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVirtualCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteVirtualClusterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DescribeJobRunOutcome EMRContainersClient::DescribeJobRun(const DescribeJobRunRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeJobRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJobRun", "Required field: Id, is not set");
    return DescribeJobRunOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.VirtualClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJobRun", "Required field: VirtualClusterId, is not set");
    return DescribeJobRunOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualClusterId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeJobRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobruns/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DescribeJobRunOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeJobTemplateOutcome EMRContainersClient::DescribeJobTemplate(const DescribeJobTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeJobTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJobTemplate", "Required field: Id, is not set");
    return DescribeJobTemplateOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeJobTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobtemplates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DescribeJobTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeManagedEndpointOutcome EMRContainersClient::DescribeManagedEndpoint(const DescribeManagedEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeManagedEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeManagedEndpoint", "Required field: Id, is not set");
    return DescribeManagedEndpointOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.VirtualClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeManagedEndpoint", "Required field: VirtualClusterId, is not set");
    return DescribeManagedEndpointOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualClusterId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeManagedEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DescribeManagedEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeVirtualClusterOutcome EMRContainersClient::DescribeVirtualCluster(const DescribeVirtualClusterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVirtualCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeVirtualCluster", "Required field: Id, is not set");
    return DescribeVirtualClusterOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVirtualCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DescribeVirtualClusterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetManagedEndpointSessionCredentialsOutcome EMRContainersClient::GetManagedEndpointSessionCredentials(const GetManagedEndpointSessionCredentialsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetManagedEndpointSessionCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EndpointIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetManagedEndpointSessionCredentials", "Required field: EndpointIdentifier, is not set");
    return GetManagedEndpointSessionCredentialsOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointIdentifier]", false));
  }
  if (!request.VirtualClusterIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetManagedEndpointSessionCredentials", "Required field: VirtualClusterIdentifier, is not set");
    return GetManagedEndpointSessionCredentialsOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualClusterIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetManagedEndpointSessionCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEndpointIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/credentials");
  return GetManagedEndpointSessionCredentialsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListJobRunsOutcome EMRContainersClient::ListJobRuns(const ListJobRunsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJobRuns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VirtualClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobRuns", "Required field: VirtualClusterId, is not set");
    return ListJobRunsOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualClusterId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJobRuns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobruns");
  return ListJobRunsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJobTemplatesOutcome EMRContainersClient::ListJobTemplates(const ListJobTemplatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJobTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJobTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobtemplates");
  return ListJobTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListManagedEndpointsOutcome EMRContainersClient::ListManagedEndpoints(const ListManagedEndpointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListManagedEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VirtualClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListManagedEndpoints", "Required field: VirtualClusterId, is not set");
    return ListManagedEndpointsOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualClusterId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListManagedEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints");
  return ListManagedEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome EMRContainersClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVirtualClustersOutcome EMRContainersClient::ListVirtualClusters(const ListVirtualClustersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVirtualClusters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVirtualClusters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters");
  return ListVirtualClustersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

StartJobRunOutcome EMRContainersClient::StartJobRun(const StartJobRunRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartJobRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VirtualClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartJobRun", "Required field: VirtualClusterId, is not set");
    return StartJobRunOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualClusterId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartJobRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobruns");
  return StartJobRunOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome EMRContainersClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome EMRContainersClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

