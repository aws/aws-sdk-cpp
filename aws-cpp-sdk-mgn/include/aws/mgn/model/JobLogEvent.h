/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mgn
{
namespace Model
{
  enum class JobLogEvent
  {
    NOT_SET,
    JOB_START,
    SERVER_SKIPPED,
    CLEANUP_START,
    CLEANUP_END,
    CLEANUP_FAIL,
    SNAPSHOT_START,
    SNAPSHOT_END,
    SNAPSHOT_FAIL,
    USING_PREVIOUS_SNAPSHOT,
    CONVERSION_START,
    CONVERSION_END,
    CONVERSION_FAIL,
    LAUNCH_START,
    LAUNCH_FAILED,
    JOB_CANCEL,
    JOB_END
  };

namespace JobLogEventMapper
{
AWS_MGN_API JobLogEvent GetJobLogEventForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForJobLogEvent(JobLogEvent value);
} // namespace JobLogEventMapper
} // namespace Model
} // namespace mgn
} // namespace Aws
