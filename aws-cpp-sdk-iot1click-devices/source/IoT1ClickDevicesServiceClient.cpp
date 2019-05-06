/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/iot1click-devices/IoT1ClickDevicesServiceClient.h>
#include <aws/iot1click-devices/IoT1ClickDevicesServiceEndpoint.h>
#include <aws/iot1click-devices/IoT1ClickDevicesServiceErrorMarshaller.h>
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

static const char* SERVICE_NAME = "iot1click";
static const char* ALLOCATION_TAG = "IoT1ClickDevicesServiceClient";


IoT1ClickDevicesServiceClient::IoT1ClickDevicesServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<IoT1ClickDevicesServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoT1ClickDevicesServiceClient::IoT1ClickDevicesServiceClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<IoT1ClickDevicesServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoT1ClickDevicesServiceClient::IoT1ClickDevicesServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<IoT1ClickDevicesServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoT1ClickDevicesServiceClient::~IoT1ClickDevicesServiceClient()
{
}

void IoT1ClickDevicesServiceClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + IoT1ClickDevicesServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void IoT1ClickDevicesServiceClient::OverrideEndpoint(const Aws::String& endpoint)
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

ClaimDevicesByClaimCodeOutcome IoT1ClickDevicesServiceClient::ClaimDevicesByClaimCode(const ClaimDevicesByClaimCodeRequest& request) const
{
  if (!request.ClaimCodeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ClaimDevicesByClaimCode", "Required field: ClaimCode, is not set");
    return ClaimDevicesByClaimCodeOutcome(Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>(IoT1ClickDevicesServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClaimCode]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/claims/";
  ss << request.GetClaimCode();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ClaimDevicesByClaimCodeOutcome(ClaimDevicesByClaimCodeResult(outcome.GetResult()));
  }
  else
  {
    return ClaimDevicesByClaimCodeOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ClaimDevicesByClaimCodeAsyncHelper( request, handler, context ); } );
}

void IoT1ClickDevicesServiceClient::ClaimDevicesByClaimCodeAsyncHelper(const ClaimDevicesByClaimCodeRequest& request, const ClaimDevicesByClaimCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ClaimDevicesByClaimCode(request), context);
}

DescribeDeviceOutcome IoT1ClickDevicesServiceClient::DescribeDevice(const DescribeDeviceRequest& request) const
{
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDevice", "Required field: DeviceId, is not set");
    return DescribeDeviceOutcome(Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>(IoT1ClickDevicesServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/devices/";
  ss << request.GetDeviceId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDeviceOutcome(DescribeDeviceResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDeviceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDeviceAsyncHelper( request, handler, context ); } );
}

void IoT1ClickDevicesServiceClient::DescribeDeviceAsyncHelper(const DescribeDeviceRequest& request, const DescribeDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDevice(request), context);
}

FinalizeDeviceClaimOutcome IoT1ClickDevicesServiceClient::FinalizeDeviceClaim(const FinalizeDeviceClaimRequest& request) const
{
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("FinalizeDeviceClaim", "Required field: DeviceId, is not set");
    return FinalizeDeviceClaimOutcome(Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>(IoT1ClickDevicesServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/devices/";
  ss << request.GetDeviceId();
  ss << "/finalize-claim";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return FinalizeDeviceClaimOutcome(FinalizeDeviceClaimResult(outcome.GetResult()));
  }
  else
  {
    return FinalizeDeviceClaimOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->FinalizeDeviceClaimAsyncHelper( request, handler, context ); } );
}

void IoT1ClickDevicesServiceClient::FinalizeDeviceClaimAsyncHelper(const FinalizeDeviceClaimRequest& request, const FinalizeDeviceClaimResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, FinalizeDeviceClaim(request), context);
}

GetDeviceMethodsOutcome IoT1ClickDevicesServiceClient::GetDeviceMethods(const GetDeviceMethodsRequest& request) const
{
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeviceMethods", "Required field: DeviceId, is not set");
    return GetDeviceMethodsOutcome(Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>(IoT1ClickDevicesServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/devices/";
  ss << request.GetDeviceId();
  ss << "/methods";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDeviceMethodsOutcome(GetDeviceMethodsResult(outcome.GetResult()));
  }
  else
  {
    return GetDeviceMethodsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetDeviceMethodsAsyncHelper( request, handler, context ); } );
}

void IoT1ClickDevicesServiceClient::GetDeviceMethodsAsyncHelper(const GetDeviceMethodsRequest& request, const GetDeviceMethodsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDeviceMethods(request), context);
}

InitiateDeviceClaimOutcome IoT1ClickDevicesServiceClient::InitiateDeviceClaim(const InitiateDeviceClaimRequest& request) const
{
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InitiateDeviceClaim", "Required field: DeviceId, is not set");
    return InitiateDeviceClaimOutcome(Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>(IoT1ClickDevicesServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/devices/";
  ss << request.GetDeviceId();
  ss << "/initiate-claim";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return InitiateDeviceClaimOutcome(InitiateDeviceClaimResult(outcome.GetResult()));
  }
  else
  {
    return InitiateDeviceClaimOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->InitiateDeviceClaimAsyncHelper( request, handler, context ); } );
}

void IoT1ClickDevicesServiceClient::InitiateDeviceClaimAsyncHelper(const InitiateDeviceClaimRequest& request, const InitiateDeviceClaimResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, InitiateDeviceClaim(request), context);
}

InvokeDeviceMethodOutcome IoT1ClickDevicesServiceClient::InvokeDeviceMethod(const InvokeDeviceMethodRequest& request) const
{
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InvokeDeviceMethod", "Required field: DeviceId, is not set");
    return InvokeDeviceMethodOutcome(Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>(IoT1ClickDevicesServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/devices/";
  ss << request.GetDeviceId();
  ss << "/methods";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return InvokeDeviceMethodOutcome(InvokeDeviceMethodResult(outcome.GetResult()));
  }
  else
  {
    return InvokeDeviceMethodOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->InvokeDeviceMethodAsyncHelper( request, handler, context ); } );
}

void IoT1ClickDevicesServiceClient::InvokeDeviceMethodAsyncHelper(const InvokeDeviceMethodRequest& request, const InvokeDeviceMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, InvokeDeviceMethod(request), context);
}

ListDeviceEventsOutcome IoT1ClickDevicesServiceClient::ListDeviceEvents(const ListDeviceEventsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/devices/";
  ss << request.GetDeviceId();
  ss << "/events";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDeviceEventsOutcome(ListDeviceEventsResult(outcome.GetResult()));
  }
  else
  {
    return ListDeviceEventsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListDeviceEventsAsyncHelper( request, handler, context ); } );
}

void IoT1ClickDevicesServiceClient::ListDeviceEventsAsyncHelper(const ListDeviceEventsRequest& request, const ListDeviceEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDeviceEvents(request), context);
}

ListDevicesOutcome IoT1ClickDevicesServiceClient::ListDevices(const ListDevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/devices";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDevicesOutcome(ListDevicesResult(outcome.GetResult()));
  }
  else
  {
    return ListDevicesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListDevicesAsyncHelper( request, handler, context ); } );
}

void IoT1ClickDevicesServiceClient::ListDevicesAsyncHelper(const ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDevices(request), context);
}

ListTagsForResourceOutcome IoT1ClickDevicesServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>(IoT1ClickDevicesServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void IoT1ClickDevicesServiceClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

TagResourceOutcome IoT1ClickDevicesServiceClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>(IoT1ClickDevicesServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(NoResult());
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void IoT1ClickDevicesServiceClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UnclaimDeviceOutcome IoT1ClickDevicesServiceClient::UnclaimDevice(const UnclaimDeviceRequest& request) const
{
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UnclaimDevice", "Required field: DeviceId, is not set");
    return UnclaimDeviceOutcome(Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>(IoT1ClickDevicesServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/devices/";
  ss << request.GetDeviceId();
  ss << "/unclaim";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UnclaimDeviceOutcome(UnclaimDeviceResult(outcome.GetResult()));
  }
  else
  {
    return UnclaimDeviceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UnclaimDeviceAsyncHelper( request, handler, context ); } );
}

void IoT1ClickDevicesServiceClient::UnclaimDeviceAsyncHelper(const UnclaimDeviceRequest& request, const UnclaimDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UnclaimDevice(request), context);
}

UntagResourceOutcome IoT1ClickDevicesServiceClient::UntagResource(const UntagResourceRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(NoResult());
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void IoT1ClickDevicesServiceClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateDeviceStateOutcome IoT1ClickDevicesServiceClient::UpdateDeviceState(const UpdateDeviceStateRequest& request) const
{
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDeviceState", "Required field: DeviceId, is not set");
    return UpdateDeviceStateOutcome(Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>(IoT1ClickDevicesServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/devices/";
  ss << request.GetDeviceId();
  ss << "/state";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDeviceStateOutcome(UpdateDeviceStateResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDeviceStateOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDeviceStateAsyncHelper( request, handler, context ); } );
}

void IoT1ClickDevicesServiceClient::UpdateDeviceStateAsyncHelper(const UpdateDeviceStateRequest& request, const UpdateDeviceStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDeviceState(request), context);
}

