/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateSlackChannelConfigurationAsync(...)  SubmitAsync(&SupportAppClient::CreateSlackChannelConfiguration, __VA_ARGS__)
#define CreateSlackChannelConfigurationCallable(REQUEST)  SubmitCallable(&SupportAppClient::CreateSlackChannelConfiguration, REQUEST)

#define DeleteAccountAliasAsync(...)  SubmitAsync(&SupportAppClient::DeleteAccountAlias, __VA_ARGS__)
#define DeleteAccountAliasCallable(REQUEST)  SubmitCallable(&SupportAppClient::DeleteAccountAlias, REQUEST)

#define DeleteSlackChannelConfigurationAsync(...)  SubmitAsync(&SupportAppClient::DeleteSlackChannelConfiguration, __VA_ARGS__)
#define DeleteSlackChannelConfigurationCallable(REQUEST)  SubmitCallable(&SupportAppClient::DeleteSlackChannelConfiguration, REQUEST)

#define DeleteSlackWorkspaceConfigurationAsync(...)  SubmitAsync(&SupportAppClient::DeleteSlackWorkspaceConfiguration, __VA_ARGS__)
#define DeleteSlackWorkspaceConfigurationCallable(REQUEST)  SubmitCallable(&SupportAppClient::DeleteSlackWorkspaceConfiguration, REQUEST)

#define GetAccountAliasAsync(...)  SubmitAsync(&SupportAppClient::GetAccountAlias, __VA_ARGS__)
#define GetAccountAliasCallable(REQUEST)  SubmitCallable(&SupportAppClient::GetAccountAlias, REQUEST)

#define ListSlackChannelConfigurationsAsync(...)  SubmitAsync(&SupportAppClient::ListSlackChannelConfigurations, __VA_ARGS__)
#define ListSlackChannelConfigurationsCallable(REQUEST)  SubmitCallable(&SupportAppClient::ListSlackChannelConfigurations, REQUEST)

#define ListSlackWorkspaceConfigurationsAsync(...)  SubmitAsync(&SupportAppClient::ListSlackWorkspaceConfigurations, __VA_ARGS__)
#define ListSlackWorkspaceConfigurationsCallable(REQUEST)  SubmitCallable(&SupportAppClient::ListSlackWorkspaceConfigurations, REQUEST)

#define PutAccountAliasAsync(...)  SubmitAsync(&SupportAppClient::PutAccountAlias, __VA_ARGS__)
#define PutAccountAliasCallable(REQUEST)  SubmitCallable(&SupportAppClient::PutAccountAlias, REQUEST)

#define RegisterSlackWorkspaceForOrganizationAsync(...)  SubmitAsync(&SupportAppClient::RegisterSlackWorkspaceForOrganization, __VA_ARGS__)
#define RegisterSlackWorkspaceForOrganizationCallable(REQUEST)  SubmitCallable(&SupportAppClient::RegisterSlackWorkspaceForOrganization, REQUEST)

#define UpdateSlackChannelConfigurationAsync(...)  SubmitAsync(&SupportAppClient::UpdateSlackChannelConfiguration, __VA_ARGS__)
#define UpdateSlackChannelConfigurationCallable(REQUEST)  SubmitCallable(&SupportAppClient::UpdateSlackChannelConfiguration, REQUEST)

