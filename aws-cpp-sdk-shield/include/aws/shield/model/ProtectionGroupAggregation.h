/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Shield
{
namespace Model
{
  enum class ProtectionGroupAggregation
  {
    NOT_SET,
    SUM,
    MEAN,
    MAX
  };

namespace ProtectionGroupAggregationMapper
{
AWS_SHIELD_API ProtectionGroupAggregation GetProtectionGroupAggregationForName(const Aws::String& name);

AWS_SHIELD_API Aws::String GetNameForProtectionGroupAggregation(ProtectionGroupAggregation value);
} // namespace ProtectionGroupAggregationMapper
} // namespace Model
} // namespace Shield
} // namespace Aws
