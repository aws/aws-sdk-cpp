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
  enum class BodyParsingFallbackBehavior
  {
    NOT_SET,
    MATCH,
    NO_MATCH,
    EVALUATE_AS_STRING
  };

namespace BodyParsingFallbackBehaviorMapper
{
AWS_WAFV2_API BodyParsingFallbackBehavior GetBodyParsingFallbackBehaviorForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForBodyParsingFallbackBehavior(BodyParsingFallbackBehavior value);
} // namespace BodyParsingFallbackBehaviorMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
