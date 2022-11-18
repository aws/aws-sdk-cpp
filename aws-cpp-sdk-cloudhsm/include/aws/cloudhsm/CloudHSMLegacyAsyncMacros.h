/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddTagsToResourceAsync(...)  SubmitAsync(&CloudHSMClient::AddTagsToResource, __VA_ARGS__)
#define AddTagsToResourceCallable(REQUEST)  SubmitCallable(&CloudHSMClient::AddTagsToResource, REQUEST)

#define CreateHapgAsync(...)  SubmitAsync(&CloudHSMClient::CreateHapg, __VA_ARGS__)
#define CreateHapgCallable(REQUEST)  SubmitCallable(&CloudHSMClient::CreateHapg, REQUEST)

#define CreateHsmAsync(...)  SubmitAsync(&CloudHSMClient::CreateHsm, __VA_ARGS__)
#define CreateHsmCallable(REQUEST)  SubmitCallable(&CloudHSMClient::CreateHsm, REQUEST)

#define CreateLunaClientAsync(...)  SubmitAsync(&CloudHSMClient::CreateLunaClient, __VA_ARGS__)
#define CreateLunaClientCallable(REQUEST)  SubmitCallable(&CloudHSMClient::CreateLunaClient, REQUEST)

#define DeleteHapgAsync(...)  SubmitAsync(&CloudHSMClient::DeleteHapg, __VA_ARGS__)
#define DeleteHapgCallable(REQUEST)  SubmitCallable(&CloudHSMClient::DeleteHapg, REQUEST)

#define DeleteHsmAsync(...)  SubmitAsync(&CloudHSMClient::DeleteHsm, __VA_ARGS__)
#define DeleteHsmCallable(REQUEST)  SubmitCallable(&CloudHSMClient::DeleteHsm, REQUEST)

#define DeleteLunaClientAsync(...)  SubmitAsync(&CloudHSMClient::DeleteLunaClient, __VA_ARGS__)
#define DeleteLunaClientCallable(REQUEST)  SubmitCallable(&CloudHSMClient::DeleteLunaClient, REQUEST)

#define DescribeHapgAsync(...)  SubmitAsync(&CloudHSMClient::DescribeHapg, __VA_ARGS__)
#define DescribeHapgCallable(REQUEST)  SubmitCallable(&CloudHSMClient::DescribeHapg, REQUEST)

#define DescribeHsmAsync(...)  SubmitAsync(&CloudHSMClient::DescribeHsm, __VA_ARGS__)
#define DescribeHsmCallable(REQUEST)  SubmitCallable(&CloudHSMClient::DescribeHsm, REQUEST)

#define DescribeLunaClientAsync(...)  SubmitAsync(&CloudHSMClient::DescribeLunaClient, __VA_ARGS__)
#define DescribeLunaClientCallable(REQUEST)  SubmitCallable(&CloudHSMClient::DescribeLunaClient, REQUEST)

#define GetConfigAsync(...)  SubmitAsync(&CloudHSMClient::GetConfig, __VA_ARGS__)
#define GetConfigCallable(REQUEST)  SubmitCallable(&CloudHSMClient::GetConfig, REQUEST)

#define ListAvailableZonesAsync(...)  SubmitAsync(&CloudHSMClient::ListAvailableZones, __VA_ARGS__)
#define ListAvailableZonesCallable(REQUEST)  SubmitCallable(&CloudHSMClient::ListAvailableZones, REQUEST)

#define ListHapgsAsync(...)  SubmitAsync(&CloudHSMClient::ListHapgs, __VA_ARGS__)
#define ListHapgsCallable(REQUEST)  SubmitCallable(&CloudHSMClient::ListHapgs, REQUEST)

#define ListHsmsAsync(...)  SubmitAsync(&CloudHSMClient::ListHsms, __VA_ARGS__)
#define ListHsmsCallable(REQUEST)  SubmitCallable(&CloudHSMClient::ListHsms, REQUEST)

#define ListLunaClientsAsync(...)  SubmitAsync(&CloudHSMClient::ListLunaClients, __VA_ARGS__)
#define ListLunaClientsCallable(REQUEST)  SubmitCallable(&CloudHSMClient::ListLunaClients, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&CloudHSMClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&CloudHSMClient::ListTagsForResource, REQUEST)

#define ModifyHapgAsync(...)  SubmitAsync(&CloudHSMClient::ModifyHapg, __VA_ARGS__)
#define ModifyHapgCallable(REQUEST)  SubmitCallable(&CloudHSMClient::ModifyHapg, REQUEST)

#define ModifyHsmAsync(...)  SubmitAsync(&CloudHSMClient::ModifyHsm, __VA_ARGS__)
#define ModifyHsmCallable(REQUEST)  SubmitCallable(&CloudHSMClient::ModifyHsm, REQUEST)

#define ModifyLunaClientAsync(...)  SubmitAsync(&CloudHSMClient::ModifyLunaClient, __VA_ARGS__)
#define ModifyLunaClientCallable(REQUEST)  SubmitCallable(&CloudHSMClient::ModifyLunaClient, REQUEST)

#define RemoveTagsFromResourceAsync(...)  SubmitAsync(&CloudHSMClient::RemoveTagsFromResource, __VA_ARGS__)
#define RemoveTagsFromResourceCallable(REQUEST)  SubmitCallable(&CloudHSMClient::RemoveTagsFromResource, REQUEST)

