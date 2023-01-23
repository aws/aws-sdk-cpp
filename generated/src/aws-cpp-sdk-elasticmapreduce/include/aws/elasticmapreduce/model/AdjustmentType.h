/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class AdjustmentType
  {
    NOT_SET,
    CHANGE_IN_CAPACITY,
    PERCENT_CHANGE_IN_CAPACITY,
    EXACT_CAPACITY
  };

namespace AdjustmentTypeMapper
{
AWS_EMR_API AdjustmentType GetAdjustmentTypeForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForAdjustmentType(AdjustmentType value);
} // namespace AdjustmentTypeMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
