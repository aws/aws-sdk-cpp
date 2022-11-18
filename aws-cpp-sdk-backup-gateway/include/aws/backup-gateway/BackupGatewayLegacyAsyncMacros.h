/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateGatewayToServerAsync(...)  SubmitAsync(&BackupGatewayClient::AssociateGatewayToServer, __VA_ARGS__)
#define AssociateGatewayToServerCallable(REQUEST)  SubmitCallable(&BackupGatewayClient::AssociateGatewayToServer, REQUEST)

#define CreateGatewayAsync(...)  SubmitAsync(&BackupGatewayClient::CreateGateway, __VA_ARGS__)
#define CreateGatewayCallable(REQUEST)  SubmitCallable(&BackupGatewayClient::CreateGateway, REQUEST)

#define DeleteGatewayAsync(...)  SubmitAsync(&BackupGatewayClient::DeleteGateway, __VA_ARGS__)
#define DeleteGatewayCallable(REQUEST)  SubmitCallable(&BackupGatewayClient::DeleteGateway, REQUEST)

#define DeleteHypervisorAsync(...)  SubmitAsync(&BackupGatewayClient::DeleteHypervisor, __VA_ARGS__)
#define DeleteHypervisorCallable(REQUEST)  SubmitCallable(&BackupGatewayClient::DeleteHypervisor, REQUEST)

#define DisassociateGatewayFromServerAsync(...)  SubmitAsync(&BackupGatewayClient::DisassociateGatewayFromServer, __VA_ARGS__)
#define DisassociateGatewayFromServerCallable(REQUEST)  SubmitCallable(&BackupGatewayClient::DisassociateGatewayFromServer, REQUEST)

#define GetGatewayAsync(...)  SubmitAsync(&BackupGatewayClient::GetGateway, __VA_ARGS__)
#define GetGatewayCallable(REQUEST)  SubmitCallable(&BackupGatewayClient::GetGateway, REQUEST)

#define GetVirtualMachineAsync(...)  SubmitAsync(&BackupGatewayClient::GetVirtualMachine, __VA_ARGS__)
#define GetVirtualMachineCallable(REQUEST)  SubmitCallable(&BackupGatewayClient::GetVirtualMachine, REQUEST)

#define ImportHypervisorConfigurationAsync(...)  SubmitAsync(&BackupGatewayClient::ImportHypervisorConfiguration, __VA_ARGS__)
#define ImportHypervisorConfigurationCallable(REQUEST)  SubmitCallable(&BackupGatewayClient::ImportHypervisorConfiguration, REQUEST)

#define ListGatewaysAsync(...)  SubmitAsync(&BackupGatewayClient::ListGateways, __VA_ARGS__)
#define ListGatewaysCallable(REQUEST)  SubmitCallable(&BackupGatewayClient::ListGateways, REQUEST)

#define ListHypervisorsAsync(...)  SubmitAsync(&BackupGatewayClient::ListHypervisors, __VA_ARGS__)
#define ListHypervisorsCallable(REQUEST)  SubmitCallable(&BackupGatewayClient::ListHypervisors, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&BackupGatewayClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&BackupGatewayClient::ListTagsForResource, REQUEST)

#define ListVirtualMachinesAsync(...)  SubmitAsync(&BackupGatewayClient::ListVirtualMachines, __VA_ARGS__)
#define ListVirtualMachinesCallable(REQUEST)  SubmitCallable(&BackupGatewayClient::ListVirtualMachines, REQUEST)

#define PutMaintenanceStartTimeAsync(...)  SubmitAsync(&BackupGatewayClient::PutMaintenanceStartTime, __VA_ARGS__)
#define PutMaintenanceStartTimeCallable(REQUEST)  SubmitCallable(&BackupGatewayClient::PutMaintenanceStartTime, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&BackupGatewayClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&BackupGatewayClient::TagResource, REQUEST)

#define TestHypervisorConfigurationAsync(...)  SubmitAsync(&BackupGatewayClient::TestHypervisorConfiguration, __VA_ARGS__)
#define TestHypervisorConfigurationCallable(REQUEST)  SubmitCallable(&BackupGatewayClient::TestHypervisorConfiguration, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&BackupGatewayClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&BackupGatewayClient::UntagResource, REQUEST)

#define UpdateGatewayInformationAsync(...)  SubmitAsync(&BackupGatewayClient::UpdateGatewayInformation, __VA_ARGS__)
#define UpdateGatewayInformationCallable(REQUEST)  SubmitCallable(&BackupGatewayClient::UpdateGatewayInformation, REQUEST)

#define UpdateGatewaySoftwareNowAsync(...)  SubmitAsync(&BackupGatewayClient::UpdateGatewaySoftwareNow, __VA_ARGS__)
#define UpdateGatewaySoftwareNowCallable(REQUEST)  SubmitCallable(&BackupGatewayClient::UpdateGatewaySoftwareNow, REQUEST)

#define UpdateHypervisorAsync(...)  SubmitAsync(&BackupGatewayClient::UpdateHypervisor, __VA_ARGS__)
#define UpdateHypervisorCallable(REQUEST)  SubmitCallable(&BackupGatewayClient::UpdateHypervisor, REQUEST)

