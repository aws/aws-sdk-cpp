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

#include <aws/iot1click-devices/IoT1ClickDevicesServiceClient.h>
#include <aws/iot1click-devices/IoT1ClickDevicesServiceErrorMarshaller.h>
#include <aws/iot1click-devices/IoT1ClickDevicesServiceEndpointProvider.h>
#include <aws/iot1click-devices/model/ClaimDevicesByClaimCodeRequest.h>
#include <aws/iot1click-devices/model/DescribeDeviceRequest.h>
#include <aws/iot1click-devices/model/FinalizeDeviceClaimRequest.h>
#include <aws/iot1click-devices/model/GetDeviceMethodsRequest.h>
#include <aws/iot1click-devices/model/InitiateDeviceClaimRequest.h>
#include <aws/iot1click-devices/model/InvokeDeviceMethodRequest.h>
#include <aws/iot1click-devices/model/ListDeviceEventsRequest.h>
#include <aws/iot1click-devices/model/ListDevicesRequest.h>
#include <aws/iot1click-devices/model/ListTagsForResourceRequest.h>
#include <aws/iot1click-devices/model/TagResourceRequest.h>
#include <aws/iot1click-devices/model/UnclaimDeviceRequest.h>
#include <aws/iot1click-devices/model/UntagResourceRequest.h>
#include <aws/iot1click-devices/model/UpdateDeviceStateRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoT1ClickDevicesService;
using namespace Aws::IoT1ClickDevicesService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* IoT1ClickDevicesServiceClient::SERVICE_NAME = "iot1click";
const char* IoT1ClickDevicesServiceClient::ALLOCATION_TAG = "IoT1ClickDevicesServiceClient";

IoT1ClickDevicesServiceClient::IoT1ClickDevicesServiceClient(const IoT1ClickDevicesService::IoT1ClickDevicesServiceClientConfiguration& clientConfiguration,
                                                             std::shared_ptr<IoT1ClickDevicesServiceEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoT1ClickDevicesServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

IoT1ClickDevicesServiceClient::IoT1ClickDevicesServiceClient(const AWSCredentials& credentials,
                                                             std::shared_ptr<IoT1ClickDevicesServiceEndpointProviderBase> endpointProvider,
                                                             const IoT1ClickDevicesService::IoT1ClickDevicesServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoT1ClickDevicesServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

IoT1ClickDevicesServiceClient::IoT1ClickDevicesServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                             std::shared_ptr<IoT1ClickDevicesServiceEndpointProviderBase> endpointProvider,
                                                             const IoT1ClickDevicesService::IoT1ClickDevicesServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoT1ClickDevicesServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  IoT1ClickDevicesServiceClient::IoT1ClickDevicesServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoT1ClickDevicesServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<IoT1ClickDevicesServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

IoT1ClickDevicesServiceClient::IoT1ClickDevicesServiceClient(const AWSCredentials& credentials,
                                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoT1ClickDevicesServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<IoT1ClickDevicesServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

IoT1ClickDevicesServiceClient::IoT1ClickDevicesServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoT1ClickDevicesServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<IoT1ClickDevicesServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
IoT1ClickDevicesServiceClient::~IoT1ClickDevicesServiceClient()
{
}

std::shared_ptr<IoT1ClickDevicesServiceEndpointProviderBase>& IoT1ClickDevicesServiceClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void IoT1ClickDevicesServiceClient::init(const IoT1ClickDevicesService::IoT1ClickDevicesServiceClientConfiguration& config)
{
  AWSClient::SetServiceClientName("IoT 1Click Devices Service");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void IoT1ClickDevicesServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

ClaimDevicesByClaimCodeOutcome IoT1ClickDevicesServiceClient::ClaimDevicesByClaimCode(const ClaimDevicesByClaimCodeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ClaimDevicesByClaimCode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClaimCodeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ClaimDevicesByClaimCode", "Required field: ClaimCode, is not set");
    return ClaimDevicesByClaimCodeOutcome(Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>(IoT1ClickDevicesServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClaimCode]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ClaimDevicesByClaimCode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/claims/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClaimCode());
  return ClaimDevicesByClaimCodeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ClaimDevicesByClaimCodeOutcomeCallable IoT1ClickDevicesServiceClient::ClaimDevicesByClaimCodeCallable(const ClaimDevicesByClaimCodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ClaimDevicesByClaimCodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ClaimDevicesByClaimCode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickDevicesServiceClient::ClaimDevicesByClaimCodeAsync(const ClaimDevicesByClaimCodeRequest& request, const ClaimDevicesByClaimCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ClaimDevicesByClaimCode(request), context);
    } );
}

DescribeDeviceOutcome IoT1ClickDevicesServiceClient::DescribeDevice(const DescribeDeviceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDevice", "Required field: DeviceId, is not set");
    return DescribeDeviceOutcome(Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>(IoT1ClickDevicesServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceId());
  return DescribeDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDeviceOutcomeCallable IoT1ClickDevicesServiceClient::DescribeDeviceCallable(const DescribeDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickDevicesServiceClient::DescribeDeviceAsync(const DescribeDeviceRequest& request, const DescribeDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDevice(request), context);
    } );
}

FinalizeDeviceClaimOutcome IoT1ClickDevicesServiceClient::FinalizeDeviceClaim(const FinalizeDeviceClaimRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, FinalizeDeviceClaim, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("FinalizeDeviceClaim", "Required field: DeviceId, is not set");
    return FinalizeDeviceClaimOutcome(Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>(IoT1ClickDevicesServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, FinalizeDeviceClaim, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/finalize-claim");
  return FinalizeDeviceClaimOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

FinalizeDeviceClaimOutcomeCallable IoT1ClickDevicesServiceClient::FinalizeDeviceClaimCallable(const FinalizeDeviceClaimRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< FinalizeDeviceClaimOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->FinalizeDeviceClaim(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickDevicesServiceClient::FinalizeDeviceClaimAsync(const FinalizeDeviceClaimRequest& request, const FinalizeDeviceClaimResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, FinalizeDeviceClaim(request), context);
    } );
}

GetDeviceMethodsOutcome IoT1ClickDevicesServiceClient::GetDeviceMethods(const GetDeviceMethodsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDeviceMethods, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeviceMethods", "Required field: DeviceId, is not set");
    return GetDeviceMethodsOutcome(Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>(IoT1ClickDevicesServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDeviceMethods, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/methods");
  return GetDeviceMethodsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDeviceMethodsOutcomeCallable IoT1ClickDevicesServiceClient::GetDeviceMethodsCallable(const GetDeviceMethodsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeviceMethodsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeviceMethods(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickDevicesServiceClient::GetDeviceMethodsAsync(const GetDeviceMethodsRequest& request, const GetDeviceMethodsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDeviceMethods(request), context);
    } );
}

InitiateDeviceClaimOutcome IoT1ClickDevicesServiceClient::InitiateDeviceClaim(const InitiateDeviceClaimRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InitiateDeviceClaim, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InitiateDeviceClaim", "Required field: DeviceId, is not set");
    return InitiateDeviceClaimOutcome(Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>(IoT1ClickDevicesServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InitiateDeviceClaim, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/initiate-claim");
  return InitiateDeviceClaimOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

InitiateDeviceClaimOutcomeCallable IoT1ClickDevicesServiceClient::InitiateDeviceClaimCallable(const InitiateDeviceClaimRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InitiateDeviceClaimOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InitiateDeviceClaim(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickDevicesServiceClient::InitiateDeviceClaimAsync(const InitiateDeviceClaimRequest& request, const InitiateDeviceClaimResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, InitiateDeviceClaim(request), context);
    } );
}

InvokeDeviceMethodOutcome IoT1ClickDevicesServiceClient::InvokeDeviceMethod(const InvokeDeviceMethodRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvokeDeviceMethod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InvokeDeviceMethod", "Required field: DeviceId, is not set");
    return InvokeDeviceMethodOutcome(Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>(IoT1ClickDevicesServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InvokeDeviceMethod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/methods");
  return InvokeDeviceMethodOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

InvokeDeviceMethodOutcomeCallable IoT1ClickDevicesServiceClient::InvokeDeviceMethodCallable(const InvokeDeviceMethodRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InvokeDeviceMethodOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InvokeDeviceMethod(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickDevicesServiceClient::InvokeDeviceMethodAsync(const InvokeDeviceMethodRequest& request, const InvokeDeviceMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, InvokeDeviceMethod(request), context);
    } );
}

ListDeviceEventsOutcome IoT1ClickDevicesServiceClient::ListDeviceEvents(const ListDeviceEventsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDeviceEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDeviceEvents", "Required field: DeviceId, is not set");
    return ListDeviceEventsOutcome(Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>(IoT1ClickDevicesServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  if (!request.FromTimeStampHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDeviceEvents", "Required field: FromTimeStamp, is not set");
    return ListDeviceEventsOutcome(Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>(IoT1ClickDevicesServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FromTimeStamp]", false));
  }
  if (!request.ToTimeStampHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDeviceEvents", "Required field: ToTimeStamp, is not set");
    return ListDeviceEventsOutcome(Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>(IoT1ClickDevicesServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ToTimeStamp]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDeviceEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/events");
  return ListDeviceEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDeviceEventsOutcomeCallable IoT1ClickDevicesServiceClient::ListDeviceEventsCallable(const ListDeviceEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeviceEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeviceEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickDevicesServiceClient::ListDeviceEventsAsync(const ListDeviceEventsRequest& request, const ListDeviceEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDeviceEvents(request), context);
    } );
}

ListDevicesOutcome IoT1ClickDevicesServiceClient::ListDevices(const ListDevicesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/devices");
  return ListDevicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDevicesOutcomeCallable IoT1ClickDevicesServiceClient::ListDevicesCallable(const ListDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickDevicesServiceClient::ListDevicesAsync(const ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDevices(request), context);
    } );
}

ListTagsForResourceOutcome IoT1ClickDevicesServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>(IoT1ClickDevicesServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable IoT1ClickDevicesServiceClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickDevicesServiceClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

TagResourceOutcome IoT1ClickDevicesServiceClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>(IoT1ClickDevicesServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable IoT1ClickDevicesServiceClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickDevicesServiceClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UnclaimDeviceOutcome IoT1ClickDevicesServiceClient::UnclaimDevice(const UnclaimDeviceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UnclaimDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UnclaimDevice", "Required field: DeviceId, is not set");
    return UnclaimDeviceOutcome(Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>(IoT1ClickDevicesServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UnclaimDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/unclaim");
  return UnclaimDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UnclaimDeviceOutcomeCallable IoT1ClickDevicesServiceClient::UnclaimDeviceCallable(const UnclaimDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnclaimDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnclaimDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickDevicesServiceClient::UnclaimDeviceAsync(const UnclaimDeviceRequest& request, const UnclaimDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UnclaimDevice(request), context);
    } );
}

UntagResourceOutcome IoT1ClickDevicesServiceClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>(IoT1ClickDevicesServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>(IoT1ClickDevicesServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable IoT1ClickDevicesServiceClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickDevicesServiceClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateDeviceStateOutcome IoT1ClickDevicesServiceClient::UpdateDeviceState(const UpdateDeviceStateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDeviceState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDeviceState", "Required field: DeviceId, is not set");
    return UpdateDeviceStateOutcome(Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>(IoT1ClickDevicesServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDeviceState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/state");
  return UpdateDeviceStateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDeviceStateOutcomeCallable IoT1ClickDevicesServiceClient::UpdateDeviceStateCallable(const UpdateDeviceStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDeviceStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDeviceState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickDevicesServiceClient::UpdateDeviceStateAsync(const UpdateDeviceStateRequest& request, const UpdateDeviceStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDeviceState(request), context);
    } );
}

