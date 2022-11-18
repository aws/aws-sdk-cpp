/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AcceptInputDeviceTransferAsync(...)  SubmitAsync(&MediaLiveClient::AcceptInputDeviceTransfer, __VA_ARGS__)
#define AcceptInputDeviceTransferCallable(REQUEST)  SubmitCallable(&MediaLiveClient::AcceptInputDeviceTransfer, REQUEST)

#define BatchDeleteAsync(...)  SubmitAsync(&MediaLiveClient::BatchDelete, __VA_ARGS__)
#define BatchDeleteCallable(REQUEST)  SubmitCallable(&MediaLiveClient::BatchDelete, REQUEST)

#define BatchStartAsync(...)  SubmitAsync(&MediaLiveClient::BatchStart, __VA_ARGS__)
#define BatchStartCallable(REQUEST)  SubmitCallable(&MediaLiveClient::BatchStart, REQUEST)

#define BatchStopAsync(...)  SubmitAsync(&MediaLiveClient::BatchStop, __VA_ARGS__)
#define BatchStopCallable(REQUEST)  SubmitCallable(&MediaLiveClient::BatchStop, REQUEST)

#define BatchUpdateScheduleAsync(...)  SubmitAsync(&MediaLiveClient::BatchUpdateSchedule, __VA_ARGS__)
#define BatchUpdateScheduleCallable(REQUEST)  SubmitCallable(&MediaLiveClient::BatchUpdateSchedule, REQUEST)

#define CancelInputDeviceTransferAsync(...)  SubmitAsync(&MediaLiveClient::CancelInputDeviceTransfer, __VA_ARGS__)
#define CancelInputDeviceTransferCallable(REQUEST)  SubmitCallable(&MediaLiveClient::CancelInputDeviceTransfer, REQUEST)

#define ClaimDeviceAsync(...)  SubmitAsync(&MediaLiveClient::ClaimDevice, __VA_ARGS__)
#define ClaimDeviceCallable(REQUEST)  SubmitCallable(&MediaLiveClient::ClaimDevice, REQUEST)

#define CreateChannelAsync(...)  SubmitAsync(&MediaLiveClient::CreateChannel, __VA_ARGS__)
#define CreateChannelCallable(REQUEST)  SubmitCallable(&MediaLiveClient::CreateChannel, REQUEST)

#define CreateInputAsync(...)  SubmitAsync(&MediaLiveClient::CreateInput, __VA_ARGS__)
#define CreateInputCallable(REQUEST)  SubmitCallable(&MediaLiveClient::CreateInput, REQUEST)

#define CreateInputSecurityGroupAsync(...)  SubmitAsync(&MediaLiveClient::CreateInputSecurityGroup, __VA_ARGS__)
#define CreateInputSecurityGroupCallable(REQUEST)  SubmitCallable(&MediaLiveClient::CreateInputSecurityGroup, REQUEST)

#define CreateMultiplexAsync(...)  SubmitAsync(&MediaLiveClient::CreateMultiplex, __VA_ARGS__)
#define CreateMultiplexCallable(REQUEST)  SubmitCallable(&MediaLiveClient::CreateMultiplex, REQUEST)

#define CreateMultiplexProgramAsync(...)  SubmitAsync(&MediaLiveClient::CreateMultiplexProgram, __VA_ARGS__)
#define CreateMultiplexProgramCallable(REQUEST)  SubmitCallable(&MediaLiveClient::CreateMultiplexProgram, REQUEST)

#define CreatePartnerInputAsync(...)  SubmitAsync(&MediaLiveClient::CreatePartnerInput, __VA_ARGS__)
#define CreatePartnerInputCallable(REQUEST)  SubmitCallable(&MediaLiveClient::CreatePartnerInput, REQUEST)

#define CreateTagsAsync(...)  SubmitAsync(&MediaLiveClient::CreateTags, __VA_ARGS__)
#define CreateTagsCallable(REQUEST)  SubmitCallable(&MediaLiveClient::CreateTags, REQUEST)

#define DeleteChannelAsync(...)  SubmitAsync(&MediaLiveClient::DeleteChannel, __VA_ARGS__)
#define DeleteChannelCallable(REQUEST)  SubmitCallable(&MediaLiveClient::DeleteChannel, REQUEST)

#define DeleteInputAsync(...)  SubmitAsync(&MediaLiveClient::DeleteInput, __VA_ARGS__)
#define DeleteInputCallable(REQUEST)  SubmitCallable(&MediaLiveClient::DeleteInput, REQUEST)

#define DeleteInputSecurityGroupAsync(...)  SubmitAsync(&MediaLiveClient::DeleteInputSecurityGroup, __VA_ARGS__)
#define DeleteInputSecurityGroupCallable(REQUEST)  SubmitCallable(&MediaLiveClient::DeleteInputSecurityGroup, REQUEST)

#define DeleteMultiplexAsync(...)  SubmitAsync(&MediaLiveClient::DeleteMultiplex, __VA_ARGS__)
#define DeleteMultiplexCallable(REQUEST)  SubmitCallable(&MediaLiveClient::DeleteMultiplex, REQUEST)

#define DeleteMultiplexProgramAsync(...)  SubmitAsync(&MediaLiveClient::DeleteMultiplexProgram, __VA_ARGS__)
#define DeleteMultiplexProgramCallable(REQUEST)  SubmitCallable(&MediaLiveClient::DeleteMultiplexProgram, REQUEST)

#define DeleteReservationAsync(...)  SubmitAsync(&MediaLiveClient::DeleteReservation, __VA_ARGS__)
#define DeleteReservationCallable(REQUEST)  SubmitCallable(&MediaLiveClient::DeleteReservation, REQUEST)

#define DeleteScheduleAsync(...)  SubmitAsync(&MediaLiveClient::DeleteSchedule, __VA_ARGS__)
#define DeleteScheduleCallable(REQUEST)  SubmitCallable(&MediaLiveClient::DeleteSchedule, REQUEST)

#define DeleteTagsAsync(...)  SubmitAsync(&MediaLiveClient::DeleteTags, __VA_ARGS__)
#define DeleteTagsCallable(REQUEST)  SubmitCallable(&MediaLiveClient::DeleteTags, REQUEST)

#define DescribeChannelAsync(...)  SubmitAsync(&MediaLiveClient::DescribeChannel, __VA_ARGS__)
#define DescribeChannelCallable(REQUEST)  SubmitCallable(&MediaLiveClient::DescribeChannel, REQUEST)

#define DescribeInputAsync(...)  SubmitAsync(&MediaLiveClient::DescribeInput, __VA_ARGS__)
#define DescribeInputCallable(REQUEST)  SubmitCallable(&MediaLiveClient::DescribeInput, REQUEST)

#define DescribeInputDeviceAsync(...)  SubmitAsync(&MediaLiveClient::DescribeInputDevice, __VA_ARGS__)
#define DescribeInputDeviceCallable(REQUEST)  SubmitCallable(&MediaLiveClient::DescribeInputDevice, REQUEST)

#define DescribeInputDeviceThumbnailAsync(...)  SubmitAsync(&MediaLiveClient::DescribeInputDeviceThumbnail, __VA_ARGS__)
#define DescribeInputDeviceThumbnailCallable(REQUEST)  SubmitCallable(&MediaLiveClient::DescribeInputDeviceThumbnail, REQUEST)

#define DescribeInputSecurityGroupAsync(...)  SubmitAsync(&MediaLiveClient::DescribeInputSecurityGroup, __VA_ARGS__)
#define DescribeInputSecurityGroupCallable(REQUEST)  SubmitCallable(&MediaLiveClient::DescribeInputSecurityGroup, REQUEST)

#define DescribeMultiplexAsync(...)  SubmitAsync(&MediaLiveClient::DescribeMultiplex, __VA_ARGS__)
#define DescribeMultiplexCallable(REQUEST)  SubmitCallable(&MediaLiveClient::DescribeMultiplex, REQUEST)

#define DescribeMultiplexProgramAsync(...)  SubmitAsync(&MediaLiveClient::DescribeMultiplexProgram, __VA_ARGS__)
#define DescribeMultiplexProgramCallable(REQUEST)  SubmitCallable(&MediaLiveClient::DescribeMultiplexProgram, REQUEST)

#define DescribeOfferingAsync(...)  SubmitAsync(&MediaLiveClient::DescribeOffering, __VA_ARGS__)
#define DescribeOfferingCallable(REQUEST)  SubmitCallable(&MediaLiveClient::DescribeOffering, REQUEST)

#define DescribeReservationAsync(...)  SubmitAsync(&MediaLiveClient::DescribeReservation, __VA_ARGS__)
#define DescribeReservationCallable(REQUEST)  SubmitCallable(&MediaLiveClient::DescribeReservation, REQUEST)

#define DescribeScheduleAsync(...)  SubmitAsync(&MediaLiveClient::DescribeSchedule, __VA_ARGS__)
#define DescribeScheduleCallable(REQUEST)  SubmitCallable(&MediaLiveClient::DescribeSchedule, REQUEST)

#define ListChannelsAsync(...)  SubmitAsync(&MediaLiveClient::ListChannels, __VA_ARGS__)
#define ListChannelsCallable(REQUEST)  SubmitCallable(&MediaLiveClient::ListChannels, REQUEST)

#define ListInputDeviceTransfersAsync(...)  SubmitAsync(&MediaLiveClient::ListInputDeviceTransfers, __VA_ARGS__)
#define ListInputDeviceTransfersCallable(REQUEST)  SubmitCallable(&MediaLiveClient::ListInputDeviceTransfers, REQUEST)

#define ListInputDevicesAsync(...)  SubmitAsync(&MediaLiveClient::ListInputDevices, __VA_ARGS__)
#define ListInputDevicesCallable(REQUEST)  SubmitCallable(&MediaLiveClient::ListInputDevices, REQUEST)

#define ListInputSecurityGroupsAsync(...)  SubmitAsync(&MediaLiveClient::ListInputSecurityGroups, __VA_ARGS__)
#define ListInputSecurityGroupsCallable(REQUEST)  SubmitCallable(&MediaLiveClient::ListInputSecurityGroups, REQUEST)

#define ListInputsAsync(...)  SubmitAsync(&MediaLiveClient::ListInputs, __VA_ARGS__)
#define ListInputsCallable(REQUEST)  SubmitCallable(&MediaLiveClient::ListInputs, REQUEST)

#define ListMultiplexProgramsAsync(...)  SubmitAsync(&MediaLiveClient::ListMultiplexPrograms, __VA_ARGS__)
#define ListMultiplexProgramsCallable(REQUEST)  SubmitCallable(&MediaLiveClient::ListMultiplexPrograms, REQUEST)

#define ListMultiplexesAsync(...)  SubmitAsync(&MediaLiveClient::ListMultiplexes, __VA_ARGS__)
#define ListMultiplexesCallable(REQUEST)  SubmitCallable(&MediaLiveClient::ListMultiplexes, REQUEST)

#define ListOfferingsAsync(...)  SubmitAsync(&MediaLiveClient::ListOfferings, __VA_ARGS__)
#define ListOfferingsCallable(REQUEST)  SubmitCallable(&MediaLiveClient::ListOfferings, REQUEST)

#define ListReservationsAsync(...)  SubmitAsync(&MediaLiveClient::ListReservations, __VA_ARGS__)
#define ListReservationsCallable(REQUEST)  SubmitCallable(&MediaLiveClient::ListReservations, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&MediaLiveClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&MediaLiveClient::ListTagsForResource, REQUEST)

#define PurchaseOfferingAsync(...)  SubmitAsync(&MediaLiveClient::PurchaseOffering, __VA_ARGS__)
#define PurchaseOfferingCallable(REQUEST)  SubmitCallable(&MediaLiveClient::PurchaseOffering, REQUEST)

#define RebootInputDeviceAsync(...)  SubmitAsync(&MediaLiveClient::RebootInputDevice, __VA_ARGS__)
#define RebootInputDeviceCallable(REQUEST)  SubmitCallable(&MediaLiveClient::RebootInputDevice, REQUEST)

#define RejectInputDeviceTransferAsync(...)  SubmitAsync(&MediaLiveClient::RejectInputDeviceTransfer, __VA_ARGS__)
#define RejectInputDeviceTransferCallable(REQUEST)  SubmitCallable(&MediaLiveClient::RejectInputDeviceTransfer, REQUEST)

#define StartChannelAsync(...)  SubmitAsync(&MediaLiveClient::StartChannel, __VA_ARGS__)
#define StartChannelCallable(REQUEST)  SubmitCallable(&MediaLiveClient::StartChannel, REQUEST)

#define StartInputDeviceMaintenanceWindowAsync(...)  SubmitAsync(&MediaLiveClient::StartInputDeviceMaintenanceWindow, __VA_ARGS__)
#define StartInputDeviceMaintenanceWindowCallable(REQUEST)  SubmitCallable(&MediaLiveClient::StartInputDeviceMaintenanceWindow, REQUEST)

#define StartMultiplexAsync(...)  SubmitAsync(&MediaLiveClient::StartMultiplex, __VA_ARGS__)
#define StartMultiplexCallable(REQUEST)  SubmitCallable(&MediaLiveClient::StartMultiplex, REQUEST)

#define StopChannelAsync(...)  SubmitAsync(&MediaLiveClient::StopChannel, __VA_ARGS__)
#define StopChannelCallable(REQUEST)  SubmitCallable(&MediaLiveClient::StopChannel, REQUEST)

#define StopMultiplexAsync(...)  SubmitAsync(&MediaLiveClient::StopMultiplex, __VA_ARGS__)
#define StopMultiplexCallable(REQUEST)  SubmitCallable(&MediaLiveClient::StopMultiplex, REQUEST)

#define TransferInputDeviceAsync(...)  SubmitAsync(&MediaLiveClient::TransferInputDevice, __VA_ARGS__)
#define TransferInputDeviceCallable(REQUEST)  SubmitCallable(&MediaLiveClient::TransferInputDevice, REQUEST)

#define UpdateChannelAsync(...)  SubmitAsync(&MediaLiveClient::UpdateChannel, __VA_ARGS__)
#define UpdateChannelCallable(REQUEST)  SubmitCallable(&MediaLiveClient::UpdateChannel, REQUEST)

#define UpdateChannelClassAsync(...)  SubmitAsync(&MediaLiveClient::UpdateChannelClass, __VA_ARGS__)
#define UpdateChannelClassCallable(REQUEST)  SubmitCallable(&MediaLiveClient::UpdateChannelClass, REQUEST)

#define UpdateInputAsync(...)  SubmitAsync(&MediaLiveClient::UpdateInput, __VA_ARGS__)
#define UpdateInputCallable(REQUEST)  SubmitCallable(&MediaLiveClient::UpdateInput, REQUEST)

#define UpdateInputDeviceAsync(...)  SubmitAsync(&MediaLiveClient::UpdateInputDevice, __VA_ARGS__)
#define UpdateInputDeviceCallable(REQUEST)  SubmitCallable(&MediaLiveClient::UpdateInputDevice, REQUEST)

#define UpdateInputSecurityGroupAsync(...)  SubmitAsync(&MediaLiveClient::UpdateInputSecurityGroup, __VA_ARGS__)
#define UpdateInputSecurityGroupCallable(REQUEST)  SubmitCallable(&MediaLiveClient::UpdateInputSecurityGroup, REQUEST)

#define UpdateMultiplexAsync(...)  SubmitAsync(&MediaLiveClient::UpdateMultiplex, __VA_ARGS__)
#define UpdateMultiplexCallable(REQUEST)  SubmitCallable(&MediaLiveClient::UpdateMultiplex, REQUEST)

#define UpdateMultiplexProgramAsync(...)  SubmitAsync(&MediaLiveClient::UpdateMultiplexProgram, __VA_ARGS__)
#define UpdateMultiplexProgramCallable(REQUEST)  SubmitCallable(&MediaLiveClient::UpdateMultiplexProgram, REQUEST)

#define UpdateReservationAsync(...)  SubmitAsync(&MediaLiveClient::UpdateReservation, __VA_ARGS__)
#define UpdateReservationCallable(REQUEST)  SubmitCallable(&MediaLiveClient::UpdateReservation, REQUEST)

