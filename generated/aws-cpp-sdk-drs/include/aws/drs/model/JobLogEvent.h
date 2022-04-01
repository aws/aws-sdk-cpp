﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace drs
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
    USING_PREVIOUS_SNAPSHOT_FAILED,
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
AWS_DRS_API JobLogEvent GetJobLogEventForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForJobLogEvent(JobLogEvent value);
} // namespace JobLogEventMapper
} // namespace Model
} // namespace drs
} // namespace Aws
