/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CancelContactAsync(...)  SubmitAsync(&GroundStationClient::CancelContact, __VA_ARGS__)
#define CancelContactCallable(REQUEST)  SubmitCallable(&GroundStationClient::CancelContact, REQUEST)

#define CreateConfigAsync(...)  SubmitAsync(&GroundStationClient::CreateConfig, __VA_ARGS__)
#define CreateConfigCallable(REQUEST)  SubmitCallable(&GroundStationClient::CreateConfig, REQUEST)

#define CreateDataflowEndpointGroupAsync(...)  SubmitAsync(&GroundStationClient::CreateDataflowEndpointGroup, __VA_ARGS__)
#define CreateDataflowEndpointGroupCallable(REQUEST)  SubmitCallable(&GroundStationClient::CreateDataflowEndpointGroup, REQUEST)

#define CreateEphemerisAsync(...)  SubmitAsync(&GroundStationClient::CreateEphemeris, __VA_ARGS__)
#define CreateEphemerisCallable(REQUEST)  SubmitCallable(&GroundStationClient::CreateEphemeris, REQUEST)

#define CreateMissionProfileAsync(...)  SubmitAsync(&GroundStationClient::CreateMissionProfile, __VA_ARGS__)
#define CreateMissionProfileCallable(REQUEST)  SubmitCallable(&GroundStationClient::CreateMissionProfile, REQUEST)

#define DeleteConfigAsync(...)  SubmitAsync(&GroundStationClient::DeleteConfig, __VA_ARGS__)
#define DeleteConfigCallable(REQUEST)  SubmitCallable(&GroundStationClient::DeleteConfig, REQUEST)

#define DeleteDataflowEndpointGroupAsync(...)  SubmitAsync(&GroundStationClient::DeleteDataflowEndpointGroup, __VA_ARGS__)
#define DeleteDataflowEndpointGroupCallable(REQUEST)  SubmitCallable(&GroundStationClient::DeleteDataflowEndpointGroup, REQUEST)

#define DeleteEphemerisAsync(...)  SubmitAsync(&GroundStationClient::DeleteEphemeris, __VA_ARGS__)
#define DeleteEphemerisCallable(REQUEST)  SubmitCallable(&GroundStationClient::DeleteEphemeris, REQUEST)

#define DeleteMissionProfileAsync(...)  SubmitAsync(&GroundStationClient::DeleteMissionProfile, __VA_ARGS__)
#define DeleteMissionProfileCallable(REQUEST)  SubmitCallable(&GroundStationClient::DeleteMissionProfile, REQUEST)

#define DescribeContactAsync(...)  SubmitAsync(&GroundStationClient::DescribeContact, __VA_ARGS__)
#define DescribeContactCallable(REQUEST)  SubmitCallable(&GroundStationClient::DescribeContact, REQUEST)

#define DescribeEphemerisAsync(...)  SubmitAsync(&GroundStationClient::DescribeEphemeris, __VA_ARGS__)
#define DescribeEphemerisCallable(REQUEST)  SubmitCallable(&GroundStationClient::DescribeEphemeris, REQUEST)

#define GetConfigAsync(...)  SubmitAsync(&GroundStationClient::GetConfig, __VA_ARGS__)
#define GetConfigCallable(REQUEST)  SubmitCallable(&GroundStationClient::GetConfig, REQUEST)

#define GetDataflowEndpointGroupAsync(...)  SubmitAsync(&GroundStationClient::GetDataflowEndpointGroup, __VA_ARGS__)
#define GetDataflowEndpointGroupCallable(REQUEST)  SubmitCallable(&GroundStationClient::GetDataflowEndpointGroup, REQUEST)

#define GetMinuteUsageAsync(...)  SubmitAsync(&GroundStationClient::GetMinuteUsage, __VA_ARGS__)
#define GetMinuteUsageCallable(REQUEST)  SubmitCallable(&GroundStationClient::GetMinuteUsage, REQUEST)

#define GetMissionProfileAsync(...)  SubmitAsync(&GroundStationClient::GetMissionProfile, __VA_ARGS__)
#define GetMissionProfileCallable(REQUEST)  SubmitCallable(&GroundStationClient::GetMissionProfile, REQUEST)

#define GetSatelliteAsync(...)  SubmitAsync(&GroundStationClient::GetSatellite, __VA_ARGS__)
#define GetSatelliteCallable(REQUEST)  SubmitCallable(&GroundStationClient::GetSatellite, REQUEST)

#define ListConfigsAsync(...)  SubmitAsync(&GroundStationClient::ListConfigs, __VA_ARGS__)
#define ListConfigsCallable(REQUEST)  SubmitCallable(&GroundStationClient::ListConfigs, REQUEST)

#define ListContactsAsync(...)  SubmitAsync(&GroundStationClient::ListContacts, __VA_ARGS__)
#define ListContactsCallable(REQUEST)  SubmitCallable(&GroundStationClient::ListContacts, REQUEST)

#define ListDataflowEndpointGroupsAsync(...)  SubmitAsync(&GroundStationClient::ListDataflowEndpointGroups, __VA_ARGS__)
#define ListDataflowEndpointGroupsCallable(REQUEST)  SubmitCallable(&GroundStationClient::ListDataflowEndpointGroups, REQUEST)

#define ListEphemeridesAsync(...)  SubmitAsync(&GroundStationClient::ListEphemerides, __VA_ARGS__)
#define ListEphemeridesCallable(REQUEST)  SubmitCallable(&GroundStationClient::ListEphemerides, REQUEST)

#define ListGroundStationsAsync(...)  SubmitAsync(&GroundStationClient::ListGroundStations, __VA_ARGS__)
#define ListGroundStationsCallable(REQUEST)  SubmitCallable(&GroundStationClient::ListGroundStations, REQUEST)

#define ListMissionProfilesAsync(...)  SubmitAsync(&GroundStationClient::ListMissionProfiles, __VA_ARGS__)
#define ListMissionProfilesCallable(REQUEST)  SubmitCallable(&GroundStationClient::ListMissionProfiles, REQUEST)

#define ListSatellitesAsync(...)  SubmitAsync(&GroundStationClient::ListSatellites, __VA_ARGS__)
#define ListSatellitesCallable(REQUEST)  SubmitCallable(&GroundStationClient::ListSatellites, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&GroundStationClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&GroundStationClient::ListTagsForResource, REQUEST)

#define ReserveContactAsync(...)  SubmitAsync(&GroundStationClient::ReserveContact, __VA_ARGS__)
#define ReserveContactCallable(REQUEST)  SubmitCallable(&GroundStationClient::ReserveContact, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&GroundStationClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&GroundStationClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&GroundStationClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&GroundStationClient::UntagResource, REQUEST)

#define UpdateConfigAsync(...)  SubmitAsync(&GroundStationClient::UpdateConfig, __VA_ARGS__)
#define UpdateConfigCallable(REQUEST)  SubmitCallable(&GroundStationClient::UpdateConfig, REQUEST)

#define UpdateEphemerisAsync(...)  SubmitAsync(&GroundStationClient::UpdateEphemeris, __VA_ARGS__)
#define UpdateEphemerisCallable(REQUEST)  SubmitCallable(&GroundStationClient::UpdateEphemeris, REQUEST)

#define UpdateMissionProfileAsync(...)  SubmitAsync(&GroundStationClient::UpdateMissionProfile, __VA_ARGS__)
#define UpdateMissionProfileCallable(REQUEST)  SubmitCallable(&GroundStationClient::UpdateMissionProfile, REQUEST)

