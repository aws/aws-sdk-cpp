/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAF
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
AWS_WAF_API WafOverrideActionType GetWafOverrideActionTypeForName(const Aws::String& name);

AWS_WAF_API Aws::String GetNameForWafOverrideActionType(WafOverrideActionType value);
} // namespace WafOverrideActionTypeMapper
} // namespace Model
} // namespace WAF
} // namespace Aws
