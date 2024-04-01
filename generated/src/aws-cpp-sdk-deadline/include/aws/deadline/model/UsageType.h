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
  enum class UsageType
  {
    NOT_SET,
    COMPUTE,
    LICENSE
  };

namespace UsageTypeMapper
{
AWS_DEADLINE_API UsageType GetUsageTypeForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForUsageType(UsageType value);
} // namespace UsageTypeMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
