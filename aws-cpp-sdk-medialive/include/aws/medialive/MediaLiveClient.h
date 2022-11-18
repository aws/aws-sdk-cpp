/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/MediaLiveServiceClientModel.h>
#include <aws/medialive/MediaLiveLegacyAsyncMacros.h>

namespace Aws
{
namespace MediaLive
{
  /**
   * API for AWS Elemental MediaLive
   */
  class AWS_MEDIALIVE_API MediaLiveClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * Accept an incoming input device transfer. The ownership of the device will
         * transfer to your AWS account.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AcceptInputDeviceTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptInputDeviceTransferOutcome AcceptInputDeviceTransfer(const Model::AcceptInputDeviceTransferRequest& request) const;


        /**
         * Starts delete of resources.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchDelete">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteOutcome BatchDelete(const Model::BatchDeleteRequest& request) const;


        /**
         * Starts existing resources<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchStart">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchStartOutcome BatchStart(const Model::BatchStartRequest& request) const;


        /**
         * Stops running resources<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchStop">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchStopOutcome BatchStop(const Model::BatchStopRequest& request) const;


        /**
         * Update a channel schedule<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchUpdateSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateScheduleOutcome BatchUpdateSchedule(const Model::BatchUpdateScheduleRequest& request) const;


        /**
         * Cancel an input device transfer that you have requested.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CancelInputDeviceTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelInputDeviceTransferOutcome CancelInputDeviceTransfer(const Model::CancelInputDeviceTransferRequest& request) const;


        /**
         * Send a request to claim an AWS Elemental device that you have purchased from a
         * third-party vendor. After the request succeeds, you will own the
         * device.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ClaimDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::ClaimDeviceOutcome ClaimDevice(const Model::ClaimDeviceRequest& request) const;


        /**
         * Creates a new channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelOutcome CreateChannel(const Model::CreateChannelRequest& request) const;


        /**
         * Create an input<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInput">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInputOutcome CreateInput(const Model::CreateInputRequest& request) const;


        /**
         * Creates a Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInputSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInputSecurityGroupOutcome CreateInputSecurityGroup(const Model::CreateInputSecurityGroupRequest& request) const;


        /**
         * Create a new multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateMultiplex">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMultiplexOutcome CreateMultiplex(const Model::CreateMultiplexRequest& request) const;


        /**
         * Create a new program in the multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateMultiplexProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMultiplexProgramOutcome CreateMultiplexProgram(const Model::CreateMultiplexProgramRequest& request) const;


        /**
         * Create a partner input<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreatePartnerInput">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePartnerInputOutcome CreatePartnerInput(const Model::CreatePartnerInputRequest& request) const;


        /**
         * Create tags for a resource<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateTags">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTagsOutcome CreateTags(const Model::CreateTagsRequest& request) const;


        /**
         * Starts deletion of channel. The associated outputs are also deleted.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelOutcome DeleteChannel(const Model::DeleteChannelRequest& request) const;


        /**
         * Deletes the input end point<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteInput">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInputOutcome DeleteInput(const Model::DeleteInputRequest& request) const;


        /**
         * Deletes an Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteInputSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInputSecurityGroupOutcome DeleteInputSecurityGroup(const Model::DeleteInputSecurityGroupRequest& request) const;


        /**
         * Delete a multiplex. The multiplex must be idle.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteMultiplex">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMultiplexOutcome DeleteMultiplex(const Model::DeleteMultiplexRequest& request) const;


        /**
         * Delete a program from a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteMultiplexProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMultiplexProgramOutcome DeleteMultiplexProgram(const Model::DeleteMultiplexProgramRequest& request) const;


        /**
         * Delete an expired reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReservationOutcome DeleteReservation(const Model::DeleteReservationRequest& request) const;


        /**
         * Delete all schedule actions on a channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScheduleOutcome DeleteSchedule(const Model::DeleteScheduleRequest& request) const;


        /**
         * Removes tags for a resource<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;


        /**
         * Gets details about a channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelOutcome DescribeChannel(const Model::DescribeChannelRequest& request) const;


        /**
         * Produces details about an input<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInput">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInputOutcome DescribeInput(const Model::DescribeInputRequest& request) const;


        /**
         * Gets the details for the input device<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInputDeviceOutcome DescribeInputDevice(const Model::DescribeInputDeviceRequest& request) const;


        /**
         * Get the latest thumbnail data for the input device.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputDeviceThumbnail">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInputDeviceThumbnailOutcome DescribeInputDeviceThumbnail(const Model::DescribeInputDeviceThumbnailRequest& request) const;


        /**
         * Produces a summary of an Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInputSecurityGroupOutcome DescribeInputSecurityGroup(const Model::DescribeInputSecurityGroupRequest& request) const;


        /**
         * Gets details about a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeMultiplex">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMultiplexOutcome DescribeMultiplex(const Model::DescribeMultiplexRequest& request) const;


        /**
         * Get the details for a program in a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeMultiplexProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMultiplexProgramOutcome DescribeMultiplexProgram(const Model::DescribeMultiplexProgramRequest& request) const;


        /**
         * Get details for an offering.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOfferingOutcome DescribeOffering(const Model::DescribeOfferingRequest& request) const;


        /**
         * Get details for a reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservationOutcome DescribeReservation(const Model::DescribeReservationRequest& request) const;


        /**
         * Get a channel schedule<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScheduleOutcome DescribeSchedule(const Model::DescribeScheduleRequest& request) const;


        /**
         * Produces list of channels that have been created<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsOutcome ListChannels(const Model::ListChannelsRequest& request) const;


        /**
         * List input devices that are currently being transferred. List input devices that
         * you are transferring from your AWS account or input devices that another AWS
         * account is transferring to you.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputDeviceTransfers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputDeviceTransfersOutcome ListInputDeviceTransfers(const Model::ListInputDeviceTransfersRequest& request) const;


        /**
         * List input devices<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputDevicesOutcome ListInputDevices(const Model::ListInputDevicesRequest& request) const;


        /**
         * Produces a list of Input Security Groups for an account<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputSecurityGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputSecurityGroupsOutcome ListInputSecurityGroups(const Model::ListInputSecurityGroupsRequest& request) const;


        /**
         * Produces list of inputs that have been created<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputsOutcome ListInputs(const Model::ListInputsRequest& request) const;


        /**
         * List the programs that currently exist for a specific multiplex.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListMultiplexPrograms">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMultiplexProgramsOutcome ListMultiplexPrograms(const Model::ListMultiplexProgramsRequest& request) const;


        /**
         * Retrieve a list of the existing multiplexes.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListMultiplexes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMultiplexesOutcome ListMultiplexes(const Model::ListMultiplexesRequest& request) const;


        /**
         * List offerings available for purchase.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOfferingsOutcome ListOfferings(const Model::ListOfferingsRequest& request) const;


        /**
         * List purchased reservations.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListReservations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReservationsOutcome ListReservations(const Model::ListReservationsRequest& request) const;


        /**
         * Produces list of tags that have been created for a resource<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * Purchase an offering and create a reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/PurchaseOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseOfferingOutcome PurchaseOffering(const Model::PurchaseOfferingRequest& request) const;


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
         * Reject the transfer of the specified input device to your AWS account.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/RejectInputDeviceTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectInputDeviceTransferOutcome RejectInputDeviceTransfer(const Model::RejectInputDeviceTransferRequest& request) const;


        /**
         * Starts an existing channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::StartChannelOutcome StartChannel(const Model::StartChannelRequest& request) const;


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
         * Start (run) the multiplex. Starting the multiplex does not start the channels.
         * You must explicitly start each channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartMultiplex">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMultiplexOutcome StartMultiplex(const Model::StartMultiplexRequest& request) const;


        /**
         * Stops a running channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StopChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::StopChannelOutcome StopChannel(const Model::StopChannelRequest& request) const;


        /**
         * Stops a running multiplex. If the multiplex isn't running, this action has no
         * effect.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StopMultiplex">AWS
         * API Reference</a></p>
         */
        virtual Model::StopMultiplexOutcome StopMultiplex(const Model::StopMultiplexRequest& request) const;


        /**
         * Start an input device transfer to another AWS account. After you make the
         * request, the other account must accept or reject the transfer.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/TransferInputDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::TransferInputDeviceOutcome TransferInputDevice(const Model::TransferInputDeviceRequest& request) const;


        /**
         * Updates a channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelOutcome UpdateChannel(const Model::UpdateChannelRequest& request) const;


        /**
         * Changes the class of the channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannelClass">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelClassOutcome UpdateChannelClass(const Model::UpdateChannelClassRequest& request) const;


        /**
         * Updates an input.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInput">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInputOutcome UpdateInput(const Model::UpdateInputRequest& request) const;


        /**
         * Updates the parameters for the input device.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInputDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInputDeviceOutcome UpdateInputDevice(const Model::UpdateInputDeviceRequest& request) const;


        /**
         * Update an Input Security Group's Whilelists.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInputSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInputSecurityGroupOutcome UpdateInputSecurityGroup(const Model::UpdateInputSecurityGroupRequest& request) const;


        /**
         * Updates a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateMultiplex">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMultiplexOutcome UpdateMultiplex(const Model::UpdateMultiplexRequest& request) const;


        /**
         * Update a program in a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateMultiplexProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMultiplexProgramOutcome UpdateMultiplexProgram(const Model::UpdateMultiplexProgramRequest& request) const;


        /**
         * Update reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReservationOutcome UpdateReservation(const Model::UpdateReservationRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MediaLiveEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const MediaLiveClientConfiguration& clientConfiguration);

      MediaLiveClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MediaLiveEndpointProviderBase> m_endpointProvider;
  };

} // namespace MediaLive
} // namespace Aws
