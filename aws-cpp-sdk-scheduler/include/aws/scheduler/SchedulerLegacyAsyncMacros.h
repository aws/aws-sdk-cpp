/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateScheduleAsync(...)  SubmitAsync(&SchedulerClient::CreateSchedule, __VA_ARGS__)
#define CreateScheduleCallable(REQUEST)  SubmitCallable(&SchedulerClient::CreateSchedule, REQUEST)

#define CreateScheduleGroupAsync(...)  SubmitAsync(&SchedulerClient::CreateScheduleGroup, __VA_ARGS__)
#define CreateScheduleGroupCallable(REQUEST)  SubmitCallable(&SchedulerClient::CreateScheduleGroup, REQUEST)

#define DeleteScheduleAsync(...)  SubmitAsync(&SchedulerClient::DeleteSchedule, __VA_ARGS__)
#define DeleteScheduleCallable(REQUEST)  SubmitCallable(&SchedulerClient::DeleteSchedule, REQUEST)

#define DeleteScheduleGroupAsync(...)  SubmitAsync(&SchedulerClient::DeleteScheduleGroup, __VA_ARGS__)
#define DeleteScheduleGroupCallable(REQUEST)  SubmitCallable(&SchedulerClient::DeleteScheduleGroup, REQUEST)

#define GetScheduleAsync(...)  SubmitAsync(&SchedulerClient::GetSchedule, __VA_ARGS__)
#define GetScheduleCallable(REQUEST)  SubmitCallable(&SchedulerClient::GetSchedule, REQUEST)

#define GetScheduleGroupAsync(...)  SubmitAsync(&SchedulerClient::GetScheduleGroup, __VA_ARGS__)
#define GetScheduleGroupCallable(REQUEST)  SubmitCallable(&SchedulerClient::GetScheduleGroup, REQUEST)

#define ListScheduleGroupsAsync(...)  SubmitAsync(&SchedulerClient::ListScheduleGroups, __VA_ARGS__)
#define ListScheduleGroupsCallable(REQUEST)  SubmitCallable(&SchedulerClient::ListScheduleGroups, REQUEST)

#define ListSchedulesAsync(...)  SubmitAsync(&SchedulerClient::ListSchedules, __VA_ARGS__)
#define ListSchedulesCallable(REQUEST)  SubmitCallable(&SchedulerClient::ListSchedules, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&SchedulerClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&SchedulerClient::ListTagsForResource, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&SchedulerClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&SchedulerClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&SchedulerClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&SchedulerClient::UntagResource, REQUEST)

#define UpdateScheduleAsync(...)  SubmitAsync(&SchedulerClient::UpdateSchedule, __VA_ARGS__)
#define UpdateScheduleCallable(REQUEST)  SubmitCallable(&SchedulerClient::UpdateSchedule, REQUEST)

