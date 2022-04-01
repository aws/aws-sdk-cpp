/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RecycleBin
{
namespace Model
{
  enum class RuleStatus
  {
    NOT_SET,
    pending,
    available
  };

namespace RuleStatusMapper
{
AWS_RECYCLEBIN_API RuleStatus GetRuleStatusForName(const Aws::String& name);

AWS_RECYCLEBIN_API Aws::String GetNameForRuleStatus(RuleStatus value);
} // namespace RuleStatusMapper
} // namespace Model
} // namespace RecycleBin
} // namespace Aws
