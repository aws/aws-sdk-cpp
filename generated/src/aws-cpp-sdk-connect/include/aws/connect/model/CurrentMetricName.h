/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  enum class CurrentMetricName
  {
    NOT_SET,
    AGENTS_ONLINE,
    AGENTS_AVAILABLE,
    AGENTS_ON_CALL,
    AGENTS_NON_PRODUCTIVE,
    AGENTS_AFTER_CONTACT_WORK,
    AGENTS_ERROR,
    AGENTS_STAFFED,
    CONTACTS_IN_QUEUE,
    OLDEST_CONTACT_AGE,
    CONTACTS_SCHEDULED,
    AGENTS_ON_CONTACT,
    SLOTS_ACTIVE,
    SLOTS_AVAILABLE
  };

namespace CurrentMetricNameMapper
{
AWS_CONNECT_API CurrentMetricName GetCurrentMetricNameForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForCurrentMetricName(CurrentMetricName value);
} // namespace CurrentMetricNameMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
