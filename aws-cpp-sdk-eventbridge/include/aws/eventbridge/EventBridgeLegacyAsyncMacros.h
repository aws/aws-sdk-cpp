/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define ActivateEventSourceAsync(...)  SubmitAsync(&EventBridgeClient::ActivateEventSource, __VA_ARGS__)
#define ActivateEventSourceCallable(REQUEST)  SubmitCallable(&EventBridgeClient::ActivateEventSource, REQUEST)

#define CancelReplayAsync(...)  SubmitAsync(&EventBridgeClient::CancelReplay, __VA_ARGS__)
#define CancelReplayCallable(REQUEST)  SubmitCallable(&EventBridgeClient::CancelReplay, REQUEST)

#define CreateApiDestinationAsync(...)  SubmitAsync(&EventBridgeClient::CreateApiDestination, __VA_ARGS__)
#define CreateApiDestinationCallable(REQUEST)  SubmitCallable(&EventBridgeClient::CreateApiDestination, REQUEST)

#define CreateArchiveAsync(...)  SubmitAsync(&EventBridgeClient::CreateArchive, __VA_ARGS__)
#define CreateArchiveCallable(REQUEST)  SubmitCallable(&EventBridgeClient::CreateArchive, REQUEST)

#define CreateConnectionAsync(...)  SubmitAsync(&EventBridgeClient::CreateConnection, __VA_ARGS__)
#define CreateConnectionCallable(REQUEST)  SubmitCallable(&EventBridgeClient::CreateConnection, REQUEST)

#define CreateEndpointAsync(...)  SubmitAsync(&EventBridgeClient::CreateEndpoint, __VA_ARGS__)
#define CreateEndpointCallable(REQUEST)  SubmitCallable(&EventBridgeClient::CreateEndpoint, REQUEST)

#define CreateEventBusAsync(...)  SubmitAsync(&EventBridgeClient::CreateEventBus, __VA_ARGS__)
#define CreateEventBusCallable(REQUEST)  SubmitCallable(&EventBridgeClient::CreateEventBus, REQUEST)

#define CreatePartnerEventSourceAsync(...)  SubmitAsync(&EventBridgeClient::CreatePartnerEventSource, __VA_ARGS__)
#define CreatePartnerEventSourceCallable(REQUEST)  SubmitCallable(&EventBridgeClient::CreatePartnerEventSource, REQUEST)

#define DeactivateEventSourceAsync(...)  SubmitAsync(&EventBridgeClient::DeactivateEventSource, __VA_ARGS__)
#define DeactivateEventSourceCallable(REQUEST)  SubmitCallable(&EventBridgeClient::DeactivateEventSource, REQUEST)

#define DeauthorizeConnectionAsync(...)  SubmitAsync(&EventBridgeClient::DeauthorizeConnection, __VA_ARGS__)
#define DeauthorizeConnectionCallable(REQUEST)  SubmitCallable(&EventBridgeClient::DeauthorizeConnection, REQUEST)

#define DeleteApiDestinationAsync(...)  SubmitAsync(&EventBridgeClient::DeleteApiDestination, __VA_ARGS__)
#define DeleteApiDestinationCallable(REQUEST)  SubmitCallable(&EventBridgeClient::DeleteApiDestination, REQUEST)

#define DeleteArchiveAsync(...)  SubmitAsync(&EventBridgeClient::DeleteArchive, __VA_ARGS__)
#define DeleteArchiveCallable(REQUEST)  SubmitCallable(&EventBridgeClient::DeleteArchive, REQUEST)

#define DeleteConnectionAsync(...)  SubmitAsync(&EventBridgeClient::DeleteConnection, __VA_ARGS__)
#define DeleteConnectionCallable(REQUEST)  SubmitCallable(&EventBridgeClient::DeleteConnection, REQUEST)

#define DeleteEndpointAsync(...)  SubmitAsync(&EventBridgeClient::DeleteEndpoint, __VA_ARGS__)
#define DeleteEndpointCallable(REQUEST)  SubmitCallable(&EventBridgeClient::DeleteEndpoint, REQUEST)

#define DeleteEventBusAsync(...)  SubmitAsync(&EventBridgeClient::DeleteEventBus, __VA_ARGS__)
#define DeleteEventBusCallable(REQUEST)  SubmitCallable(&EventBridgeClient::DeleteEventBus, REQUEST)

#define DeletePartnerEventSourceAsync(...)  SubmitAsync(&EventBridgeClient::DeletePartnerEventSource, __VA_ARGS__)
#define DeletePartnerEventSourceCallable(REQUEST)  SubmitCallable(&EventBridgeClient::DeletePartnerEventSource, REQUEST)

#define DeleteRuleAsync(...)  SubmitAsync(&EventBridgeClient::DeleteRule, __VA_ARGS__)
#define DeleteRuleCallable(REQUEST)  SubmitCallable(&EventBridgeClient::DeleteRule, REQUEST)

#define DescribeApiDestinationAsync(...)  SubmitAsync(&EventBridgeClient::DescribeApiDestination, __VA_ARGS__)
#define DescribeApiDestinationCallable(REQUEST)  SubmitCallable(&EventBridgeClient::DescribeApiDestination, REQUEST)

#define DescribeArchiveAsync(...)  SubmitAsync(&EventBridgeClient::DescribeArchive, __VA_ARGS__)
#define DescribeArchiveCallable(REQUEST)  SubmitCallable(&EventBridgeClient::DescribeArchive, REQUEST)

#define DescribeConnectionAsync(...)  SubmitAsync(&EventBridgeClient::DescribeConnection, __VA_ARGS__)
#define DescribeConnectionCallable(REQUEST)  SubmitCallable(&EventBridgeClient::DescribeConnection, REQUEST)

#define DescribeEndpointAsync(...)  SubmitAsync(&EventBridgeClient::DescribeEndpoint, __VA_ARGS__)
#define DescribeEndpointCallable(REQUEST)  SubmitCallable(&EventBridgeClient::DescribeEndpoint, REQUEST)

#define DescribeEventBusAsync(...)  SubmitAsync(&EventBridgeClient::DescribeEventBus, __VA_ARGS__)
#define DescribeEventBusCallable(REQUEST)  SubmitCallable(&EventBridgeClient::DescribeEventBus, REQUEST)

#define DescribeEventSourceAsync(...)  SubmitAsync(&EventBridgeClient::DescribeEventSource, __VA_ARGS__)
#define DescribeEventSourceCallable(REQUEST)  SubmitCallable(&EventBridgeClient::DescribeEventSource, REQUEST)

#define DescribePartnerEventSourceAsync(...)  SubmitAsync(&EventBridgeClient::DescribePartnerEventSource, __VA_ARGS__)
#define DescribePartnerEventSourceCallable(REQUEST)  SubmitCallable(&EventBridgeClient::DescribePartnerEventSource, REQUEST)

#define DescribeReplayAsync(...)  SubmitAsync(&EventBridgeClient::DescribeReplay, __VA_ARGS__)
#define DescribeReplayCallable(REQUEST)  SubmitCallable(&EventBridgeClient::DescribeReplay, REQUEST)

#define DescribeRuleAsync(...)  SubmitAsync(&EventBridgeClient::DescribeRule, __VA_ARGS__)
#define DescribeRuleCallable(REQUEST)  SubmitCallable(&EventBridgeClient::DescribeRule, REQUEST)

#define DisableRuleAsync(...)  SubmitAsync(&EventBridgeClient::DisableRule, __VA_ARGS__)
#define DisableRuleCallable(REQUEST)  SubmitCallable(&EventBridgeClient::DisableRule, REQUEST)

#define EnableRuleAsync(...)  SubmitAsync(&EventBridgeClient::EnableRule, __VA_ARGS__)
#define EnableRuleCallable(REQUEST)  SubmitCallable(&EventBridgeClient::EnableRule, REQUEST)

#define ListApiDestinationsAsync(...)  SubmitAsync(&EventBridgeClient::ListApiDestinations, __VA_ARGS__)
#define ListApiDestinationsCallable(REQUEST)  SubmitCallable(&EventBridgeClient::ListApiDestinations, REQUEST)

#define ListArchivesAsync(...)  SubmitAsync(&EventBridgeClient::ListArchives, __VA_ARGS__)
#define ListArchivesCallable(REQUEST)  SubmitCallable(&EventBridgeClient::ListArchives, REQUEST)

#define ListConnectionsAsync(...)  SubmitAsync(&EventBridgeClient::ListConnections, __VA_ARGS__)
#define ListConnectionsCallable(REQUEST)  SubmitCallable(&EventBridgeClient::ListConnections, REQUEST)

#define ListEndpointsAsync(...)  SubmitAsync(&EventBridgeClient::ListEndpoints, __VA_ARGS__)
#define ListEndpointsCallable(REQUEST)  SubmitCallable(&EventBridgeClient::ListEndpoints, REQUEST)

#define ListEventBusesAsync(...)  SubmitAsync(&EventBridgeClient::ListEventBuses, __VA_ARGS__)
#define ListEventBusesCallable(REQUEST)  SubmitCallable(&EventBridgeClient::ListEventBuses, REQUEST)

#define ListEventSourcesAsync(...)  SubmitAsync(&EventBridgeClient::ListEventSources, __VA_ARGS__)
#define ListEventSourcesCallable(REQUEST)  SubmitCallable(&EventBridgeClient::ListEventSources, REQUEST)

#define ListPartnerEventSourceAccountsAsync(...)  SubmitAsync(&EventBridgeClient::ListPartnerEventSourceAccounts, __VA_ARGS__)
#define ListPartnerEventSourceAccountsCallable(REQUEST)  SubmitCallable(&EventBridgeClient::ListPartnerEventSourceAccounts, REQUEST)

#define ListPartnerEventSourcesAsync(...)  SubmitAsync(&EventBridgeClient::ListPartnerEventSources, __VA_ARGS__)
#define ListPartnerEventSourcesCallable(REQUEST)  SubmitCallable(&EventBridgeClient::ListPartnerEventSources, REQUEST)

#define ListReplaysAsync(...)  SubmitAsync(&EventBridgeClient::ListReplays, __VA_ARGS__)
#define ListReplaysCallable(REQUEST)  SubmitCallable(&EventBridgeClient::ListReplays, REQUEST)

#define ListRuleNamesByTargetAsync(...)  SubmitAsync(&EventBridgeClient::ListRuleNamesByTarget, __VA_ARGS__)
#define ListRuleNamesByTargetCallable(REQUEST)  SubmitCallable(&EventBridgeClient::ListRuleNamesByTarget, REQUEST)

#define ListRulesAsync(...)  SubmitAsync(&EventBridgeClient::ListRules, __VA_ARGS__)
#define ListRulesCallable(REQUEST)  SubmitCallable(&EventBridgeClient::ListRules, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&EventBridgeClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&EventBridgeClient::ListTagsForResource, REQUEST)

#define ListTargetsByRuleAsync(...)  SubmitAsync(&EventBridgeClient::ListTargetsByRule, __VA_ARGS__)
#define ListTargetsByRuleCallable(REQUEST)  SubmitCallable(&EventBridgeClient::ListTargetsByRule, REQUEST)

#define PutEventsAsync(...)  SubmitAsync(&EventBridgeClient::PutEvents, __VA_ARGS__)
#define PutEventsCallable(REQUEST)  SubmitCallable(&EventBridgeClient::PutEvents, REQUEST)

#define PutPartnerEventsAsync(...)  SubmitAsync(&EventBridgeClient::PutPartnerEvents, __VA_ARGS__)
#define PutPartnerEventsCallable(REQUEST)  SubmitCallable(&EventBridgeClient::PutPartnerEvents, REQUEST)

#define PutPermissionAsync(...)  SubmitAsync(&EventBridgeClient::PutPermission, __VA_ARGS__)
#define PutPermissionCallable(REQUEST)  SubmitCallable(&EventBridgeClient::PutPermission, REQUEST)

#define PutRuleAsync(...)  SubmitAsync(&EventBridgeClient::PutRule, __VA_ARGS__)
#define PutRuleCallable(REQUEST)  SubmitCallable(&EventBridgeClient::PutRule, REQUEST)

#define PutTargetsAsync(...)  SubmitAsync(&EventBridgeClient::PutTargets, __VA_ARGS__)
#define PutTargetsCallable(REQUEST)  SubmitCallable(&EventBridgeClient::PutTargets, REQUEST)

#define RemovePermissionAsync(...)  SubmitAsync(&EventBridgeClient::RemovePermission, __VA_ARGS__)
#define RemovePermissionCallable(REQUEST)  SubmitCallable(&EventBridgeClient::RemovePermission, REQUEST)

#define RemoveTargetsAsync(...)  SubmitAsync(&EventBridgeClient::RemoveTargets, __VA_ARGS__)
#define RemoveTargetsCallable(REQUEST)  SubmitCallable(&EventBridgeClient::RemoveTargets, REQUEST)

#define StartReplayAsync(...)  SubmitAsync(&EventBridgeClient::StartReplay, __VA_ARGS__)
#define StartReplayCallable(REQUEST)  SubmitCallable(&EventBridgeClient::StartReplay, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&EventBridgeClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&EventBridgeClient::TagResource, REQUEST)

#define TestEventPatternAsync(...)  SubmitAsync(&EventBridgeClient::TestEventPattern, __VA_ARGS__)
#define TestEventPatternCallable(REQUEST)  SubmitCallable(&EventBridgeClient::TestEventPattern, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&EventBridgeClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&EventBridgeClient::UntagResource, REQUEST)

#define UpdateApiDestinationAsync(...)  SubmitAsync(&EventBridgeClient::UpdateApiDestination, __VA_ARGS__)
#define UpdateApiDestinationCallable(REQUEST)  SubmitCallable(&EventBridgeClient::UpdateApiDestination, REQUEST)

#define UpdateArchiveAsync(...)  SubmitAsync(&EventBridgeClient::UpdateArchive, __VA_ARGS__)
#define UpdateArchiveCallable(REQUEST)  SubmitCallable(&EventBridgeClient::UpdateArchive, REQUEST)

#define UpdateConnectionAsync(...)  SubmitAsync(&EventBridgeClient::UpdateConnection, __VA_ARGS__)
#define UpdateConnectionCallable(REQUEST)  SubmitCallable(&EventBridgeClient::UpdateConnection, REQUEST)

#define UpdateEndpointAsync(...)  SubmitAsync(&EventBridgeClient::UpdateEndpoint, __VA_ARGS__)
#define UpdateEndpointCallable(REQUEST)  SubmitCallable(&EventBridgeClient::UpdateEndpoint, REQUEST)

