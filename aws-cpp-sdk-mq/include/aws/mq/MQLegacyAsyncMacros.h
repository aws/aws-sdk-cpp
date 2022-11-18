/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateBrokerAsync(...)  SubmitAsync(&MQClient::CreateBroker, __VA_ARGS__)
#define CreateBrokerCallable(REQUEST)  SubmitCallable(&MQClient::CreateBroker, REQUEST)

#define CreateConfigurationAsync(...)  SubmitAsync(&MQClient::CreateConfiguration, __VA_ARGS__)
#define CreateConfigurationCallable(REQUEST)  SubmitCallable(&MQClient::CreateConfiguration, REQUEST)

#define CreateTagsAsync(...)  SubmitAsync(&MQClient::CreateTags, __VA_ARGS__)
#define CreateTagsCallable(REQUEST)  SubmitCallable(&MQClient::CreateTags, REQUEST)

#define CreateUserAsync(...)  SubmitAsync(&MQClient::CreateUser, __VA_ARGS__)
#define CreateUserCallable(REQUEST)  SubmitCallable(&MQClient::CreateUser, REQUEST)

#define DeleteBrokerAsync(...)  SubmitAsync(&MQClient::DeleteBroker, __VA_ARGS__)
#define DeleteBrokerCallable(REQUEST)  SubmitCallable(&MQClient::DeleteBroker, REQUEST)

#define DeleteTagsAsync(...)  SubmitAsync(&MQClient::DeleteTags, __VA_ARGS__)
#define DeleteTagsCallable(REQUEST)  SubmitCallable(&MQClient::DeleteTags, REQUEST)

#define DeleteUserAsync(...)  SubmitAsync(&MQClient::DeleteUser, __VA_ARGS__)
#define DeleteUserCallable(REQUEST)  SubmitCallable(&MQClient::DeleteUser, REQUEST)

#define DescribeBrokerAsync(...)  SubmitAsync(&MQClient::DescribeBroker, __VA_ARGS__)
#define DescribeBrokerCallable(REQUEST)  SubmitCallable(&MQClient::DescribeBroker, REQUEST)

#define DescribeBrokerEngineTypesAsync(...)  SubmitAsync(&MQClient::DescribeBrokerEngineTypes, __VA_ARGS__)
#define DescribeBrokerEngineTypesCallable(REQUEST)  SubmitCallable(&MQClient::DescribeBrokerEngineTypes, REQUEST)

#define DescribeBrokerInstanceOptionsAsync(...)  SubmitAsync(&MQClient::DescribeBrokerInstanceOptions, __VA_ARGS__)
#define DescribeBrokerInstanceOptionsCallable(REQUEST)  SubmitCallable(&MQClient::DescribeBrokerInstanceOptions, REQUEST)

#define DescribeConfigurationAsync(...)  SubmitAsync(&MQClient::DescribeConfiguration, __VA_ARGS__)
#define DescribeConfigurationCallable(REQUEST)  SubmitCallable(&MQClient::DescribeConfiguration, REQUEST)

#define DescribeConfigurationRevisionAsync(...)  SubmitAsync(&MQClient::DescribeConfigurationRevision, __VA_ARGS__)
#define DescribeConfigurationRevisionCallable(REQUEST)  SubmitCallable(&MQClient::DescribeConfigurationRevision, REQUEST)

#define DescribeUserAsync(...)  SubmitAsync(&MQClient::DescribeUser, __VA_ARGS__)
#define DescribeUserCallable(REQUEST)  SubmitCallable(&MQClient::DescribeUser, REQUEST)

#define ListBrokersAsync(...)  SubmitAsync(&MQClient::ListBrokers, __VA_ARGS__)
#define ListBrokersCallable(REQUEST)  SubmitCallable(&MQClient::ListBrokers, REQUEST)

#define ListConfigurationRevisionsAsync(...)  SubmitAsync(&MQClient::ListConfigurationRevisions, __VA_ARGS__)
#define ListConfigurationRevisionsCallable(REQUEST)  SubmitCallable(&MQClient::ListConfigurationRevisions, REQUEST)

#define ListConfigurationsAsync(...)  SubmitAsync(&MQClient::ListConfigurations, __VA_ARGS__)
#define ListConfigurationsCallable(REQUEST)  SubmitCallable(&MQClient::ListConfigurations, REQUEST)

#define ListTagsAsync(...)  SubmitAsync(&MQClient::ListTags, __VA_ARGS__)
#define ListTagsCallable(REQUEST)  SubmitCallable(&MQClient::ListTags, REQUEST)

#define ListUsersAsync(...)  SubmitAsync(&MQClient::ListUsers, __VA_ARGS__)
#define ListUsersCallable(REQUEST)  SubmitCallable(&MQClient::ListUsers, REQUEST)

#define RebootBrokerAsync(...)  SubmitAsync(&MQClient::RebootBroker, __VA_ARGS__)
#define RebootBrokerCallable(REQUEST)  SubmitCallable(&MQClient::RebootBroker, REQUEST)

#define UpdateBrokerAsync(...)  SubmitAsync(&MQClient::UpdateBroker, __VA_ARGS__)
#define UpdateBrokerCallable(REQUEST)  SubmitCallable(&MQClient::UpdateBroker, REQUEST)

#define UpdateConfigurationAsync(...)  SubmitAsync(&MQClient::UpdateConfiguration, __VA_ARGS__)
#define UpdateConfigurationCallable(REQUEST)  SubmitCallable(&MQClient::UpdateConfiguration, REQUEST)

#define UpdateUserAsync(...)  SubmitAsync(&MQClient::UpdateUser, __VA_ARGS__)
#define UpdateUserCallable(REQUEST)  SubmitCallable(&MQClient::UpdateUser, REQUEST)

