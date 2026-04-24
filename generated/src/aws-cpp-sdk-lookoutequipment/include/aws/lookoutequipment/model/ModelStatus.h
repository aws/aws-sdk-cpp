/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>

namespace Aws {
namespace LookoutEquipment {
namespace Model {
enum class ModelStatus { NOT_SET, IN_PROGRESS, SUCCESS, FAILED, IMPORT_IN_PROGRESS };

namespace ModelStatusMapper {
AWS_LOOKOUTEQUIPMENT_API ModelStatus GetModelStatusForName(const Aws::String& name);

AWS_LOOKOUTEQUIPMENT_API Aws::String GetNameForModelStatus(ModelStatus value);
}  // namespace ModelStatusMapper
}  // namespace Model
}  // namespace LookoutEquipment
}  // namespace Aws
