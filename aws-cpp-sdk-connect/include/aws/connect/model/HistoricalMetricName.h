/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class HistoricalMetricName
  {
    NOT_SET,
    CONTACTS_QUEUED,
    CONTACTS_HANDLED,
    CONTACTS_ABANDONED,
    CONTACTS_CONSULTED,
    CONTACTS_AGENT_HUNG_UP_FIRST,
    CONTACTS_HANDLED_INCOMING,
    CONTACTS_HANDLED_OUTBOUND,
    CONTACTS_HOLD_ABANDONS,
    CONTACTS_TRANSFERRED_IN,
    CONTACTS_TRANSFERRED_OUT,
    CONTACTS_TRANSFERRED_IN_FROM_QUEUE,
    CONTACTS_TRANSFERRED_OUT_FROM_QUEUE,
    CONTACTS_MISSED,
    CALLBACK_CONTACTS_HANDLED,
    API_CONTACTS_HANDLED,
    OCCUPANCY,
    HANDLE_TIME,
    AFTER_CONTACT_WORK_TIME,
    QUEUED_TIME,
    ABANDON_TIME,
    QUEUE_ANSWER_TIME,
    HOLD_TIME,
    INTERACTION_TIME,
    INTERACTION_AND_HOLD_TIME,
    SERVICE_LEVEL
  };

namespace HistoricalMetricNameMapper
{
AWS_CONNECT_API HistoricalMetricName GetHistoricalMetricNameForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForHistoricalMetricName(HistoricalMetricName value);
} // namespace HistoricalMetricNameMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
