/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/MediaLiveServiceClientModel.h>

namespace Aws
{
namespace MediaLive
{
  /**
   * API for AWS Elemental MediaLive
   */
  class AWS_MEDIALIVE_API MediaLiveClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MediaLiveClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaLiveClient(const Aws::MediaLive::MediaLiveClientConfiguration& clientConfiguration = Aws::MediaLive::MediaLiveClientConfiguration(),
                        std::shared_ptr<MediaLiveEndpointProviderBase> endpointProvider = Aws::MakeShared<MediaLiveEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaLiveClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<MediaLiveEndpointProviderBase> endpointProvider = Aws::MakeShared<MediaLiveEndpointProvider>(ALLOCATION_TAG),
                        const Aws::MediaLive::MediaLiveClientConfiguration& clientConfiguration = Aws::MediaLive::MediaLiveClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaLiveClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<MediaLiveEndpointProviderBase> endpointProvider = Aws::MakeShared<MediaLiveEndpointProvider>(ALLOCATION_TAG),
                        const Aws::MediaLive::MediaLiveClientConfiguration& clientConfiguration = Aws::MediaLive::MediaLiveClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaLiveClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaLiveClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaLiveClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MediaLiveClient();

        /**
         * Accept an incoming input device transfer. The ownership of the device will
         * transfer to your AWS account.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AcceptInputDeviceTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptInputDeviceTransferOutcome AcceptInputDeviceTransfer(const Model::AcceptInputDeviceTransferRequest& request) const;

        /**
         * A Callable wrapper for AcceptInputDeviceTransfer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptInputDeviceTransferOutcomeCallable AcceptInputDeviceTransferCallable(const Model::AcceptInputDeviceTransferRequest& request) const;

        /**
         * An Async wrapper for AcceptInputDeviceTransfer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptInputDeviceTransferAsync(const Model::AcceptInputDeviceTransferRequest& request, const AcceptInputDeviceTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Starts delete of resources.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchDelete">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteOutcome BatchDelete(const Model::BatchDeleteRequest& request) const;

        /**
         * A Callable wrapper for BatchDelete that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteOutcomeCallable BatchDeleteCallable(const Model::BatchDeleteRequest& request) const;

        /**
         * An Async wrapper for BatchDelete that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteAsync(const Model::BatchDeleteRequest& request, const BatchDeleteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Starts existing resources<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchStart">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchStartOutcome BatchStart(const Model::BatchStartRequest& request) const;

        /**
         * A Callable wrapper for BatchStart that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchStartOutcomeCallable BatchStartCallable(const Model::BatchStartRequest& request) const;

        /**
         * An Async wrapper for BatchStart that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchStartAsync(const Model::BatchStartRequest& request, const BatchStartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Stops running resources<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchStop">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchStopOutcome BatchStop(const Model::BatchStopRequest& request) const;

        /**
         * A Callable wrapper for BatchStop that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchStopOutcomeCallable BatchStopCallable(const Model::BatchStopRequest& request) const;

        /**
         * An Async wrapper for BatchStop that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchStopAsync(const Model::BatchStopRequest& request, const BatchStopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update a channel schedule<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchUpdateSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateScheduleOutcome BatchUpdateSchedule(const Model::BatchUpdateScheduleRequest& request) const;

        /**
         * A Callable wrapper for BatchUpdateSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchUpdateScheduleOutcomeCallable BatchUpdateScheduleCallable(const Model::BatchUpdateScheduleRequest& request) const;

        /**
         * An Async wrapper for BatchUpdateSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUpdateScheduleAsync(const Model::BatchUpdateScheduleRequest& request, const BatchUpdateScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Cancel an input device transfer that you have requested.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CancelInputDeviceTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelInputDeviceTransferOutcome CancelInputDeviceTransfer(const Model::CancelInputDeviceTransferRequest& request) const;

        /**
         * A Callable wrapper for CancelInputDeviceTransfer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelInputDeviceTransferOutcomeCallable CancelInputDeviceTransferCallable(const Model::CancelInputDeviceTransferRequest& request) const;

        /**
         * An Async wrapper for CancelInputDeviceTransfer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelInputDeviceTransferAsync(const Model::CancelInputDeviceTransferRequest& request, const CancelInputDeviceTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Send a request to claim an AWS Elemental device that you have purchased from a
         * third-party vendor. After the request succeeds, you will own the
         * device.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ClaimDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::ClaimDeviceOutcome ClaimDevice(const Model::ClaimDeviceRequest& request) const;

        /**
         * A Callable wrapper for ClaimDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ClaimDeviceOutcomeCallable ClaimDeviceCallable(const Model::ClaimDeviceRequest& request) const;

        /**
         * An Async wrapper for ClaimDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ClaimDeviceAsync(const Model::ClaimDeviceRequest& request, const ClaimDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a new channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelOutcome CreateChannel(const Model::CreateChannelRequest& request) const;

        /**
         * A Callable wrapper for CreateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateChannelOutcomeCallable CreateChannelCallable(const Model::CreateChannelRequest& request) const;

        /**
         * An Async wrapper for CreateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChannelAsync(const Model::CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Create an input<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInput">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInputOutcome CreateInput(const Model::CreateInputRequest& request) const;

        /**
         * A Callable wrapper for CreateInput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInputOutcomeCallable CreateInputCallable(const Model::CreateInputRequest& request) const;

        /**
         * An Async wrapper for CreateInput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInputAsync(const Model::CreateInputRequest& request, const CreateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInputSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInputSecurityGroupOutcome CreateInputSecurityGroup(const Model::CreateInputSecurityGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateInputSecurityGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInputSecurityGroupOutcomeCallable CreateInputSecurityGroupCallable(const Model::CreateInputSecurityGroupRequest& request) const;

        /**
         * An Async wrapper for CreateInputSecurityGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInputSecurityGroupAsync(const Model::CreateInputSecurityGroupRequest& request, const CreateInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Create a new multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateMultiplex">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMultiplexOutcome CreateMultiplex(const Model::CreateMultiplexRequest& request) const;

        /**
         * A Callable wrapper for CreateMultiplex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMultiplexOutcomeCallable CreateMultiplexCallable(const Model::CreateMultiplexRequest& request) const;

        /**
         * An Async wrapper for CreateMultiplex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMultiplexAsync(const Model::CreateMultiplexRequest& request, const CreateMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Create a new program in the multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateMultiplexProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMultiplexProgramOutcome CreateMultiplexProgram(const Model::CreateMultiplexProgramRequest& request) const;

        /**
         * A Callable wrapper for CreateMultiplexProgram that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMultiplexProgramOutcomeCallable CreateMultiplexProgramCallable(const Model::CreateMultiplexProgramRequest& request) const;

        /**
         * An Async wrapper for CreateMultiplexProgram that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMultiplexProgramAsync(const Model::CreateMultiplexProgramRequest& request, const CreateMultiplexProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Create a partner input<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreatePartnerInput">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePartnerInputOutcome CreatePartnerInput(const Model::CreatePartnerInputRequest& request) const;

        /**
         * A Callable wrapper for CreatePartnerInput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePartnerInputOutcomeCallable CreatePartnerInputCallable(const Model::CreatePartnerInputRequest& request) const;

        /**
         * An Async wrapper for CreatePartnerInput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePartnerInputAsync(const Model::CreatePartnerInputRequest& request, const CreatePartnerInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Create tags for a resource<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateTags">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTagsOutcome CreateTags(const Model::CreateTagsRequest& request) const;

        /**
         * A Callable wrapper for CreateTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTagsOutcomeCallable CreateTagsCallable(const Model::CreateTagsRequest& request) const;

        /**
         * An Async wrapper for CreateTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTagsAsync(const Model::CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Starts deletion of channel. The associated outputs are also deleted.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelOutcome DeleteChannel(const Model::DeleteChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChannelOutcomeCallable DeleteChannelCallable(const Model::DeleteChannelRequest& request) const;

        /**
         * An Async wrapper for DeleteChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelAsync(const Model::DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes the input end point<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteInput">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInputOutcome DeleteInput(const Model::DeleteInputRequest& request) const;

        /**
         * A Callable wrapper for DeleteInput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInputOutcomeCallable DeleteInputCallable(const Model::DeleteInputRequest& request) const;

        /**
         * An Async wrapper for DeleteInput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInputAsync(const Model::DeleteInputRequest& request, const DeleteInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes an Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteInputSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInputSecurityGroupOutcome DeleteInputSecurityGroup(const Model::DeleteInputSecurityGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteInputSecurityGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInputSecurityGroupOutcomeCallable DeleteInputSecurityGroupCallable(const Model::DeleteInputSecurityGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteInputSecurityGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInputSecurityGroupAsync(const Model::DeleteInputSecurityGroupRequest& request, const DeleteInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete a multiplex. The multiplex must be idle.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteMultiplex">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMultiplexOutcome DeleteMultiplex(const Model::DeleteMultiplexRequest& request) const;

        /**
         * A Callable wrapper for DeleteMultiplex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMultiplexOutcomeCallable DeleteMultiplexCallable(const Model::DeleteMultiplexRequest& request) const;

        /**
         * An Async wrapper for DeleteMultiplex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMultiplexAsync(const Model::DeleteMultiplexRequest& request, const DeleteMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete a program from a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteMultiplexProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMultiplexProgramOutcome DeleteMultiplexProgram(const Model::DeleteMultiplexProgramRequest& request) const;

        /**
         * A Callable wrapper for DeleteMultiplexProgram that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMultiplexProgramOutcomeCallable DeleteMultiplexProgramCallable(const Model::DeleteMultiplexProgramRequest& request) const;

        /**
         * An Async wrapper for DeleteMultiplexProgram that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMultiplexProgramAsync(const Model::DeleteMultiplexProgramRequest& request, const DeleteMultiplexProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete an expired reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReservationOutcome DeleteReservation(const Model::DeleteReservationRequest& request) const;

        /**
         * A Callable wrapper for DeleteReservation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReservationOutcomeCallable DeleteReservationCallable(const Model::DeleteReservationRequest& request) const;

        /**
         * An Async wrapper for DeleteReservation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReservationAsync(const Model::DeleteReservationRequest& request, const DeleteReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete all schedule actions on a channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScheduleOutcome DeleteSchedule(const Model::DeleteScheduleRequest& request) const;

        /**
         * A Callable wrapper for DeleteSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteScheduleOutcomeCallable DeleteScheduleCallable(const Model::DeleteScheduleRequest& request) const;

        /**
         * An Async wrapper for DeleteSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteScheduleAsync(const Model::DeleteScheduleRequest& request, const DeleteScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Removes tags for a resource<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

        /**
         * A Callable wrapper for DeleteTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request) const;

        /**
         * An Async wrapper for DeleteTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTagsAsync(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Gets details about a channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelOutcome DescribeChannel(const Model::DescribeChannelRequest& request) const;

        /**
         * A Callable wrapper for DescribeChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChannelOutcomeCallable DescribeChannelCallable(const Model::DescribeChannelRequest& request) const;

        /**
         * An Async wrapper for DescribeChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelAsync(const Model::DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Produces details about an input<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInput">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInputOutcome DescribeInput(const Model::DescribeInputRequest& request) const;

        /**
         * A Callable wrapper for DescribeInput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInputOutcomeCallable DescribeInputCallable(const Model::DescribeInputRequest& request) const;

        /**
         * An Async wrapper for DescribeInput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInputAsync(const Model::DescribeInputRequest& request, const DescribeInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Gets the details for the input device<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInputDeviceOutcome DescribeInputDevice(const Model::DescribeInputDeviceRequest& request) const;

        /**
         * A Callable wrapper for DescribeInputDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInputDeviceOutcomeCallable DescribeInputDeviceCallable(const Model::DescribeInputDeviceRequest& request) const;

        /**
         * An Async wrapper for DescribeInputDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInputDeviceAsync(const Model::DescribeInputDeviceRequest& request, const DescribeInputDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get the latest thumbnail data for the input device.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputDeviceThumbnail">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInputDeviceThumbnailOutcome DescribeInputDeviceThumbnail(const Model::DescribeInputDeviceThumbnailRequest& request) const;

        /**
         * A Callable wrapper for DescribeInputDeviceThumbnail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInputDeviceThumbnailOutcomeCallable DescribeInputDeviceThumbnailCallable(const Model::DescribeInputDeviceThumbnailRequest& request) const;

        /**
         * An Async wrapper for DescribeInputDeviceThumbnail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInputDeviceThumbnailAsync(const Model::DescribeInputDeviceThumbnailRequest& request, const DescribeInputDeviceThumbnailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Produces a summary of an Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInputSecurityGroupOutcome DescribeInputSecurityGroup(const Model::DescribeInputSecurityGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeInputSecurityGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInputSecurityGroupOutcomeCallable DescribeInputSecurityGroupCallable(const Model::DescribeInputSecurityGroupRequest& request) const;

        /**
         * An Async wrapper for DescribeInputSecurityGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInputSecurityGroupAsync(const Model::DescribeInputSecurityGroupRequest& request, const DescribeInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Gets details about a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeMultiplex">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMultiplexOutcome DescribeMultiplex(const Model::DescribeMultiplexRequest& request) const;

        /**
         * A Callable wrapper for DescribeMultiplex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMultiplexOutcomeCallable DescribeMultiplexCallable(const Model::DescribeMultiplexRequest& request) const;

        /**
         * An Async wrapper for DescribeMultiplex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMultiplexAsync(const Model::DescribeMultiplexRequest& request, const DescribeMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get the details for a program in a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeMultiplexProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMultiplexProgramOutcome DescribeMultiplexProgram(const Model::DescribeMultiplexProgramRequest& request) const;

        /**
         * A Callable wrapper for DescribeMultiplexProgram that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMultiplexProgramOutcomeCallable DescribeMultiplexProgramCallable(const Model::DescribeMultiplexProgramRequest& request) const;

        /**
         * An Async wrapper for DescribeMultiplexProgram that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMultiplexProgramAsync(const Model::DescribeMultiplexProgramRequest& request, const DescribeMultiplexProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get details for an offering.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOfferingOutcome DescribeOffering(const Model::DescribeOfferingRequest& request) const;

        /**
         * A Callable wrapper for DescribeOffering that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOfferingOutcomeCallable DescribeOfferingCallable(const Model::DescribeOfferingRequest& request) const;

        /**
         * An Async wrapper for DescribeOffering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOfferingAsync(const Model::DescribeOfferingRequest& request, const DescribeOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get details for a reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservationOutcome DescribeReservation(const Model::DescribeReservationRequest& request) const;

        /**
         * A Callable wrapper for DescribeReservation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservationOutcomeCallable DescribeReservationCallable(const Model::DescribeReservationRequest& request) const;

        /**
         * An Async wrapper for DescribeReservation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservationAsync(const Model::DescribeReservationRequest& request, const DescribeReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get a channel schedule<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScheduleOutcome DescribeSchedule(const Model::DescribeScheduleRequest& request) const;

        /**
         * A Callable wrapper for DescribeSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScheduleOutcomeCallable DescribeScheduleCallable(const Model::DescribeScheduleRequest& request) const;

        /**
         * An Async wrapper for DescribeSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScheduleAsync(const Model::DescribeScheduleRequest& request, const DescribeScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Produces list of channels that have been created<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsOutcome ListChannels(const Model::ListChannelsRequest& request) const;

        /**
         * A Callable wrapper for ListChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelsOutcomeCallable ListChannelsCallable(const Model::ListChannelsRequest& request) const;

        /**
         * An Async wrapper for ListChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelsAsync(const Model::ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * List input devices that are currently being transferred. List input devices that
         * you are transferring from your AWS account or input devices that another AWS
         * account is transferring to you.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputDeviceTransfers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputDeviceTransfersOutcome ListInputDeviceTransfers(const Model::ListInputDeviceTransfersRequest& request) const;

        /**
         * A Callable wrapper for ListInputDeviceTransfers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInputDeviceTransfersOutcomeCallable ListInputDeviceTransfersCallable(const Model::ListInputDeviceTransfersRequest& request) const;

        /**
         * An Async wrapper for ListInputDeviceTransfers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInputDeviceTransfersAsync(const Model::ListInputDeviceTransfersRequest& request, const ListInputDeviceTransfersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * List input devices<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputDevicesOutcome ListInputDevices(const Model::ListInputDevicesRequest& request) const;

        /**
         * A Callable wrapper for ListInputDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInputDevicesOutcomeCallable ListInputDevicesCallable(const Model::ListInputDevicesRequest& request) const;

        /**
         * An Async wrapper for ListInputDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInputDevicesAsync(const Model::ListInputDevicesRequest& request, const ListInputDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Produces a list of Input Security Groups for an account<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputSecurityGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputSecurityGroupsOutcome ListInputSecurityGroups(const Model::ListInputSecurityGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListInputSecurityGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInputSecurityGroupsOutcomeCallable ListInputSecurityGroupsCallable(const Model::ListInputSecurityGroupsRequest& request) const;

        /**
         * An Async wrapper for ListInputSecurityGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInputSecurityGroupsAsync(const Model::ListInputSecurityGroupsRequest& request, const ListInputSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Produces list of inputs that have been created<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputsOutcome ListInputs(const Model::ListInputsRequest& request) const;

        /**
         * A Callable wrapper for ListInputs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInputsOutcomeCallable ListInputsCallable(const Model::ListInputsRequest& request) const;

        /**
         * An Async wrapper for ListInputs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInputsAsync(const Model::ListInputsRequest& request, const ListInputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * List the programs that currently exist for a specific multiplex.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListMultiplexPrograms">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMultiplexProgramsOutcome ListMultiplexPrograms(const Model::ListMultiplexProgramsRequest& request) const;

        /**
         * A Callable wrapper for ListMultiplexPrograms that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMultiplexProgramsOutcomeCallable ListMultiplexProgramsCallable(const Model::ListMultiplexProgramsRequest& request) const;

        /**
         * An Async wrapper for ListMultiplexPrograms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMultiplexProgramsAsync(const Model::ListMultiplexProgramsRequest& request, const ListMultiplexProgramsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieve a list of the existing multiplexes.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListMultiplexes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMultiplexesOutcome ListMultiplexes(const Model::ListMultiplexesRequest& request) const;

        /**
         * A Callable wrapper for ListMultiplexes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMultiplexesOutcomeCallable ListMultiplexesCallable(const Model::ListMultiplexesRequest& request) const;

        /**
         * An Async wrapper for ListMultiplexes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMultiplexesAsync(const Model::ListMultiplexesRequest& request, const ListMultiplexesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * List offerings available for purchase.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOfferingsOutcome ListOfferings(const Model::ListOfferingsRequest& request) const;

        /**
         * A Callable wrapper for ListOfferings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOfferingsOutcomeCallable ListOfferingsCallable(const Model::ListOfferingsRequest& request) const;

        /**
         * An Async wrapper for ListOfferings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOfferingsAsync(const Model::ListOfferingsRequest& request, const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * List purchased reservations.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListReservations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReservationsOutcome ListReservations(const Model::ListReservationsRequest& request) const;

        /**
         * A Callable wrapper for ListReservations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReservationsOutcomeCallable ListReservationsCallable(const Model::ListReservationsRequest& request) const;

        /**
         * An Async wrapper for ListReservations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReservationsAsync(const Model::ListReservationsRequest& request, const ListReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Produces list of tags that have been created for a resource<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListTagsForResource">AWS
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
         * Purchase an offering and create a reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/PurchaseOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseOfferingOutcome PurchaseOffering(const Model::PurchaseOfferingRequest& request) const;

        /**
         * A Callable wrapper for PurchaseOffering that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PurchaseOfferingOutcomeCallable PurchaseOfferingCallable(const Model::PurchaseOfferingRequest& request) const;

        /**
         * An Async wrapper for PurchaseOffering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PurchaseOfferingAsync(const Model::PurchaseOfferingRequest& request, const PurchaseOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Send a reboot command to the specified input device. The device will begin
         * rebooting within a few seconds of sending the command. When the reboot is
         * complete, the device’s connection status will change to connected.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/RebootInputDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootInputDeviceOutcome RebootInputDevice(const Model::RebootInputDeviceRequest& request) const;

        /**
         * A Callable wrapper for RebootInputDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebootInputDeviceOutcomeCallable RebootInputDeviceCallable(const Model::RebootInputDeviceRequest& request) const;

        /**
         * An Async wrapper for RebootInputDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootInputDeviceAsync(const Model::RebootInputDeviceRequest& request, const RebootInputDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Reject the transfer of the specified input device to your AWS account.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/RejectInputDeviceTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectInputDeviceTransferOutcome RejectInputDeviceTransfer(const Model::RejectInputDeviceTransferRequest& request) const;

        /**
         * A Callable wrapper for RejectInputDeviceTransfer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectInputDeviceTransferOutcomeCallable RejectInputDeviceTransferCallable(const Model::RejectInputDeviceTransferRequest& request) const;

        /**
         * An Async wrapper for RejectInputDeviceTransfer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectInputDeviceTransferAsync(const Model::RejectInputDeviceTransferRequest& request, const RejectInputDeviceTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Starts an existing channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::StartChannelOutcome StartChannel(const Model::StartChannelRequest& request) const;

        /**
         * A Callable wrapper for StartChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartChannelOutcomeCallable StartChannelCallable(const Model::StartChannelRequest& request) const;

        /**
         * An Async wrapper for StartChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartChannelAsync(const Model::StartChannelRequest& request, const StartChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Start a maintenance window for the specified input device. Starting a
         * maintenance window will give the device up to two hours to install software. If
         * the device was streaming prior to the maintenance, it will resume streaming when
         * the software is fully installed. Devices automatically install updates while
         * they are powered on and their MediaLive channels are stopped. A maintenance
         * window allows you to update a device without having to stop MediaLive channels
         * that use the device. The device must remain powered on and connected to the
         * internet for the duration of the maintenance.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartInputDeviceMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::StartInputDeviceMaintenanceWindowOutcome StartInputDeviceMaintenanceWindow(const Model::StartInputDeviceMaintenanceWindowRequest& request) const;

        /**
         * A Callable wrapper for StartInputDeviceMaintenanceWindow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartInputDeviceMaintenanceWindowOutcomeCallable StartInputDeviceMaintenanceWindowCallable(const Model::StartInputDeviceMaintenanceWindowRequest& request) const;

        /**
         * An Async wrapper for StartInputDeviceMaintenanceWindow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartInputDeviceMaintenanceWindowAsync(const Model::StartInputDeviceMaintenanceWindowRequest& request, const StartInputDeviceMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Start (run) the multiplex. Starting the multiplex does not start the channels.
         * You must explicitly start each channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartMultiplex">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMultiplexOutcome StartMultiplex(const Model::StartMultiplexRequest& request) const;

        /**
         * A Callable wrapper for StartMultiplex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartMultiplexOutcomeCallable StartMultiplexCallable(const Model::StartMultiplexRequest& request) const;

        /**
         * An Async wrapper for StartMultiplex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMultiplexAsync(const Model::StartMultiplexRequest& request, const StartMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Stops a running channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StopChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::StopChannelOutcome StopChannel(const Model::StopChannelRequest& request) const;

        /**
         * A Callable wrapper for StopChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopChannelOutcomeCallable StopChannelCallable(const Model::StopChannelRequest& request) const;

        /**
         * An Async wrapper for StopChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopChannelAsync(const Model::StopChannelRequest& request, const StopChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Stops a running multiplex. If the multiplex isn't running, this action has no
         * effect.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StopMultiplex">AWS
         * API Reference</a></p>
         */
        virtual Model::StopMultiplexOutcome StopMultiplex(const Model::StopMultiplexRequest& request) const;

        /**
         * A Callable wrapper for StopMultiplex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopMultiplexOutcomeCallable StopMultiplexCallable(const Model::StopMultiplexRequest& request) const;

        /**
         * An Async wrapper for StopMultiplex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopMultiplexAsync(const Model::StopMultiplexRequest& request, const StopMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Start an input device transfer to another AWS account. After you make the
         * request, the other account must accept or reject the transfer.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/TransferInputDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::TransferInputDeviceOutcome TransferInputDevice(const Model::TransferInputDeviceRequest& request) const;

        /**
         * A Callable wrapper for TransferInputDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TransferInputDeviceOutcomeCallable TransferInputDeviceCallable(const Model::TransferInputDeviceRequest& request) const;

        /**
         * An Async wrapper for TransferInputDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TransferInputDeviceAsync(const Model::TransferInputDeviceRequest& request, const TransferInputDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates a channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelOutcome UpdateChannel(const Model::UpdateChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateChannelOutcomeCallable UpdateChannelCallable(const Model::UpdateChannelRequest& request) const;

        /**
         * An Async wrapper for UpdateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateChannelAsync(const Model::UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Changes the class of the channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannelClass">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelClassOutcome UpdateChannelClass(const Model::UpdateChannelClassRequest& request) const;

        /**
         * A Callable wrapper for UpdateChannelClass that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateChannelClassOutcomeCallable UpdateChannelClassCallable(const Model::UpdateChannelClassRequest& request) const;

        /**
         * An Async wrapper for UpdateChannelClass that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateChannelClassAsync(const Model::UpdateChannelClassRequest& request, const UpdateChannelClassResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates an input.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInput">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInputOutcome UpdateInput(const Model::UpdateInputRequest& request) const;

        /**
         * A Callable wrapper for UpdateInput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInputOutcomeCallable UpdateInputCallable(const Model::UpdateInputRequest& request) const;

        /**
         * An Async wrapper for UpdateInput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInputAsync(const Model::UpdateInputRequest& request, const UpdateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates the parameters for the input device.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInputDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInputDeviceOutcome UpdateInputDevice(const Model::UpdateInputDeviceRequest& request) const;

        /**
         * A Callable wrapper for UpdateInputDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInputDeviceOutcomeCallable UpdateInputDeviceCallable(const Model::UpdateInputDeviceRequest& request) const;

        /**
         * An Async wrapper for UpdateInputDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInputDeviceAsync(const Model::UpdateInputDeviceRequest& request, const UpdateInputDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update an Input Security Group's Whilelists.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInputSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInputSecurityGroupOutcome UpdateInputSecurityGroup(const Model::UpdateInputSecurityGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateInputSecurityGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInputSecurityGroupOutcomeCallable UpdateInputSecurityGroupCallable(const Model::UpdateInputSecurityGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateInputSecurityGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInputSecurityGroupAsync(const Model::UpdateInputSecurityGroupRequest& request, const UpdateInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateMultiplex">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMultiplexOutcome UpdateMultiplex(const Model::UpdateMultiplexRequest& request) const;

        /**
         * A Callable wrapper for UpdateMultiplex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMultiplexOutcomeCallable UpdateMultiplexCallable(const Model::UpdateMultiplexRequest& request) const;

        /**
         * An Async wrapper for UpdateMultiplex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMultiplexAsync(const Model::UpdateMultiplexRequest& request, const UpdateMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update a program in a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateMultiplexProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMultiplexProgramOutcome UpdateMultiplexProgram(const Model::UpdateMultiplexProgramRequest& request) const;

        /**
         * A Callable wrapper for UpdateMultiplexProgram that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMultiplexProgramOutcomeCallable UpdateMultiplexProgramCallable(const Model::UpdateMultiplexProgramRequest& request) const;

        /**
         * An Async wrapper for UpdateMultiplexProgram that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMultiplexProgramAsync(const Model::UpdateMultiplexProgramRequest& request, const UpdateMultiplexProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReservationOutcome UpdateReservation(const Model::UpdateReservationRequest& request) const;

        /**
         * A Callable wrapper for UpdateReservation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateReservationOutcomeCallable UpdateReservationCallable(const Model::UpdateReservationRequest& request) const;

        /**
         * An Async wrapper for UpdateReservation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateReservationAsync(const Model::UpdateReservationRequest& request, const UpdateReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MediaLiveEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MediaLiveClient>;
      void init(const MediaLiveClientConfiguration& clientConfiguration);

      MediaLiveClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MediaLiveEndpointProviderBase> m_endpointProvider;
  };

} // namespace MediaLive
} // namespace Aws
