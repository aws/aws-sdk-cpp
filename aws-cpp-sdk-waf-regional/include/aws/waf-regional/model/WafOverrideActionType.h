/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{
  enum class WafOverrideActionType
  {
    NOT_SET,
    NONE,
    COUNT
  };

namespace WafOverrideActionTypeMapper
{
AWS_WAFREGIONAL_API WafOverrideActionType GetWafOverrideActionTypeForName(const Aws::String& name);

AWS_WAFREGIONAL_API Aws::String GetNameForWafOverrideActionType(WafOverrideActionType value);
} // namespace WafOverrideActionTypeMapper
} // namespace Model
} // namespace WAFRegional
} // namespace Aws
