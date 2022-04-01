/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAFV2
{
namespace Model
{
  enum class MapMatchScope
  {
    NOT_SET,
    ALL,
    KEY,
    VALUE
  };

namespace MapMatchScopeMapper
{
AWS_WAFV2_API MapMatchScope GetMapMatchScopeForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForMapMatchScope(MapMatchScope value);
} // namespace MapMatchScopeMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
