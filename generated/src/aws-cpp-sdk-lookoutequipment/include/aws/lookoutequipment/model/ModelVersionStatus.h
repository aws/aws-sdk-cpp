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
  enum class ModelVersionStatus
  {
    NOT_SET,
    IN_PROGRESS,
    SUCCESS,
    FAILED,
    IMPORT_IN_PROGRESS,
    CANCELED
  };

namespace ModelVersionStatusMapper
{
AWS_LOOKOUTEQUIPMENT_API ModelVersionStatus GetModelVersionStatusForName(const Aws::String& name);

AWS_LOOKOUTEQUIPMENT_API Aws::String GetNameForModelVersionStatus(ModelVersionStatus value);
} // namespace ModelVersionStatusMapper
} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
