/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{
  enum class QueryStatus
  {
    NOT_SET,
    QUEUED,
    RUNNING,
    FINISHED,
    FAILED,
    CANCELLED,
    TIMED_OUT
  };

namespace QueryStatusMapper
{
AWS_CLOUDTRAIL_API QueryStatus GetQueryStatusForName(const Aws::String& name);

AWS_CLOUDTRAIL_API Aws::String GetNameForQueryStatus(QueryStatus value);
} // namespace QueryStatusMapper
} // namespace Model
} // namespace CloudTrail
} // namespace Aws
