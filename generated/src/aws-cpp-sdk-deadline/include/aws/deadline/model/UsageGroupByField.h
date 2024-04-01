/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace deadline
{
namespace Model
{
  enum class UsageGroupByField
  {
    NOT_SET,
    QUEUE_ID,
    FLEET_ID,
    JOB_ID,
    USER_ID,
    USAGE_TYPE,
    INSTANCE_TYPE,
    LICENSE_PRODUCT
  };

namespace UsageGroupByFieldMapper
{
AWS_DEADLINE_API UsageGroupByField GetUsageGroupByFieldForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForUsageGroupByField(UsageGroupByField value);
} // namespace UsageGroupByFieldMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
