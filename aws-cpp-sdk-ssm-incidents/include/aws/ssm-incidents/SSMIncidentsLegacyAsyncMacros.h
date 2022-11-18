/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateReplicationSetAsync(...)  SubmitAsync(&SSMIncidentsClient::CreateReplicationSet, __VA_ARGS__)
#define CreateReplicationSetCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::CreateReplicationSet, REQUEST)

#define CreateResponsePlanAsync(...)  SubmitAsync(&SSMIncidentsClient::CreateResponsePlan, __VA_ARGS__)
#define CreateResponsePlanCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::CreateResponsePlan, REQUEST)

#define CreateTimelineEventAsync(...)  SubmitAsync(&SSMIncidentsClient::CreateTimelineEvent, __VA_ARGS__)
#define CreateTimelineEventCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::CreateTimelineEvent, REQUEST)

#define DeleteIncidentRecordAsync(...)  SubmitAsync(&SSMIncidentsClient::DeleteIncidentRecord, __VA_ARGS__)
#define DeleteIncidentRecordCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::DeleteIncidentRecord, REQUEST)

#define DeleteReplicationSetAsync(...)  SubmitAsync(&SSMIncidentsClient::DeleteReplicationSet, __VA_ARGS__)
#define DeleteReplicationSetCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::DeleteReplicationSet, REQUEST)

#define DeleteResourcePolicyAsync(...)  SubmitAsync(&SSMIncidentsClient::DeleteResourcePolicy, __VA_ARGS__)
#define DeleteResourcePolicyCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::DeleteResourcePolicy, REQUEST)

#define DeleteResponsePlanAsync(...)  SubmitAsync(&SSMIncidentsClient::DeleteResponsePlan, __VA_ARGS__)
#define DeleteResponsePlanCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::DeleteResponsePlan, REQUEST)

#define DeleteTimelineEventAsync(...)  SubmitAsync(&SSMIncidentsClient::DeleteTimelineEvent, __VA_ARGS__)
#define DeleteTimelineEventCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::DeleteTimelineEvent, REQUEST)

#define GetIncidentRecordAsync(...)  SubmitAsync(&SSMIncidentsClient::GetIncidentRecord, __VA_ARGS__)
#define GetIncidentRecordCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::GetIncidentRecord, REQUEST)

#define GetReplicationSetAsync(...)  SubmitAsync(&SSMIncidentsClient::GetReplicationSet, __VA_ARGS__)
#define GetReplicationSetCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::GetReplicationSet, REQUEST)

#define GetResourcePoliciesAsync(...)  SubmitAsync(&SSMIncidentsClient::GetResourcePolicies, __VA_ARGS__)
#define GetResourcePoliciesCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::GetResourcePolicies, REQUEST)

#define GetResponsePlanAsync(...)  SubmitAsync(&SSMIncidentsClient::GetResponsePlan, __VA_ARGS__)
#define GetResponsePlanCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::GetResponsePlan, REQUEST)

#define GetTimelineEventAsync(...)  SubmitAsync(&SSMIncidentsClient::GetTimelineEvent, __VA_ARGS__)
#define GetTimelineEventCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::GetTimelineEvent, REQUEST)

#define ListIncidentRecordsAsync(...)  SubmitAsync(&SSMIncidentsClient::ListIncidentRecords, __VA_ARGS__)
#define ListIncidentRecordsCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::ListIncidentRecords, REQUEST)

#define ListRelatedItemsAsync(...)  SubmitAsync(&SSMIncidentsClient::ListRelatedItems, __VA_ARGS__)
#define ListRelatedItemsCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::ListRelatedItems, REQUEST)

#define ListReplicationSetsAsync(...)  SubmitAsync(&SSMIncidentsClient::ListReplicationSets, __VA_ARGS__)
#define ListReplicationSetsCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::ListReplicationSets, REQUEST)

#define ListResponsePlansAsync(...)  SubmitAsync(&SSMIncidentsClient::ListResponsePlans, __VA_ARGS__)
#define ListResponsePlansCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::ListResponsePlans, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&SSMIncidentsClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::ListTagsForResource, REQUEST)

#define ListTimelineEventsAsync(...)  SubmitAsync(&SSMIncidentsClient::ListTimelineEvents, __VA_ARGS__)
#define ListTimelineEventsCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::ListTimelineEvents, REQUEST)

#define PutResourcePolicyAsync(...)  SubmitAsync(&SSMIncidentsClient::PutResourcePolicy, __VA_ARGS__)
#define PutResourcePolicyCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::PutResourcePolicy, REQUEST)

#define StartIncidentAsync(...)  SubmitAsync(&SSMIncidentsClient::StartIncident, __VA_ARGS__)
#define StartIncidentCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::StartIncident, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&SSMIncidentsClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&SSMIncidentsClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::UntagResource, REQUEST)

#define UpdateDeletionProtectionAsync(...)  SubmitAsync(&SSMIncidentsClient::UpdateDeletionProtection, __VA_ARGS__)
#define UpdateDeletionProtectionCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::UpdateDeletionProtection, REQUEST)

#define UpdateIncidentRecordAsync(...)  SubmitAsync(&SSMIncidentsClient::UpdateIncidentRecord, __VA_ARGS__)
#define UpdateIncidentRecordCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::UpdateIncidentRecord, REQUEST)

#define UpdateRelatedItemsAsync(...)  SubmitAsync(&SSMIncidentsClient::UpdateRelatedItems, __VA_ARGS__)
#define UpdateRelatedItemsCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::UpdateRelatedItems, REQUEST)

#define UpdateReplicationSetAsync(...)  SubmitAsync(&SSMIncidentsClient::UpdateReplicationSet, __VA_ARGS__)
#define UpdateReplicationSetCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::UpdateReplicationSet, REQUEST)

#define UpdateResponsePlanAsync(...)  SubmitAsync(&SSMIncidentsClient::UpdateResponsePlan, __VA_ARGS__)
#define UpdateResponsePlanCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::UpdateResponsePlan, REQUEST)

#define UpdateTimelineEventAsync(...)  SubmitAsync(&SSMIncidentsClient::UpdateTimelineEvent, __VA_ARGS__)
#define UpdateTimelineEventCallable(REQUEST)  SubmitCallable(&SSMIncidentsClient::UpdateTimelineEvent, REQUEST)

