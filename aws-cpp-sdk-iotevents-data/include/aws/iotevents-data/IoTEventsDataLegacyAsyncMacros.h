/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchAcknowledgeAlarmAsync(...)  SubmitAsync(&IoTEventsDataClient::BatchAcknowledgeAlarm, __VA_ARGS__)
#define BatchAcknowledgeAlarmCallable(REQUEST)  SubmitCallable(&IoTEventsDataClient::BatchAcknowledgeAlarm, REQUEST)

#define BatchDeleteDetectorAsync(...)  SubmitAsync(&IoTEventsDataClient::BatchDeleteDetector, __VA_ARGS__)
#define BatchDeleteDetectorCallable(REQUEST)  SubmitCallable(&IoTEventsDataClient::BatchDeleteDetector, REQUEST)

#define BatchDisableAlarmAsync(...)  SubmitAsync(&IoTEventsDataClient::BatchDisableAlarm, __VA_ARGS__)
#define BatchDisableAlarmCallable(REQUEST)  SubmitCallable(&IoTEventsDataClient::BatchDisableAlarm, REQUEST)

#define BatchEnableAlarmAsync(...)  SubmitAsync(&IoTEventsDataClient::BatchEnableAlarm, __VA_ARGS__)
#define BatchEnableAlarmCallable(REQUEST)  SubmitCallable(&IoTEventsDataClient::BatchEnableAlarm, REQUEST)

#define BatchPutMessageAsync(...)  SubmitAsync(&IoTEventsDataClient::BatchPutMessage, __VA_ARGS__)
#define BatchPutMessageCallable(REQUEST)  SubmitCallable(&IoTEventsDataClient::BatchPutMessage, REQUEST)

#define BatchResetAlarmAsync(...)  SubmitAsync(&IoTEventsDataClient::BatchResetAlarm, __VA_ARGS__)
#define BatchResetAlarmCallable(REQUEST)  SubmitCallable(&IoTEventsDataClient::BatchResetAlarm, REQUEST)

#define BatchSnoozeAlarmAsync(...)  SubmitAsync(&IoTEventsDataClient::BatchSnoozeAlarm, __VA_ARGS__)
#define BatchSnoozeAlarmCallable(REQUEST)  SubmitCallable(&IoTEventsDataClient::BatchSnoozeAlarm, REQUEST)

#define BatchUpdateDetectorAsync(...)  SubmitAsync(&IoTEventsDataClient::BatchUpdateDetector, __VA_ARGS__)
#define BatchUpdateDetectorCallable(REQUEST)  SubmitCallable(&IoTEventsDataClient::BatchUpdateDetector, REQUEST)

#define DescribeAlarmAsync(...)  SubmitAsync(&IoTEventsDataClient::DescribeAlarm, __VA_ARGS__)
#define DescribeAlarmCallable(REQUEST)  SubmitCallable(&IoTEventsDataClient::DescribeAlarm, REQUEST)

#define DescribeDetectorAsync(...)  SubmitAsync(&IoTEventsDataClient::DescribeDetector, __VA_ARGS__)
#define DescribeDetectorCallable(REQUEST)  SubmitCallable(&IoTEventsDataClient::DescribeDetector, REQUEST)

#define ListAlarmsAsync(...)  SubmitAsync(&IoTEventsDataClient::ListAlarms, __VA_ARGS__)
#define ListAlarmsCallable(REQUEST)  SubmitCallable(&IoTEventsDataClient::ListAlarms, REQUEST)

#define ListDetectorsAsync(...)  SubmitAsync(&IoTEventsDataClient::ListDetectors, __VA_ARGS__)
#define ListDetectorsCallable(REQUEST)  SubmitCallable(&IoTEventsDataClient::ListDetectors, REQUEST)

