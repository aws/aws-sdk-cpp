/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateCustomDomainAsync(...)  SubmitAsync(&AppRunnerClient::AssociateCustomDomain, __VA_ARGS__)
#define AssociateCustomDomainCallable(REQUEST)  SubmitCallable(&AppRunnerClient::AssociateCustomDomain, REQUEST)

#define CreateAutoScalingConfigurationAsync(...)  SubmitAsync(&AppRunnerClient::CreateAutoScalingConfiguration, __VA_ARGS__)
#define CreateAutoScalingConfigurationCallable(REQUEST)  SubmitCallable(&AppRunnerClient::CreateAutoScalingConfiguration, REQUEST)

#define CreateConnectionAsync(...)  SubmitAsync(&AppRunnerClient::CreateConnection, __VA_ARGS__)
#define CreateConnectionCallable(REQUEST)  SubmitCallable(&AppRunnerClient::CreateConnection, REQUEST)

#define CreateObservabilityConfigurationAsync(...)  SubmitAsync(&AppRunnerClient::CreateObservabilityConfiguration, __VA_ARGS__)
#define CreateObservabilityConfigurationCallable(REQUEST)  SubmitCallable(&AppRunnerClient::CreateObservabilityConfiguration, REQUEST)

#define CreateServiceAsync(...)  SubmitAsync(&AppRunnerClient::CreateService, __VA_ARGS__)
#define CreateServiceCallable(REQUEST)  SubmitCallable(&AppRunnerClient::CreateService, REQUEST)

#define CreateVpcConnectorAsync(...)  SubmitAsync(&AppRunnerClient::CreateVpcConnector, __VA_ARGS__)
#define CreateVpcConnectorCallable(REQUEST)  SubmitCallable(&AppRunnerClient::CreateVpcConnector, REQUEST)

#define CreateVpcIngressConnectionAsync(...)  SubmitAsync(&AppRunnerClient::CreateVpcIngressConnection, __VA_ARGS__)
#define CreateVpcIngressConnectionCallable(REQUEST)  SubmitCallable(&AppRunnerClient::CreateVpcIngressConnection, REQUEST)

#define DeleteAutoScalingConfigurationAsync(...)  SubmitAsync(&AppRunnerClient::DeleteAutoScalingConfiguration, __VA_ARGS__)
#define DeleteAutoScalingConfigurationCallable(REQUEST)  SubmitCallable(&AppRunnerClient::DeleteAutoScalingConfiguration, REQUEST)

#define DeleteConnectionAsync(...)  SubmitAsync(&AppRunnerClient::DeleteConnection, __VA_ARGS__)
#define DeleteConnectionCallable(REQUEST)  SubmitCallable(&AppRunnerClient::DeleteConnection, REQUEST)

#define DeleteObservabilityConfigurationAsync(...)  SubmitAsync(&AppRunnerClient::DeleteObservabilityConfiguration, __VA_ARGS__)
#define DeleteObservabilityConfigurationCallable(REQUEST)  SubmitCallable(&AppRunnerClient::DeleteObservabilityConfiguration, REQUEST)

#define DeleteServiceAsync(...)  SubmitAsync(&AppRunnerClient::DeleteService, __VA_ARGS__)
#define DeleteServiceCallable(REQUEST)  SubmitCallable(&AppRunnerClient::DeleteService, REQUEST)

#define DeleteVpcConnectorAsync(...)  SubmitAsync(&AppRunnerClient::DeleteVpcConnector, __VA_ARGS__)
#define DeleteVpcConnectorCallable(REQUEST)  SubmitCallable(&AppRunnerClient::DeleteVpcConnector, REQUEST)

#define DeleteVpcIngressConnectionAsync(...)  SubmitAsync(&AppRunnerClient::DeleteVpcIngressConnection, __VA_ARGS__)
#define DeleteVpcIngressConnectionCallable(REQUEST)  SubmitCallable(&AppRunnerClient::DeleteVpcIngressConnection, REQUEST)

#define DescribeAutoScalingConfigurationAsync(...)  SubmitAsync(&AppRunnerClient::DescribeAutoScalingConfiguration, __VA_ARGS__)
#define DescribeAutoScalingConfigurationCallable(REQUEST)  SubmitCallable(&AppRunnerClient::DescribeAutoScalingConfiguration, REQUEST)

#define DescribeCustomDomainsAsync(...)  SubmitAsync(&AppRunnerClient::DescribeCustomDomains, __VA_ARGS__)
#define DescribeCustomDomainsCallable(REQUEST)  SubmitCallable(&AppRunnerClient::DescribeCustomDomains, REQUEST)

#define DescribeObservabilityConfigurationAsync(...)  SubmitAsync(&AppRunnerClient::DescribeObservabilityConfiguration, __VA_ARGS__)
#define DescribeObservabilityConfigurationCallable(REQUEST)  SubmitCallable(&AppRunnerClient::DescribeObservabilityConfiguration, REQUEST)

#define DescribeServiceAsync(...)  SubmitAsync(&AppRunnerClient::DescribeService, __VA_ARGS__)
#define DescribeServiceCallable(REQUEST)  SubmitCallable(&AppRunnerClient::DescribeService, REQUEST)

#define DescribeVpcConnectorAsync(...)  SubmitAsync(&AppRunnerClient::DescribeVpcConnector, __VA_ARGS__)
#define DescribeVpcConnectorCallable(REQUEST)  SubmitCallable(&AppRunnerClient::DescribeVpcConnector, REQUEST)

#define DescribeVpcIngressConnectionAsync(...)  SubmitAsync(&AppRunnerClient::DescribeVpcIngressConnection, __VA_ARGS__)
#define DescribeVpcIngressConnectionCallable(REQUEST)  SubmitCallable(&AppRunnerClient::DescribeVpcIngressConnection, REQUEST)

#define DisassociateCustomDomainAsync(...)  SubmitAsync(&AppRunnerClient::DisassociateCustomDomain, __VA_ARGS__)
#define DisassociateCustomDomainCallable(REQUEST)  SubmitCallable(&AppRunnerClient::DisassociateCustomDomain, REQUEST)

#define ListAutoScalingConfigurationsAsync(...)  SubmitAsync(&AppRunnerClient::ListAutoScalingConfigurations, __VA_ARGS__)
#define ListAutoScalingConfigurationsCallable(REQUEST)  SubmitCallable(&AppRunnerClient::ListAutoScalingConfigurations, REQUEST)

#define ListConnectionsAsync(...)  SubmitAsync(&AppRunnerClient::ListConnections, __VA_ARGS__)
#define ListConnectionsCallable(REQUEST)  SubmitCallable(&AppRunnerClient::ListConnections, REQUEST)

#define ListObservabilityConfigurationsAsync(...)  SubmitAsync(&AppRunnerClient::ListObservabilityConfigurations, __VA_ARGS__)
#define ListObservabilityConfigurationsCallable(REQUEST)  SubmitCallable(&AppRunnerClient::ListObservabilityConfigurations, REQUEST)

#define ListOperationsAsync(...)  SubmitAsync(&AppRunnerClient::ListOperations, __VA_ARGS__)
#define ListOperationsCallable(REQUEST)  SubmitCallable(&AppRunnerClient::ListOperations, REQUEST)

#define ListServicesAsync(...)  SubmitAsync(&AppRunnerClient::ListServices, __VA_ARGS__)
#define ListServicesCallable(REQUEST)  SubmitCallable(&AppRunnerClient::ListServices, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&AppRunnerClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&AppRunnerClient::ListTagsForResource, REQUEST)

#define ListVpcConnectorsAsync(...)  SubmitAsync(&AppRunnerClient::ListVpcConnectors, __VA_ARGS__)
#define ListVpcConnectorsCallable(REQUEST)  SubmitCallable(&AppRunnerClient::ListVpcConnectors, REQUEST)

#define ListVpcIngressConnectionsAsync(...)  SubmitAsync(&AppRunnerClient::ListVpcIngressConnections, __VA_ARGS__)
#define ListVpcIngressConnectionsCallable(REQUEST)  SubmitCallable(&AppRunnerClient::ListVpcIngressConnections, REQUEST)

#define PauseServiceAsync(...)  SubmitAsync(&AppRunnerClient::PauseService, __VA_ARGS__)
#define PauseServiceCallable(REQUEST)  SubmitCallable(&AppRunnerClient::PauseService, REQUEST)

#define ResumeServiceAsync(...)  SubmitAsync(&AppRunnerClient::ResumeService, __VA_ARGS__)
#define ResumeServiceCallable(REQUEST)  SubmitCallable(&AppRunnerClient::ResumeService, REQUEST)

#define StartDeploymentAsync(...)  SubmitAsync(&AppRunnerClient::StartDeployment, __VA_ARGS__)
#define StartDeploymentCallable(REQUEST)  SubmitCallable(&AppRunnerClient::StartDeployment, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&AppRunnerClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&AppRunnerClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&AppRunnerClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&AppRunnerClient::UntagResource, REQUEST)

#define UpdateServiceAsync(...)  SubmitAsync(&AppRunnerClient::UpdateService, __VA_ARGS__)
#define UpdateServiceCallable(REQUEST)  SubmitCallable(&AppRunnerClient::UpdateService, REQUEST)

#define UpdateVpcIngressConnectionAsync(...)  SubmitAsync(&AppRunnerClient::UpdateVpcIngressConnection, __VA_ARGS__)
#define UpdateVpcIngressConnectionCallable(REQUEST)  SubmitCallable(&AppRunnerClient::UpdateVpcIngressConnection, REQUEST)

