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

#pragma once
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
#include <aws/iot1click-devices/IoT1ClickDevicesServiceErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot1click-devices/model/ClaimDevicesByClaimCodeResult.h>
#include <aws/iot1click-devices/model/DescribeDeviceResult.h>
#include <aws/iot1click-devices/model/FinalizeDeviceClaimResult.h>
#include <aws/iot1click-devices/model/GetDeviceMethodsResult.h>
#include <aws/iot1click-devices/model/InitiateDeviceClaimResult.h>
#include <aws/iot1click-devices/model/InvokeDeviceMethodResult.h>
#include <aws/iot1click-devices/model/ListDeviceEventsResult.h>
#include <aws/iot1click-devices/model/ListDevicesResult.h>
#include <aws/iot1click-devices/model/ListTagsForResourceResult.h>
#include <aws/iot1click-devices/model/UnclaimDeviceResult.h>
#include <aws/iot1click-devices/model/UpdateDeviceStateResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace IoT1ClickDevicesService
{

namespace Model
{
        class ClaimDevicesByClaimCodeRequest;
        class DescribeDeviceRequest;
        class FinalizeDeviceClaimRequest;
        class GetDeviceMethodsRequest;
        class InitiateDeviceClaimRequest;
        class InvokeDeviceMethodRequest;
        class ListDeviceEventsRequest;
        class ListDevicesRequest;
        class ListTagsForResourceRequest;
        class TagResourceRequest;
        class UnclaimDeviceRequest;
        class UntagResourceRequest;
        class UpdateDeviceStateRequest;

        typedef Aws::Utils::Outcome<ClaimDevicesByClaimCodeResult, Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>> ClaimDevicesByClaimCodeOutcome;
        typedef Aws::Utils::Outcome<DescribeDeviceResult, Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>> DescribeDeviceOutcome;
        typedef Aws::Utils::Outcome<FinalizeDeviceClaimResult, Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>> FinalizeDeviceClaimOutcome;
        typedef Aws::Utils::Outcome<GetDeviceMethodsResult, Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>> GetDeviceMethodsOutcome;
        typedef Aws::Utils::Outcome<InitiateDeviceClaimResult, Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>> InitiateDeviceClaimOutcome;
        typedef Aws::Utils::Outcome<InvokeDeviceMethodResult, Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>> InvokeDeviceMethodOutcome;
        typedef Aws::Utils::Outcome<ListDeviceEventsResult, Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>> ListDeviceEventsOutcome;
        typedef Aws::Utils::Outcome<ListDevicesResult, Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>> ListDevicesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UnclaimDeviceResult, Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>> UnclaimDeviceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateDeviceStateResult, Aws::Client::AWSError<IoT1ClickDevicesServiceErrors>> UpdateDeviceStateOutcome;

        typedef std::future<ClaimDevicesByClaimCodeOutcome> ClaimDevicesByClaimCodeOutcomeCallable;
        typedef std::future<DescribeDeviceOutcome> DescribeDeviceOutcomeCallable;
        typedef std::future<FinalizeDeviceClaimOutcome> FinalizeDeviceClaimOutcomeCallable;
        typedef std::future<GetDeviceMethodsOutcome> GetDeviceMethodsOutcomeCallable;
        typedef std::future<InitiateDeviceClaimOutcome> InitiateDeviceClaimOutcomeCallable;
        typedef std::future<InvokeDeviceMethodOutcome> InvokeDeviceMethodOutcomeCallable;
        typedef std::future<ListDeviceEventsOutcome> ListDeviceEventsOutcomeCallable;
        typedef std::future<ListDevicesOutcome> ListDevicesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UnclaimDeviceOutcome> UnclaimDeviceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateDeviceStateOutcome> UpdateDeviceStateOutcomeCallable;
} // namespace Model

  class IoT1ClickDevicesServiceClient;

    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::ClaimDevicesByClaimCodeRequest&, const Model::ClaimDevicesByClaimCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ClaimDevicesByClaimCodeResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::DescribeDeviceRequest&, const Model::DescribeDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeviceResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::FinalizeDeviceClaimRequest&, const Model::FinalizeDeviceClaimOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > FinalizeDeviceClaimResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::GetDeviceMethodsRequest&, const Model::GetDeviceMethodsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeviceMethodsResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::InitiateDeviceClaimRequest&, const Model::InitiateDeviceClaimOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InitiateDeviceClaimResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::InvokeDeviceMethodRequest&, const Model::InvokeDeviceMethodOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InvokeDeviceMethodResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::ListDeviceEventsRequest&, const Model::ListDeviceEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeviceEventsResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::ListDevicesRequest&, const Model::ListDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDevicesResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::UnclaimDeviceRequest&, const Model::UnclaimDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnclaimDeviceResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickDevicesServiceClient*, const Model::UpdateDeviceStateRequest&, const Model::UpdateDeviceStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDeviceStateResponseReceivedHandler;

  /**
   * <p>Describes all of the AWS IoT 1-Click device-related API operations for the
   * service.
 Also provides sample requests, responses, and errors for the supported
   * web services
 protocols.</p>
   */
  class AWS_IOT1CLICKDEVICESSERVICE_API IoT1ClickDevicesServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoT1ClickDevicesServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoT1ClickDevicesServiceClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoT1ClickDevicesServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~IoT1ClickDevicesServiceClient();

        inline virtual const char* GetServiceClientName() const override { return "IoT 1Click Devices Service"; }


        /**
         * <p>Adds device(s) to your account (i.e., claim one or more devices) if and only
         * if you
 received a claim code with the device(s).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/ClaimDevicesByClaimCode">AWS
         * API Reference</a></p>
         */
        virtual Model::ClaimDevicesByClaimCodeOutcome ClaimDevicesByClaimCode(const Model::ClaimDevicesByClaimCodeRequest& request) const;

        /**
         * <p>Adds device(s) to your account (i.e., claim one or more devices) if and only
         * if you
 received a claim code with the device(s).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/ClaimDevicesByClaimCode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ClaimDevicesByClaimCodeOutcomeCallable ClaimDevicesByClaimCodeCallable(const Model::ClaimDevicesByClaimCodeRequest& request) const;

        /**
         * <p>Adds device(s) to your account (i.e., claim one or more devices) if and only
         * if you
 received a claim code with the device(s).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/ClaimDevicesByClaimCode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ClaimDevicesByClaimCodeAsync(const Model::ClaimDevicesByClaimCodeRequest& request, const ClaimDevicesByClaimCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Given a device ID, returns a DescribeDeviceResponse object describing the

         * details of the device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/DescribeDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDeviceOutcome DescribeDevice(const Model::DescribeDeviceRequest& request) const;

        /**
         * <p>Given a device ID, returns a DescribeDeviceResponse object describing the

         * details of the device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/DescribeDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDeviceOutcomeCallable DescribeDeviceCallable(const Model::DescribeDeviceRequest& request) const;

        /**
         * <p>Given a device ID, returns a DescribeDeviceResponse object describing the

         * details of the device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/DescribeDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDeviceAsync(const Model::DescribeDeviceRequest& request, const DescribeDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Given a device ID, finalizes the claim request for the associated
         * device.</p><note>
 <p>Claiming a device consists of initiating a claim, then
         * publishing a device event,
 and finalizing the claim. For a device of type
         * button, a device event can
 be published by simply clicking the device.</p>

         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/FinalizeDeviceClaim">AWS
         * API Reference</a></p>
         */
        virtual Model::FinalizeDeviceClaimOutcome FinalizeDeviceClaim(const Model::FinalizeDeviceClaimRequest& request) const;

        /**
         * <p>Given a device ID, finalizes the claim request for the associated
         * device.</p><note>
 <p>Claiming a device consists of initiating a claim, then
         * publishing a device event,
 and finalizing the claim. For a device of type
         * button, a device event can
 be published by simply clicking the device.</p>

         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/FinalizeDeviceClaim">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::FinalizeDeviceClaimOutcomeCallable FinalizeDeviceClaimCallable(const Model::FinalizeDeviceClaimRequest& request) const;

        /**
         * <p>Given a device ID, finalizes the claim request for the associated
         * device.</p><note>
 <p>Claiming a device consists of initiating a claim, then
         * publishing a device event,
 and finalizing the claim. For a device of type
         * button, a device event can
 be published by simply clicking the device.</p>

         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/FinalizeDeviceClaim">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void FinalizeDeviceClaimAsync(const Model::FinalizeDeviceClaimRequest& request, const FinalizeDeviceClaimResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Given a device ID, returns the invokable methods associated with the
         * device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/GetDeviceMethods">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceMethodsOutcome GetDeviceMethods(const Model::GetDeviceMethodsRequest& request) const;

        /**
         * <p>Given a device ID, returns the invokable methods associated with the
         * device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/GetDeviceMethods">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeviceMethodsOutcomeCallable GetDeviceMethodsCallable(const Model::GetDeviceMethodsRequest& request) const;

        /**
         * <p>Given a device ID, returns the invokable methods associated with the
         * device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/GetDeviceMethods">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeviceMethodsAsync(const Model::GetDeviceMethodsRequest& request, const GetDeviceMethodsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Given a device ID, initiates a claim request for the associated
         * device.</p><note>
 <p>Claiming a device consists of initiating a claim, then
         * publishing a device event,
 and finalizing the claim. For a device of type
         * button, a device event can
 be published by simply clicking the device.</p>

         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/InitiateDeviceClaim">AWS
         * API Reference</a></p>
         */
        virtual Model::InitiateDeviceClaimOutcome InitiateDeviceClaim(const Model::InitiateDeviceClaimRequest& request) const;

        /**
         * <p>Given a device ID, initiates a claim request for the associated
         * device.</p><note>
 <p>Claiming a device consists of initiating a claim, then
         * publishing a device event,
 and finalizing the claim. For a device of type
         * button, a device event can
 be published by simply clicking the device.</p>

         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/InitiateDeviceClaim">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InitiateDeviceClaimOutcomeCallable InitiateDeviceClaimCallable(const Model::InitiateDeviceClaimRequest& request) const;

        /**
         * <p>Given a device ID, initiates a claim request for the associated
         * device.</p><note>
 <p>Claiming a device consists of initiating a claim, then
         * publishing a device event,
 and finalizing the claim. For a device of type
         * button, a device event can
 be published by simply clicking the device.</p>

         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/InitiateDeviceClaim">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InitiateDeviceClaimAsync(const Model::InitiateDeviceClaimRequest& request, const InitiateDeviceClaimResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Given a device ID, issues a request to invoke a named device method (with
         * possible
 parameters). See the "Example POST" code snippet below.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/InvokeDeviceMethod">AWS
         * API Reference</a></p>
         */
        virtual Model::InvokeDeviceMethodOutcome InvokeDeviceMethod(const Model::InvokeDeviceMethodRequest& request) const;

        /**
         * <p>Given a device ID, issues a request to invoke a named device method (with
         * possible
 parameters). See the "Example POST" code snippet below.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/InvokeDeviceMethod">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InvokeDeviceMethodOutcomeCallable InvokeDeviceMethodCallable(const Model::InvokeDeviceMethodRequest& request) const;

        /**
         * <p>Given a device ID, issues a request to invoke a named device method (with
         * possible
 parameters). See the "Example POST" code snippet below.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/InvokeDeviceMethod">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InvokeDeviceMethodAsync(const Model::InvokeDeviceMethodRequest& request, const InvokeDeviceMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Using a device ID, returns a DeviceEventsResponse object containing an
 array
         * of events for the device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/ListDeviceEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeviceEventsOutcome ListDeviceEvents(const Model::ListDeviceEventsRequest& request) const;

        /**
         * <p>Using a device ID, returns a DeviceEventsResponse object containing an
 array
         * of events for the device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/ListDeviceEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeviceEventsOutcomeCallable ListDeviceEventsCallable(const Model::ListDeviceEventsRequest& request) const;

        /**
         * <p>Using a device ID, returns a DeviceEventsResponse object containing an
 array
         * of events for the device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/ListDeviceEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeviceEventsAsync(const Model::ListDeviceEventsRequest& request, const ListDeviceEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the 1-Click compatible devices associated with your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/ListDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicesOutcome ListDevices(const Model::ListDevicesRequest& request) const;

        /**
         * <p>Lists the 1-Click compatible devices associated with your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/ListDevices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDevicesOutcomeCallable ListDevicesCallable(const Model::ListDevicesRequest& request) const;

        /**
         * <p>Lists the 1-Click compatible devices associated with your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/ListDevices">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDevicesAsync(const Model::ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags associated with the specified resource ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags associated with the specified resource ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags associated with the specified resource ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates the tags associated with the resource ARN. See <a
         * href="https://docs.aws.amazon.com/iot-1-click/latest/developerguide/1click-appendix.html#1click-limits">AWS
         * IoT 1-Click Service Limits</a> for the maximum number of tags allowed per

         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds or updates the tags associated with the resource ARN. See <a
         * href="https://docs.aws.amazon.com/iot-1-click/latest/developerguide/1click-appendix.html#1click-limits">AWS
         * IoT 1-Click Service Limits</a> for the maximum number of tags allowed per

         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds or updates the tags associated with the resource ARN. See <a
         * href="https://docs.aws.amazon.com/iot-1-click/latest/developerguide/1click-appendix.html#1click-limits">AWS
         * IoT 1-Click Service Limits</a> for the maximum number of tags allowed per

         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a device from your AWS account using its device
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/UnclaimDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::UnclaimDeviceOutcome UnclaimDevice(const Model::UnclaimDeviceRequest& request) const;

        /**
         * <p>Disassociates a device from your AWS account using its device
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/UnclaimDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnclaimDeviceOutcomeCallable UnclaimDeviceCallable(const Model::UnclaimDeviceRequest& request) const;

        /**
         * <p>Disassociates a device from your AWS account using its device
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/UnclaimDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnclaimDeviceAsync(const Model::UnclaimDeviceRequest& request, const UnclaimDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Using tag keys, deletes the tags (key/value pairs) associated with the
         * specified
 resource ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Using tag keys, deletes the tags (key/value pairs) associated with the
         * specified
 resource ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Using tag keys, deletes the tags (key/value pairs) associated with the
         * specified
 resource ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Using a Boolean value (true or false), this operation
 enables or disables
         * the device given a device ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/UpdateDeviceState">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceStateOutcome UpdateDeviceState(const Model::UpdateDeviceStateRequest& request) const;

        /**
         * <p>Using a Boolean value (true or false), this operation
 enables or disables
         * the device given a device ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/UpdateDeviceState">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDeviceStateOutcomeCallable UpdateDeviceStateCallable(const Model::UpdateDeviceStateRequest& request) const;

        /**
         * <p>Using a Boolean value (true or false), this operation
 enables or disables
         * the device given a device ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/UpdateDeviceState">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDeviceStateAsync(const Model::UpdateDeviceStateRequest& request, const UpdateDeviceStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void ClaimDevicesByClaimCodeAsyncHelper(const Model::ClaimDevicesByClaimCodeRequest& request, const ClaimDevicesByClaimCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDeviceAsyncHelper(const Model::DescribeDeviceRequest& request, const DescribeDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void FinalizeDeviceClaimAsyncHelper(const Model::FinalizeDeviceClaimRequest& request, const FinalizeDeviceClaimResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeviceMethodsAsyncHelper(const Model::GetDeviceMethodsRequest& request, const GetDeviceMethodsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InitiateDeviceClaimAsyncHelper(const Model::InitiateDeviceClaimRequest& request, const InitiateDeviceClaimResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InvokeDeviceMethodAsyncHelper(const Model::InvokeDeviceMethodRequest& request, const InvokeDeviceMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeviceEventsAsyncHelper(const Model::ListDeviceEventsRequest& request, const ListDeviceEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDevicesAsyncHelper(const Model::ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UnclaimDeviceAsyncHelper(const Model::UnclaimDeviceRequest& request, const UnclaimDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDeviceStateAsyncHelper(const Model::UpdateDeviceStateRequest& request, const UpdateDeviceStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace IoT1ClickDevicesService
} // namespace Aws
