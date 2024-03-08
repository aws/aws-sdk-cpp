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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef IoT1ClickDevicesServiceClientConfiguration ClientConfigurationType;
      typedef IoT1ClickDevicesServiceEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoT1ClickDevicesServiceClient(const Aws::IoT1ClickDevicesService::IoT1ClickDevicesServiceClientConfiguration& clientConfiguration = Aws::IoT1ClickDevicesService::IoT1ClickDevicesServiceClientConfiguration(),
                                      std::shared_ptr<IoT1ClickDevicesServiceEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoT1ClickDevicesServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                      std::shared_ptr<IoT1ClickDevicesServiceEndpointProviderBase> endpointProvider = nullptr,
                                      const Aws::IoT1ClickDevicesService::IoT1ClickDevicesServiceClientConfiguration& clientConfiguration = Aws::IoT1ClickDevicesService::IoT1ClickDevicesServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoT1ClickDevicesServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                      std::shared_ptr<IoT1ClickDevicesServiceEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename ClaimDevicesByClaimCodeRequestT = Model::ClaimDevicesByClaimCodeRequest>
        Model::ClaimDevicesByClaimCodeOutcomeCallable ClaimDevicesByClaimCodeCallable(const ClaimDevicesByClaimCodeRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickDevicesServiceClient::ClaimDevicesByClaimCode, request);
        }

        /**
         * An Async wrapper for ClaimDevicesByClaimCode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ClaimDevicesByClaimCodeRequestT = Model::ClaimDevicesByClaimCodeRequest>
        void ClaimDevicesByClaimCodeAsync(const ClaimDevicesByClaimCodeRequestT& request, const ClaimDevicesByClaimCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickDevicesServiceClient::ClaimDevicesByClaimCode, request, handler, context);
        }

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
        template<typename DescribeDeviceRequestT = Model::DescribeDeviceRequest>
        Model::DescribeDeviceOutcomeCallable DescribeDeviceCallable(const DescribeDeviceRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickDevicesServiceClient::DescribeDevice, request);
        }

        /**
         * An Async wrapper for DescribeDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDeviceRequestT = Model::DescribeDeviceRequest>
        void DescribeDeviceAsync(const DescribeDeviceRequestT& request, const DescribeDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickDevicesServiceClient::DescribeDevice, request, handler, context);
        }

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
        template<typename FinalizeDeviceClaimRequestT = Model::FinalizeDeviceClaimRequest>
        Model::FinalizeDeviceClaimOutcomeCallable FinalizeDeviceClaimCallable(const FinalizeDeviceClaimRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickDevicesServiceClient::FinalizeDeviceClaim, request);
        }

        /**
         * An Async wrapper for FinalizeDeviceClaim that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename FinalizeDeviceClaimRequestT = Model::FinalizeDeviceClaimRequest>
        void FinalizeDeviceClaimAsync(const FinalizeDeviceClaimRequestT& request, const FinalizeDeviceClaimResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickDevicesServiceClient::FinalizeDeviceClaim, request, handler, context);
        }

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
        template<typename GetDeviceMethodsRequestT = Model::GetDeviceMethodsRequest>
        Model::GetDeviceMethodsOutcomeCallable GetDeviceMethodsCallable(const GetDeviceMethodsRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickDevicesServiceClient::GetDeviceMethods, request);
        }

        /**
         * An Async wrapper for GetDeviceMethods that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeviceMethodsRequestT = Model::GetDeviceMethodsRequest>
        void GetDeviceMethodsAsync(const GetDeviceMethodsRequestT& request, const GetDeviceMethodsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickDevicesServiceClient::GetDeviceMethods, request, handler, context);
        }

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
        template<typename InitiateDeviceClaimRequestT = Model::InitiateDeviceClaimRequest>
        Model::InitiateDeviceClaimOutcomeCallable InitiateDeviceClaimCallable(const InitiateDeviceClaimRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickDevicesServiceClient::InitiateDeviceClaim, request);
        }

        /**
         * An Async wrapper for InitiateDeviceClaim that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InitiateDeviceClaimRequestT = Model::InitiateDeviceClaimRequest>
        void InitiateDeviceClaimAsync(const InitiateDeviceClaimRequestT& request, const InitiateDeviceClaimResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickDevicesServiceClient::InitiateDeviceClaim, request, handler, context);
        }

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
        template<typename InvokeDeviceMethodRequestT = Model::InvokeDeviceMethodRequest>
        Model::InvokeDeviceMethodOutcomeCallable InvokeDeviceMethodCallable(const InvokeDeviceMethodRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickDevicesServiceClient::InvokeDeviceMethod, request);
        }

        /**
         * An Async wrapper for InvokeDeviceMethod that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InvokeDeviceMethodRequestT = Model::InvokeDeviceMethodRequest>
        void InvokeDeviceMethodAsync(const InvokeDeviceMethodRequestT& request, const InvokeDeviceMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickDevicesServiceClient::InvokeDeviceMethod, request, handler, context);
        }

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
        template<typename ListDeviceEventsRequestT = Model::ListDeviceEventsRequest>
        Model::ListDeviceEventsOutcomeCallable ListDeviceEventsCallable(const ListDeviceEventsRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickDevicesServiceClient::ListDeviceEvents, request);
        }

        /**
         * An Async wrapper for ListDeviceEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDeviceEventsRequestT = Model::ListDeviceEventsRequest>
        void ListDeviceEventsAsync(const ListDeviceEventsRequestT& request, const ListDeviceEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickDevicesServiceClient::ListDeviceEvents, request, handler, context);
        }

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
        template<typename ListDevicesRequestT = Model::ListDevicesRequest>
        Model::ListDevicesOutcomeCallable ListDevicesCallable(const ListDevicesRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickDevicesServiceClient::ListDevices, request);
        }

        /**
         * An Async wrapper for ListDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDevicesRequestT = Model::ListDevicesRequest>
        void ListDevicesAsync(const ListDevicesRequestT& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickDevicesServiceClient::ListDevices, request, handler, context);
        }

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
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickDevicesServiceClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickDevicesServiceClient::ListTagsForResource, request, handler, context);
        }

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
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickDevicesServiceClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickDevicesServiceClient::TagResource, request, handler, context);
        }

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
        template<typename UnclaimDeviceRequestT = Model::UnclaimDeviceRequest>
        Model::UnclaimDeviceOutcomeCallable UnclaimDeviceCallable(const UnclaimDeviceRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickDevicesServiceClient::UnclaimDevice, request);
        }

        /**
         * An Async wrapper for UnclaimDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UnclaimDeviceRequestT = Model::UnclaimDeviceRequest>
        void UnclaimDeviceAsync(const UnclaimDeviceRequestT& request, const UnclaimDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickDevicesServiceClient::UnclaimDevice, request, handler, context);
        }

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
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickDevicesServiceClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickDevicesServiceClient::UntagResource, request, handler, context);
        }

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
        template<typename UpdateDeviceStateRequestT = Model::UpdateDeviceStateRequest>
        Model::UpdateDeviceStateOutcomeCallable UpdateDeviceStateCallable(const UpdateDeviceStateRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickDevicesServiceClient::UpdateDeviceState, request);
        }

        /**
         * An Async wrapper for UpdateDeviceState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDeviceStateRequestT = Model::UpdateDeviceStateRequest>
        void UpdateDeviceStateAsync(const UpdateDeviceStateRequestT& request, const UpdateDeviceStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickDevicesServiceClient::UpdateDeviceState, request, handler, context);
        }


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
