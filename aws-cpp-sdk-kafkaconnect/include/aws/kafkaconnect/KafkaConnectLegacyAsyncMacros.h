/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateConnectorAsync(...)  SubmitAsync(&KafkaConnectClient::CreateConnector, __VA_ARGS__)
#define CreateConnectorCallable(REQUEST)  SubmitCallable(&KafkaConnectClient::CreateConnector, REQUEST)

#define CreateCustomPluginAsync(...)  SubmitAsync(&KafkaConnectClient::CreateCustomPlugin, __VA_ARGS__)
#define CreateCustomPluginCallable(REQUEST)  SubmitCallable(&KafkaConnectClient::CreateCustomPlugin, REQUEST)

#define CreateWorkerConfigurationAsync(...)  SubmitAsync(&KafkaConnectClient::CreateWorkerConfiguration, __VA_ARGS__)
#define CreateWorkerConfigurationCallable(REQUEST)  SubmitCallable(&KafkaConnectClient::CreateWorkerConfiguration, REQUEST)

#define DeleteConnectorAsync(...)  SubmitAsync(&KafkaConnectClient::DeleteConnector, __VA_ARGS__)
#define DeleteConnectorCallable(REQUEST)  SubmitCallable(&KafkaConnectClient::DeleteConnector, REQUEST)

#define DeleteCustomPluginAsync(...)  SubmitAsync(&KafkaConnectClient::DeleteCustomPlugin, __VA_ARGS__)
#define DeleteCustomPluginCallable(REQUEST)  SubmitCallable(&KafkaConnectClient::DeleteCustomPlugin, REQUEST)

#define DescribeConnectorAsync(...)  SubmitAsync(&KafkaConnectClient::DescribeConnector, __VA_ARGS__)
#define DescribeConnectorCallable(REQUEST)  SubmitCallable(&KafkaConnectClient::DescribeConnector, REQUEST)

#define DescribeCustomPluginAsync(...)  SubmitAsync(&KafkaConnectClient::DescribeCustomPlugin, __VA_ARGS__)
#define DescribeCustomPluginCallable(REQUEST)  SubmitCallable(&KafkaConnectClient::DescribeCustomPlugin, REQUEST)

#define DescribeWorkerConfigurationAsync(...)  SubmitAsync(&KafkaConnectClient::DescribeWorkerConfiguration, __VA_ARGS__)
#define DescribeWorkerConfigurationCallable(REQUEST)  SubmitCallable(&KafkaConnectClient::DescribeWorkerConfiguration, REQUEST)

#define ListConnectorsAsync(...)  SubmitAsync(&KafkaConnectClient::ListConnectors, __VA_ARGS__)
#define ListConnectorsCallable(REQUEST)  SubmitCallable(&KafkaConnectClient::ListConnectors, REQUEST)

#define ListCustomPluginsAsync(...)  SubmitAsync(&KafkaConnectClient::ListCustomPlugins, __VA_ARGS__)
#define ListCustomPluginsCallable(REQUEST)  SubmitCallable(&KafkaConnectClient::ListCustomPlugins, REQUEST)

#define ListWorkerConfigurationsAsync(...)  SubmitAsync(&KafkaConnectClient::ListWorkerConfigurations, __VA_ARGS__)
#define ListWorkerConfigurationsCallable(REQUEST)  SubmitCallable(&KafkaConnectClient::ListWorkerConfigurations, REQUEST)

#define UpdateConnectorAsync(...)  SubmitAsync(&KafkaConnectClient::UpdateConnector, __VA_ARGS__)
#define UpdateConnectorCallable(REQUEST)  SubmitCallable(&KafkaConnectClient::UpdateConnector, REQUEST)

