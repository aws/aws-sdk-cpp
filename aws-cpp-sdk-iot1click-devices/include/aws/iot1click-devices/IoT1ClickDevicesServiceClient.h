/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot1click-devices/IoT1ClickDevicesServiceServiceClientModel.h>

namespace Aws
{
namespace IoT1ClickDevicesService
{
  /**
   * <p>Describes all of the AWS IoT 1-Click device-related API operations for the
   * service.
 Also provides sample requests, responses, and errors for the supported
   * web services
 protocols.</p>
   */
  class AWS_IOT1CLICKDEVICESSERVICE_API IoT1ClickDevicesServiceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<IoT1ClickDevicesServiceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoT1ClickDevicesServiceClient(const Aws::IoT1ClickDevicesService::IoT1ClickDevicesServiceClientConfiguration& clientConfiguration = Aws::IoT1ClickDevicesService::IoT1ClickDevicesServiceClientConfiguration(),
                                      std::shared_ptr<IoT1ClickDevicesServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<IoT1ClickDevicesServiceEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoT1ClickDevicesServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                      std::shared_ptr<IoT1ClickDevicesServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<IoT1ClickDevicesServiceEndpointProvider>(ALLOCATION_TAG),
                                      const Aws::IoT1ClickDevicesService::IoT1ClickDevicesServiceClientConfiguration& clientConfiguration = Aws::IoT1ClickDevicesService::IoT1ClickDevicesServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoT1ClickDevicesServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                      std::shared_ptr<IoT1ClickDevicesServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<IoT1ClickDevicesServiceEndpointProvider>(ALLOCATION_TAG),
                                      const Aws::IoT1ClickDevicesService::IoT1ClickDevicesServiceClientConfiguration& clientConfiguration = Aws::IoT1ClickDevicesService::IoT1ClickDevicesServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoT1ClickDevicesServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoT1ClickDevicesServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoT1ClickDevicesServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~IoT1ClickDevicesServiceClient();

        /**
         * <p>Adds device(s) to your account (i.e., claim one or more devices) if and only
         * if you
 received a claim code with the device(s).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/ClaimDevicesByClaimCode">AWS
         * API Reference</a></p>
         */
        virtual Model::ClaimDevicesByClaimCodeOutcome ClaimDevicesByClaimCode(const Model::ClaimDevicesByClaimCodeRequest& request) const;

        /**
         * A Callable wrapper for ClaimDevicesByClaimCode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ClaimDevicesByClaimCodeOutcomeCallable ClaimDevicesByClaimCodeCallable(const Model::ClaimDevicesByClaimCodeRequest& request) const;

        /**
         * An Async wrapper for ClaimDevicesByClaimCode that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDeviceOutcomeCallable DescribeDeviceCallable(const Model::DescribeDeviceRequest& request) const;

        /**
         * An Async wrapper for DescribeDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDeviceAsync(const Model::DescribeDeviceRequest& request, const DescribeDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Given a device ID, finalizes the claim request for the associated
         * device.</p>
 <p>Claiming a device consists of initiating a claim, then
         * publishing a device event,
 and finalizing the claim. For a device of type
         * button, a device event can
 be published by simply clicking the device.</p>

         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/FinalizeDeviceClaim">AWS
         * API Reference</a></p>
         */
        virtual Model::FinalizeDeviceClaimOutcome FinalizeDeviceClaim(const Model::FinalizeDeviceClaimRequest& request) const;

        /**
         * A Callable wrapper for FinalizeDeviceClaim that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::FinalizeDeviceClaimOutcomeCallable FinalizeDeviceClaimCallable(const Model::FinalizeDeviceClaimRequest& request) const;

        /**
         * An Async wrapper for FinalizeDeviceClaim that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetDeviceMethods that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeviceMethodsOutcomeCallable GetDeviceMethodsCallable(const Model::GetDeviceMethodsRequest& request) const;

        /**
         * An Async wrapper for GetDeviceMethods that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeviceMethodsAsync(const Model::GetDeviceMethodsRequest& request, const GetDeviceMethodsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Given a device ID, initiates a claim request for the associated
         * device.</p>
 <p>Claiming a device consists of initiating a claim, then
         * publishing a device event,
 and finalizing the claim. For a device of type
         * button, a device event can
 be published by simply clicking the device.</p>

         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devices-2018-05-14/InitiateDeviceClaim">AWS
         * API Reference</a></p>
         */
        virtual Model::InitiateDeviceClaimOutcome InitiateDeviceClaim(const Model::InitiateDeviceClaimRequest& request) const;

        /**
         * A Callable wrapper for InitiateDeviceClaim that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InitiateDeviceClaimOutcomeCallable InitiateDeviceClaimCallable(const Model::InitiateDeviceClaimRequest& request) const;

        /**
         * An Async wrapper for InitiateDeviceClaim that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for InvokeDeviceMethod that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InvokeDeviceMethodOutcomeCallable InvokeDeviceMethodCallable(const Model::InvokeDeviceMethodRequest& request) const;

        /**
         * An Async wrapper for InvokeDeviceMethod that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListDeviceEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeviceEventsOutcomeCallable ListDeviceEventsCallable(const Model::ListDeviceEventsRequest& request) const;

        /**
         * An Async wrapper for ListDeviceEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDevicesOutcomeCallable ListDevicesCallable(const Model::ListDevicesRequest& request) const;

        /**
         * An Async wrapper for ListDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UnclaimDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnclaimDeviceOutcomeCallable UnclaimDeviceCallable(const Model::UnclaimDeviceRequest& request) const;

        /**
         * An Async wrapper for UnclaimDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateDeviceState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDeviceStateOutcomeCallable UpdateDeviceStateCallable(const Model::UpdateDeviceStateRequest& request) const;

        /**
         * An Async wrapper for UpdateDeviceState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDeviceStateAsync(const Model::UpdateDeviceStateRequest& request, const UpdateDeviceStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IoT1ClickDevicesServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<IoT1ClickDevicesServiceClient>;
      void init(const IoT1ClickDevicesServiceClientConfiguration& clientConfiguration);

      IoT1ClickDevicesServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IoT1ClickDevicesServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace IoT1ClickDevicesService
} // namespace Aws
