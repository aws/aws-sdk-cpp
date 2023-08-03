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
  enum class ModelVersionSourceType
  {
    NOT_SET,
    TRAINING,
    RETRAINING,
    IMPORT
  };

namespace ModelVersionSourceTypeMapper
{
AWS_LOOKOUTEQUIPMENT_API ModelVersionSourceType GetModelVersionSourceTypeForName(const Aws::String& name);

AWS_LOOKOUTEQUIPMENT_API Aws::String GetNameForModelVersionSourceType(ModelVersionSourceType value);
} // namespace ModelVersionSourceTypeMapper
} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
