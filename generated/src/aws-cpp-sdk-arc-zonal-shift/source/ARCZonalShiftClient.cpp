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

#include <aws/arc-zonal-shift/ARCZonalShiftClient.h>
#include <aws/arc-zonal-shift/ARCZonalShiftErrorMarshaller.h>
#include <aws/arc-zonal-shift/ARCZonalShiftEndpointProvider.h>
#include <aws/arc-zonal-shift/model/CancelZonalShiftRequest.h>
#include <aws/arc-zonal-shift/model/GetManagedResourceRequest.h>
#include <aws/arc-zonal-shift/model/ListManagedResourcesRequest.h>
#include <aws/arc-zonal-shift/model/ListZonalShiftsRequest.h>
#include <aws/arc-zonal-shift/model/StartZonalShiftRequest.h>
#include <aws/arc-zonal-shift/model/UpdateZonalShiftRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ARCZonalShift;
using namespace Aws::ARCZonalShift::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* ARCZonalShiftClient::SERVICE_NAME = "arc-zonal-shift";
const char* ARCZonalShiftClient::ALLOCATION_TAG = "ARCZonalShiftClient";

ARCZonalShiftClient::ARCZonalShiftClient(const ARCZonalShift::ARCZonalShiftClientConfiguration& clientConfiguration,
                                         std::shared_ptr<ARCZonalShiftEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ARCZonalShiftErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ARCZonalShiftClient::ARCZonalShiftClient(const AWSCredentials& credentials,
                                         std::shared_ptr<ARCZonalShiftEndpointProviderBase> endpointProvider,
                                         const ARCZonalShift::ARCZonalShiftClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ARCZonalShiftErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ARCZonalShiftClient::ARCZonalShiftClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<ARCZonalShiftEndpointProviderBase> endpointProvider,
                                         const ARCZonalShift::ARCZonalShiftClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ARCZonalShiftErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  ARCZonalShiftClient::ARCZonalShiftClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ARCZonalShiftErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<ARCZonalShiftEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ARCZonalShiftClient::ARCZonalShiftClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ARCZonalShiftErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ARCZonalShiftEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ARCZonalShiftClient::ARCZonalShiftClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ARCZonalShiftErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ARCZonalShiftEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
ARCZonalShiftClient::~ARCZonalShiftClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<ARCZonalShiftEndpointProviderBase>& ARCZonalShiftClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ARCZonalShiftClient::init(const ARCZonalShift::ARCZonalShiftClientConfiguration& config)
{
  AWSClient::SetServiceClientName("ARC Zonal Shift");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void ARCZonalShiftClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CancelZonalShiftOutcome ARCZonalShiftClient::CancelZonalShift(const CancelZonalShiftRequest& request) const
{
  AWS_OPERATION_GUARD(CancelZonalShift);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelZonalShift, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ZonalShiftIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelZonalShift", "Required field: ZonalShiftId, is not set");
    return CancelZonalShiftOutcome(Aws::Client::AWSError<ARCZonalShiftErrors>(ARCZonalShiftErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ZonalShiftId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelZonalShift, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/zonalshifts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetZonalShiftId());
  return CancelZonalShiftOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

GetManagedResourceOutcome ARCZonalShiftClient::GetManagedResource(const GetManagedResourceRequest& request) const
{
  AWS_OPERATION_GUARD(GetManagedResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetManagedResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetManagedResource", "Required field: ResourceIdentifier, is not set");
    return GetManagedResourceOutcome(Aws::Client::AWSError<ARCZonalShiftErrors>(ARCZonalShiftErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetManagedResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/managedresources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceIdentifier());
  return GetManagedResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListManagedResourcesOutcome ARCZonalShiftClient::ListManagedResources(const ListManagedResourcesRequest& request) const
{
  AWS_OPERATION_GUARD(ListManagedResources);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListManagedResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListManagedResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/managedresources");
  return ListManagedResourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListZonalShiftsOutcome ARCZonalShiftClient::ListZonalShifts(const ListZonalShiftsRequest& request) const
{
  AWS_OPERATION_GUARD(ListZonalShifts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListZonalShifts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListZonalShifts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/zonalshifts");
  return ListZonalShiftsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

StartZonalShiftOutcome ARCZonalShiftClient::StartZonalShift(const StartZonalShiftRequest& request) const
{
  AWS_OPERATION_GUARD(StartZonalShift);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartZonalShift, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartZonalShift, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/zonalshifts");
  return StartZonalShiftOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateZonalShiftOutcome ARCZonalShiftClient::UpdateZonalShift(const UpdateZonalShiftRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateZonalShift);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateZonalShift, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ZonalShiftIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateZonalShift", "Required field: ZonalShiftId, is not set");
    return UpdateZonalShiftOutcome(Aws::Client::AWSError<ARCZonalShiftErrors>(ARCZonalShiftErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ZonalShiftId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateZonalShift, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/zonalshifts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetZonalShiftId());
  return UpdateZonalShiftOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

