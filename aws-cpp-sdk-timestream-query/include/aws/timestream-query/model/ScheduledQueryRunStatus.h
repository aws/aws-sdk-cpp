/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{
  enum class ScheduledQueryRunStatus
  {
    NOT_SET,
    AUTO_TRIGGER_SUCCESS,
    AUTO_TRIGGER_FAILURE,
    MANUAL_TRIGGER_SUCCESS,
    MANUAL_TRIGGER_FAILURE
  };

namespace ScheduledQueryRunStatusMapper
{
AWS_TIMESTREAMQUERY_API ScheduledQueryRunStatus GetScheduledQueryRunStatusForName(const Aws::String& name);

AWS_TIMESTREAMQUERY_API Aws::String GetNameForScheduledQueryRunStatus(ScheduledQueryRunStatus value);
} // namespace ScheduledQueryRunStatusMapper
} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
