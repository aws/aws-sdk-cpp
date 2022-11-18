/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateVehicleFleetAsync(...)  SubmitAsync(&IoTFleetWiseClient::AssociateVehicleFleet, __VA_ARGS__)
#define AssociateVehicleFleetCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::AssociateVehicleFleet, REQUEST)

#define BatchCreateVehicleAsync(...)  SubmitAsync(&IoTFleetWiseClient::BatchCreateVehicle, __VA_ARGS__)
#define BatchCreateVehicleCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::BatchCreateVehicle, REQUEST)

#define BatchUpdateVehicleAsync(...)  SubmitAsync(&IoTFleetWiseClient::BatchUpdateVehicle, __VA_ARGS__)
#define BatchUpdateVehicleCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::BatchUpdateVehicle, REQUEST)

#define CreateCampaignAsync(...)  SubmitAsync(&IoTFleetWiseClient::CreateCampaign, __VA_ARGS__)
#define CreateCampaignCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::CreateCampaign, REQUEST)

#define CreateDecoderManifestAsync(...)  SubmitAsync(&IoTFleetWiseClient::CreateDecoderManifest, __VA_ARGS__)
#define CreateDecoderManifestCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::CreateDecoderManifest, REQUEST)

#define CreateFleetAsync(...)  SubmitAsync(&IoTFleetWiseClient::CreateFleet, __VA_ARGS__)
#define CreateFleetCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::CreateFleet, REQUEST)

#define CreateModelManifestAsync(...)  SubmitAsync(&IoTFleetWiseClient::CreateModelManifest, __VA_ARGS__)
#define CreateModelManifestCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::CreateModelManifest, REQUEST)

#define CreateSignalCatalogAsync(...)  SubmitAsync(&IoTFleetWiseClient::CreateSignalCatalog, __VA_ARGS__)
#define CreateSignalCatalogCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::CreateSignalCatalog, REQUEST)

#define CreateVehicleAsync(...)  SubmitAsync(&IoTFleetWiseClient::CreateVehicle, __VA_ARGS__)
#define CreateVehicleCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::CreateVehicle, REQUEST)

#define DeleteCampaignAsync(...)  SubmitAsync(&IoTFleetWiseClient::DeleteCampaign, __VA_ARGS__)
#define DeleteCampaignCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::DeleteCampaign, REQUEST)

#define DeleteDecoderManifestAsync(...)  SubmitAsync(&IoTFleetWiseClient::DeleteDecoderManifest, __VA_ARGS__)
#define DeleteDecoderManifestCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::DeleteDecoderManifest, REQUEST)

#define DeleteFleetAsync(...)  SubmitAsync(&IoTFleetWiseClient::DeleteFleet, __VA_ARGS__)
#define DeleteFleetCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::DeleteFleet, REQUEST)

#define DeleteModelManifestAsync(...)  SubmitAsync(&IoTFleetWiseClient::DeleteModelManifest, __VA_ARGS__)
#define DeleteModelManifestCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::DeleteModelManifest, REQUEST)

#define DeleteSignalCatalogAsync(...)  SubmitAsync(&IoTFleetWiseClient::DeleteSignalCatalog, __VA_ARGS__)
#define DeleteSignalCatalogCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::DeleteSignalCatalog, REQUEST)

#define DeleteVehicleAsync(...)  SubmitAsync(&IoTFleetWiseClient::DeleteVehicle, __VA_ARGS__)
#define DeleteVehicleCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::DeleteVehicle, REQUEST)

#define DisassociateVehicleFleetAsync(...)  SubmitAsync(&IoTFleetWiseClient::DisassociateVehicleFleet, __VA_ARGS__)
#define DisassociateVehicleFleetCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::DisassociateVehicleFleet, REQUEST)

#define GetCampaignAsync(...)  SubmitAsync(&IoTFleetWiseClient::GetCampaign, __VA_ARGS__)
#define GetCampaignCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::GetCampaign, REQUEST)

#define GetDecoderManifestAsync(...)  SubmitAsync(&IoTFleetWiseClient::GetDecoderManifest, __VA_ARGS__)
#define GetDecoderManifestCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::GetDecoderManifest, REQUEST)

#define GetFleetAsync(...)  SubmitAsync(&IoTFleetWiseClient::GetFleet, __VA_ARGS__)
#define GetFleetCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::GetFleet, REQUEST)

#define GetLoggingOptionsAsync(...)  SubmitAsync(&IoTFleetWiseClient::GetLoggingOptions, __VA_ARGS__)
#define GetLoggingOptionsCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::GetLoggingOptions, REQUEST)

#define GetModelManifestAsync(...)  SubmitAsync(&IoTFleetWiseClient::GetModelManifest, __VA_ARGS__)
#define GetModelManifestCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::GetModelManifest, REQUEST)

#define GetRegisterAccountStatusAsync(...)  SubmitAsync(&IoTFleetWiseClient::GetRegisterAccountStatus, __VA_ARGS__)
#define GetRegisterAccountStatusCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::GetRegisterAccountStatus, REQUEST)

#define GetSignalCatalogAsync(...)  SubmitAsync(&IoTFleetWiseClient::GetSignalCatalog, __VA_ARGS__)
#define GetSignalCatalogCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::GetSignalCatalog, REQUEST)

#define GetVehicleAsync(...)  SubmitAsync(&IoTFleetWiseClient::GetVehicle, __VA_ARGS__)
#define GetVehicleCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::GetVehicle, REQUEST)

#define GetVehicleStatusAsync(...)  SubmitAsync(&IoTFleetWiseClient::GetVehicleStatus, __VA_ARGS__)
#define GetVehicleStatusCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::GetVehicleStatus, REQUEST)

#define ImportDecoderManifestAsync(...)  SubmitAsync(&IoTFleetWiseClient::ImportDecoderManifest, __VA_ARGS__)
#define ImportDecoderManifestCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::ImportDecoderManifest, REQUEST)

#define ImportSignalCatalogAsync(...)  SubmitAsync(&IoTFleetWiseClient::ImportSignalCatalog, __VA_ARGS__)
#define ImportSignalCatalogCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::ImportSignalCatalog, REQUEST)

#define ListCampaignsAsync(...)  SubmitAsync(&IoTFleetWiseClient::ListCampaigns, __VA_ARGS__)
#define ListCampaignsCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::ListCampaigns, REQUEST)

#define ListDecoderManifestNetworkInterfacesAsync(...)  SubmitAsync(&IoTFleetWiseClient::ListDecoderManifestNetworkInterfaces, __VA_ARGS__)
#define ListDecoderManifestNetworkInterfacesCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::ListDecoderManifestNetworkInterfaces, REQUEST)

#define ListDecoderManifestSignalsAsync(...)  SubmitAsync(&IoTFleetWiseClient::ListDecoderManifestSignals, __VA_ARGS__)
#define ListDecoderManifestSignalsCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::ListDecoderManifestSignals, REQUEST)

#define ListDecoderManifestsAsync(...)  SubmitAsync(&IoTFleetWiseClient::ListDecoderManifests, __VA_ARGS__)
#define ListDecoderManifestsCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::ListDecoderManifests, REQUEST)

#define ListFleetsAsync(...)  SubmitAsync(&IoTFleetWiseClient::ListFleets, __VA_ARGS__)
#define ListFleetsCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::ListFleets, REQUEST)

#define ListFleetsForVehicleAsync(...)  SubmitAsync(&IoTFleetWiseClient::ListFleetsForVehicle, __VA_ARGS__)
#define ListFleetsForVehicleCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::ListFleetsForVehicle, REQUEST)

#define ListModelManifestNodesAsync(...)  SubmitAsync(&IoTFleetWiseClient::ListModelManifestNodes, __VA_ARGS__)
#define ListModelManifestNodesCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::ListModelManifestNodes, REQUEST)

#define ListModelManifestsAsync(...)  SubmitAsync(&IoTFleetWiseClient::ListModelManifests, __VA_ARGS__)
#define ListModelManifestsCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::ListModelManifests, REQUEST)

#define ListSignalCatalogNodesAsync(...)  SubmitAsync(&IoTFleetWiseClient::ListSignalCatalogNodes, __VA_ARGS__)
#define ListSignalCatalogNodesCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::ListSignalCatalogNodes, REQUEST)

#define ListSignalCatalogsAsync(...)  SubmitAsync(&IoTFleetWiseClient::ListSignalCatalogs, __VA_ARGS__)
#define ListSignalCatalogsCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::ListSignalCatalogs, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&IoTFleetWiseClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::ListTagsForResource, REQUEST)

#define ListVehiclesAsync(...)  SubmitAsync(&IoTFleetWiseClient::ListVehicles, __VA_ARGS__)
#define ListVehiclesCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::ListVehicles, REQUEST)

#define ListVehiclesInFleetAsync(...)  SubmitAsync(&IoTFleetWiseClient::ListVehiclesInFleet, __VA_ARGS__)
#define ListVehiclesInFleetCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::ListVehiclesInFleet, REQUEST)

#define PutLoggingOptionsAsync(...)  SubmitAsync(&IoTFleetWiseClient::PutLoggingOptions, __VA_ARGS__)
#define PutLoggingOptionsCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::PutLoggingOptions, REQUEST)

#define RegisterAccountAsync(...)  SubmitAsync(&IoTFleetWiseClient::RegisterAccount, __VA_ARGS__)
#define RegisterAccountCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::RegisterAccount, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&IoTFleetWiseClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&IoTFleetWiseClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::UntagResource, REQUEST)

#define UpdateCampaignAsync(...)  SubmitAsync(&IoTFleetWiseClient::UpdateCampaign, __VA_ARGS__)
#define UpdateCampaignCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::UpdateCampaign, REQUEST)

#define UpdateDecoderManifestAsync(...)  SubmitAsync(&IoTFleetWiseClient::UpdateDecoderManifest, __VA_ARGS__)
#define UpdateDecoderManifestCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::UpdateDecoderManifest, REQUEST)

#define UpdateFleetAsync(...)  SubmitAsync(&IoTFleetWiseClient::UpdateFleet, __VA_ARGS__)
#define UpdateFleetCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::UpdateFleet, REQUEST)

#define UpdateModelManifestAsync(...)  SubmitAsync(&IoTFleetWiseClient::UpdateModelManifest, __VA_ARGS__)
#define UpdateModelManifestCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::UpdateModelManifest, REQUEST)

#define UpdateSignalCatalogAsync(...)  SubmitAsync(&IoTFleetWiseClient::UpdateSignalCatalog, __VA_ARGS__)
#define UpdateSignalCatalogCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::UpdateSignalCatalog, REQUEST)

#define UpdateVehicleAsync(...)  SubmitAsync(&IoTFleetWiseClient::UpdateVehicle, __VA_ARGS__)
#define UpdateVehicleCallable(REQUEST)  SubmitCallable(&IoTFleetWiseClient::UpdateVehicle, REQUEST)

