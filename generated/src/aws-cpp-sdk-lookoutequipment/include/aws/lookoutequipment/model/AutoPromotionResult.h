/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{
  enum class AutoPromotionResult
  {
    NOT_SET,
    MODEL_PROMOTED,
    MODEL_NOT_PROMOTED,
    RETRAINING_INTERNAL_ERROR,
    RETRAINING_CUSTOMER_ERROR,
    RETRAINING_CANCELLED
  };

namespace AutoPromotionResultMapper
{
AWS_LOOKOUTEQUIPMENT_API AutoPromotionResult GetAutoPromotionResultForName(const Aws::String& name);

AWS_LOOKOUTEQUIPMENT_API Aws::String GetNameForAutoPromotionResult(AutoPromotionResult value);
} // namespace AutoPromotionResultMapper
} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
