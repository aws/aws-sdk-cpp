/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define ActivateEventSourceAsync(...)  SubmitAsync(&CloudWatchEventsClient::ActivateEventSource, __VA_ARGS__)
#define ActivateEventSourceCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::ActivateEventSource, REQUEST)

#define CancelReplayAsync(...)  SubmitAsync(&CloudWatchEventsClient::CancelReplay, __VA_ARGS__)
#define CancelReplayCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::CancelReplay, REQUEST)

#define CreateApiDestinationAsync(...)  SubmitAsync(&CloudWatchEventsClient::CreateApiDestination, __VA_ARGS__)
#define CreateApiDestinationCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::CreateApiDestination, REQUEST)

#define CreateArchiveAsync(...)  SubmitAsync(&CloudWatchEventsClient::CreateArchive, __VA_ARGS__)
#define CreateArchiveCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::CreateArchive, REQUEST)

#define CreateConnectionAsync(...)  SubmitAsync(&CloudWatchEventsClient::CreateConnection, __VA_ARGS__)
#define CreateConnectionCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::CreateConnection, REQUEST)

#define CreateEventBusAsync(...)  SubmitAsync(&CloudWatchEventsClient::CreateEventBus, __VA_ARGS__)
#define CreateEventBusCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::CreateEventBus, REQUEST)

#define CreatePartnerEventSourceAsync(...)  SubmitAsync(&CloudWatchEventsClient::CreatePartnerEventSource, __VA_ARGS__)
#define CreatePartnerEventSourceCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::CreatePartnerEventSource, REQUEST)

#define DeactivateEventSourceAsync(...)  SubmitAsync(&CloudWatchEventsClient::DeactivateEventSource, __VA_ARGS__)
#define DeactivateEventSourceCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::DeactivateEventSource, REQUEST)

#define DeauthorizeConnectionAsync(...)  SubmitAsync(&CloudWatchEventsClient::DeauthorizeConnection, __VA_ARGS__)
#define DeauthorizeConnectionCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::DeauthorizeConnection, REQUEST)

#define DeleteApiDestinationAsync(...)  SubmitAsync(&CloudWatchEventsClient::DeleteApiDestination, __VA_ARGS__)
#define DeleteApiDestinationCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::DeleteApiDestination, REQUEST)

#define DeleteArchiveAsync(...)  SubmitAsync(&CloudWatchEventsClient::DeleteArchive, __VA_ARGS__)
#define DeleteArchiveCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::DeleteArchive, REQUEST)

#define DeleteConnectionAsync(...)  SubmitAsync(&CloudWatchEventsClient::DeleteConnection, __VA_ARGS__)
#define DeleteConnectionCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::DeleteConnection, REQUEST)

#define DeleteEventBusAsync(...)  SubmitAsync(&CloudWatchEventsClient::DeleteEventBus, __VA_ARGS__)
#define DeleteEventBusCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::DeleteEventBus, REQUEST)

#define DeletePartnerEventSourceAsync(...)  SubmitAsync(&CloudWatchEventsClient::DeletePartnerEventSource, __VA_ARGS__)
#define DeletePartnerEventSourceCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::DeletePartnerEventSource, REQUEST)

#define DeleteRuleAsync(...)  SubmitAsync(&CloudWatchEventsClient::DeleteRule, __VA_ARGS__)
#define DeleteRuleCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::DeleteRule, REQUEST)

#define DescribeApiDestinationAsync(...)  SubmitAsync(&CloudWatchEventsClient::DescribeApiDestination, __VA_ARGS__)
#define DescribeApiDestinationCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::DescribeApiDestination, REQUEST)

#define DescribeArchiveAsync(...)  SubmitAsync(&CloudWatchEventsClient::DescribeArchive, __VA_ARGS__)
#define DescribeArchiveCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::DescribeArchive, REQUEST)

#define DescribeConnectionAsync(...)  SubmitAsync(&CloudWatchEventsClient::DescribeConnection, __VA_ARGS__)
#define DescribeConnectionCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::DescribeConnection, REQUEST)

#define DescribeEventBusAsync(...)  SubmitAsync(&CloudWatchEventsClient::DescribeEventBus, __VA_ARGS__)
#define DescribeEventBusCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::DescribeEventBus, REQUEST)

#define DescribeEventSourceAsync(...)  SubmitAsync(&CloudWatchEventsClient::DescribeEventSource, __VA_ARGS__)
#define DescribeEventSourceCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::DescribeEventSource, REQUEST)

#define DescribePartnerEventSourceAsync(...)  SubmitAsync(&CloudWatchEventsClient::DescribePartnerEventSource, __VA_ARGS__)
#define DescribePartnerEventSourceCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::DescribePartnerEventSource, REQUEST)

#define DescribeReplayAsync(...)  SubmitAsync(&CloudWatchEventsClient::DescribeReplay, __VA_ARGS__)
#define DescribeReplayCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::DescribeReplay, REQUEST)

#define DescribeRuleAsync(...)  SubmitAsync(&CloudWatchEventsClient::DescribeRule, __VA_ARGS__)
#define DescribeRuleCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::DescribeRule, REQUEST)

#define DisableRuleAsync(...)  SubmitAsync(&CloudWatchEventsClient::DisableRule, __VA_ARGS__)
#define DisableRuleCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::DisableRule, REQUEST)

#define EnableRuleAsync(...)  SubmitAsync(&CloudWatchEventsClient::EnableRule, __VA_ARGS__)
#define EnableRuleCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::EnableRule, REQUEST)

#define ListApiDestinationsAsync(...)  SubmitAsync(&CloudWatchEventsClient::ListApiDestinations, __VA_ARGS__)
#define ListApiDestinationsCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::ListApiDestinations, REQUEST)

#define ListArchivesAsync(...)  SubmitAsync(&CloudWatchEventsClient::ListArchives, __VA_ARGS__)
#define ListArchivesCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::ListArchives, REQUEST)

#define ListConnectionsAsync(...)  SubmitAsync(&CloudWatchEventsClient::ListConnections, __VA_ARGS__)
#define ListConnectionsCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::ListConnections, REQUEST)

#define ListEventBusesAsync(...)  SubmitAsync(&CloudWatchEventsClient::ListEventBuses, __VA_ARGS__)
#define ListEventBusesCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::ListEventBuses, REQUEST)

#define ListEventSourcesAsync(...)  SubmitAsync(&CloudWatchEventsClient::ListEventSources, __VA_ARGS__)
#define ListEventSourcesCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::ListEventSources, REQUEST)

#define ListPartnerEventSourceAccountsAsync(...)  SubmitAsync(&CloudWatchEventsClient::ListPartnerEventSourceAccounts, __VA_ARGS__)
#define ListPartnerEventSourceAccountsCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::ListPartnerEventSourceAccounts, REQUEST)

#define ListPartnerEventSourcesAsync(...)  SubmitAsync(&CloudWatchEventsClient::ListPartnerEventSources, __VA_ARGS__)
#define ListPartnerEventSourcesCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::ListPartnerEventSources, REQUEST)

#define ListReplaysAsync(...)  SubmitAsync(&CloudWatchEventsClient::ListReplays, __VA_ARGS__)
#define ListReplaysCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::ListReplays, REQUEST)

#define ListRuleNamesByTargetAsync(...)  SubmitAsync(&CloudWatchEventsClient::ListRuleNamesByTarget, __VA_ARGS__)
#define ListRuleNamesByTargetCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::ListRuleNamesByTarget, REQUEST)

#define ListRulesAsync(...)  SubmitAsync(&CloudWatchEventsClient::ListRules, __VA_ARGS__)
#define ListRulesCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::ListRules, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&CloudWatchEventsClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::ListTagsForResource, REQUEST)

#define ListTargetsByRuleAsync(...)  SubmitAsync(&CloudWatchEventsClient::ListTargetsByRule, __VA_ARGS__)
#define ListTargetsByRuleCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::ListTargetsByRule, REQUEST)

#define PutEventsAsync(...)  SubmitAsync(&CloudWatchEventsClient::PutEvents, __VA_ARGS__)
#define PutEventsCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::PutEvents, REQUEST)

#define PutPartnerEventsAsync(...)  SubmitAsync(&CloudWatchEventsClient::PutPartnerEvents, __VA_ARGS__)
#define PutPartnerEventsCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::PutPartnerEvents, REQUEST)

#define PutPermissionAsync(...)  SubmitAsync(&CloudWatchEventsClient::PutPermission, __VA_ARGS__)
#define PutPermissionCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::PutPermission, REQUEST)

#define PutRuleAsync(...)  SubmitAsync(&CloudWatchEventsClient::PutRule, __VA_ARGS__)
#define PutRuleCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::PutRule, REQUEST)

#define PutTargetsAsync(...)  SubmitAsync(&CloudWatchEventsClient::PutTargets, __VA_ARGS__)
#define PutTargetsCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::PutTargets, REQUEST)

#define RemovePermissionAsync(...)  SubmitAsync(&CloudWatchEventsClient::RemovePermission, __VA_ARGS__)
#define RemovePermissionCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::RemovePermission, REQUEST)

#define RemoveTargetsAsync(...)  SubmitAsync(&CloudWatchEventsClient::RemoveTargets, __VA_ARGS__)
#define RemoveTargetsCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::RemoveTargets, REQUEST)

#define StartReplayAsync(...)  SubmitAsync(&CloudWatchEventsClient::StartReplay, __VA_ARGS__)
#define StartReplayCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::StartReplay, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&CloudWatchEventsClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::TagResource, REQUEST)

#define TestEventPatternAsync(...)  SubmitAsync(&CloudWatchEventsClient::TestEventPattern, __VA_ARGS__)
#define TestEventPatternCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::TestEventPattern, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&CloudWatchEventsClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::UntagResource, REQUEST)

#define UpdateApiDestinationAsync(...)  SubmitAsync(&CloudWatchEventsClient::UpdateApiDestination, __VA_ARGS__)
#define UpdateApiDestinationCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::UpdateApiDestination, REQUEST)

#define UpdateArchiveAsync(...)  SubmitAsync(&CloudWatchEventsClient::UpdateArchive, __VA_ARGS__)
#define UpdateArchiveCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::UpdateArchive, REQUEST)

#define UpdateConnectionAsync(...)  SubmitAsync(&CloudWatchEventsClient::UpdateConnection, __VA_ARGS__)
#define UpdateConnectionCallable(REQUEST)  SubmitCallable(&CloudWatchEventsClient::UpdateConnection, REQUEST)

