/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class UsageType
  {
    NOT_SET,
    EC2_INSTANCE_HOURS,
    ECR_INITIAL_SCAN,
    ECR_RESCAN,
    LAMBDA_FUNCTION_HOURS
  };

namespace UsageTypeMapper
{
AWS_INSPECTOR2_API UsageType GetUsageTypeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForUsageType(UsageType value);
} // namespace UsageTypeMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
