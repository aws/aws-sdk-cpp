/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddFlowMediaStreamsAsync(...)  SubmitAsync(&MediaConnectClient::AddFlowMediaStreams, __VA_ARGS__)
#define AddFlowMediaStreamsCallable(REQUEST)  SubmitCallable(&MediaConnectClient::AddFlowMediaStreams, REQUEST)

#define AddFlowOutputsAsync(...)  SubmitAsync(&MediaConnectClient::AddFlowOutputs, __VA_ARGS__)
#define AddFlowOutputsCallable(REQUEST)  SubmitCallable(&MediaConnectClient::AddFlowOutputs, REQUEST)

#define AddFlowSourcesAsync(...)  SubmitAsync(&MediaConnectClient::AddFlowSources, __VA_ARGS__)
#define AddFlowSourcesCallable(REQUEST)  SubmitCallable(&MediaConnectClient::AddFlowSources, REQUEST)

#define AddFlowVpcInterfacesAsync(...)  SubmitAsync(&MediaConnectClient::AddFlowVpcInterfaces, __VA_ARGS__)
#define AddFlowVpcInterfacesCallable(REQUEST)  SubmitCallable(&MediaConnectClient::AddFlowVpcInterfaces, REQUEST)

#define CreateFlowAsync(...)  SubmitAsync(&MediaConnectClient::CreateFlow, __VA_ARGS__)
#define CreateFlowCallable(REQUEST)  SubmitCallable(&MediaConnectClient::CreateFlow, REQUEST)

#define DeleteFlowAsync(...)  SubmitAsync(&MediaConnectClient::DeleteFlow, __VA_ARGS__)
#define DeleteFlowCallable(REQUEST)  SubmitCallable(&MediaConnectClient::DeleteFlow, REQUEST)

#define DescribeFlowAsync(...)  SubmitAsync(&MediaConnectClient::DescribeFlow, __VA_ARGS__)
#define DescribeFlowCallable(REQUEST)  SubmitCallable(&MediaConnectClient::DescribeFlow, REQUEST)

#define DescribeOfferingAsync(...)  SubmitAsync(&MediaConnectClient::DescribeOffering, __VA_ARGS__)
#define DescribeOfferingCallable(REQUEST)  SubmitCallable(&MediaConnectClient::DescribeOffering, REQUEST)

#define DescribeReservationAsync(...)  SubmitAsync(&MediaConnectClient::DescribeReservation, __VA_ARGS__)
#define DescribeReservationCallable(REQUEST)  SubmitCallable(&MediaConnectClient::DescribeReservation, REQUEST)

#define GrantFlowEntitlementsAsync(...)  SubmitAsync(&MediaConnectClient::GrantFlowEntitlements, __VA_ARGS__)
#define GrantFlowEntitlementsCallable(REQUEST)  SubmitCallable(&MediaConnectClient::GrantFlowEntitlements, REQUEST)

#define ListEntitlementsAsync(...)  SubmitAsync(&MediaConnectClient::ListEntitlements, __VA_ARGS__)
#define ListEntitlementsCallable(REQUEST)  SubmitCallable(&MediaConnectClient::ListEntitlements, REQUEST)

#define ListFlowsAsync(...)  SubmitAsync(&MediaConnectClient::ListFlows, __VA_ARGS__)
#define ListFlowsCallable(REQUEST)  SubmitCallable(&MediaConnectClient::ListFlows, REQUEST)

#define ListOfferingsAsync(...)  SubmitAsync(&MediaConnectClient::ListOfferings, __VA_ARGS__)
#define ListOfferingsCallable(REQUEST)  SubmitCallable(&MediaConnectClient::ListOfferings, REQUEST)

#define ListReservationsAsync(...)  SubmitAsync(&MediaConnectClient::ListReservations, __VA_ARGS__)
#define ListReservationsCallable(REQUEST)  SubmitCallable(&MediaConnectClient::ListReservations, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&MediaConnectClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&MediaConnectClient::ListTagsForResource, REQUEST)

#define PurchaseOfferingAsync(...)  SubmitAsync(&MediaConnectClient::PurchaseOffering, __VA_ARGS__)
#define PurchaseOfferingCallable(REQUEST)  SubmitCallable(&MediaConnectClient::PurchaseOffering, REQUEST)

#define RemoveFlowMediaStreamAsync(...)  SubmitAsync(&MediaConnectClient::RemoveFlowMediaStream, __VA_ARGS__)
#define RemoveFlowMediaStreamCallable(REQUEST)  SubmitCallable(&MediaConnectClient::RemoveFlowMediaStream, REQUEST)

#define RemoveFlowOutputAsync(...)  SubmitAsync(&MediaConnectClient::RemoveFlowOutput, __VA_ARGS__)
#define RemoveFlowOutputCallable(REQUEST)  SubmitCallable(&MediaConnectClient::RemoveFlowOutput, REQUEST)

#define RemoveFlowSourceAsync(...)  SubmitAsync(&MediaConnectClient::RemoveFlowSource, __VA_ARGS__)
#define RemoveFlowSourceCallable(REQUEST)  SubmitCallable(&MediaConnectClient::RemoveFlowSource, REQUEST)

#define RemoveFlowVpcInterfaceAsync(...)  SubmitAsync(&MediaConnectClient::RemoveFlowVpcInterface, __VA_ARGS__)
#define RemoveFlowVpcInterfaceCallable(REQUEST)  SubmitCallable(&MediaConnectClient::RemoveFlowVpcInterface, REQUEST)

#define RevokeFlowEntitlementAsync(...)  SubmitAsync(&MediaConnectClient::RevokeFlowEntitlement, __VA_ARGS__)
#define RevokeFlowEntitlementCallable(REQUEST)  SubmitCallable(&MediaConnectClient::RevokeFlowEntitlement, REQUEST)

#define StartFlowAsync(...)  SubmitAsync(&MediaConnectClient::StartFlow, __VA_ARGS__)
#define StartFlowCallable(REQUEST)  SubmitCallable(&MediaConnectClient::StartFlow, REQUEST)

#define StopFlowAsync(...)  SubmitAsync(&MediaConnectClient::StopFlow, __VA_ARGS__)
#define StopFlowCallable(REQUEST)  SubmitCallable(&MediaConnectClient::StopFlow, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&MediaConnectClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&MediaConnectClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&MediaConnectClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&MediaConnectClient::UntagResource, REQUEST)

#define UpdateFlowAsync(...)  SubmitAsync(&MediaConnectClient::UpdateFlow, __VA_ARGS__)
#define UpdateFlowCallable(REQUEST)  SubmitCallable(&MediaConnectClient::UpdateFlow, REQUEST)

#define UpdateFlowEntitlementAsync(...)  SubmitAsync(&MediaConnectClient::UpdateFlowEntitlement, __VA_ARGS__)
#define UpdateFlowEntitlementCallable(REQUEST)  SubmitCallable(&MediaConnectClient::UpdateFlowEntitlement, REQUEST)

#define UpdateFlowMediaStreamAsync(...)  SubmitAsync(&MediaConnectClient::UpdateFlowMediaStream, __VA_ARGS__)
#define UpdateFlowMediaStreamCallable(REQUEST)  SubmitCallable(&MediaConnectClient::UpdateFlowMediaStream, REQUEST)

#define UpdateFlowOutputAsync(...)  SubmitAsync(&MediaConnectClient::UpdateFlowOutput, __VA_ARGS__)
#define UpdateFlowOutputCallable(REQUEST)  SubmitCallable(&MediaConnectClient::UpdateFlowOutput, REQUEST)

#define UpdateFlowSourceAsync(...)  SubmitAsync(&MediaConnectClient::UpdateFlowSource, __VA_ARGS__)
#define UpdateFlowSourceCallable(REQUEST)  SubmitCallable(&MediaConnectClient::UpdateFlowSource, REQUEST)

