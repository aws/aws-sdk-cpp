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
  enum class CisRuleStatus
  {
    NOT_SET,
    FAILED,
    PASSED,
    NOT_EVALUATED,
    INFORMATIONAL,
    UNKNOWN,
    NOT_APPLICABLE,
    ERROR_
  };

namespace CisRuleStatusMapper
{
AWS_INSPECTOR2_API CisRuleStatus GetCisRuleStatusForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForCisRuleStatus(CisRuleStatus value);
} // namespace CisRuleStatusMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
