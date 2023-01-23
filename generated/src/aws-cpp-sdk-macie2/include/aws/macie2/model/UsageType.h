/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class UsageType
  {
    NOT_SET,
    DATA_INVENTORY_EVALUATION,
    SENSITIVE_DATA_DISCOVERY,
    AUTOMATED_SENSITIVE_DATA_DISCOVERY,
    AUTOMATED_OBJECT_MONITORING
  };

namespace UsageTypeMapper
{
AWS_MACIE2_API UsageType GetUsageTypeForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForUsageType(UsageType value);
} // namespace UsageTypeMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
