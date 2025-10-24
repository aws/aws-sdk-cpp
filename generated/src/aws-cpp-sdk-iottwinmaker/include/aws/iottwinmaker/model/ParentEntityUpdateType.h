/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>

namespace Aws {
namespace IoTTwinMaker {
namespace Model {
enum class ParentEntityUpdateType { NOT_SET, UPDATE, DELETE_ };

namespace ParentEntityUpdateTypeMapper {
AWS_IOTTWINMAKER_API ParentEntityUpdateType GetParentEntityUpdateTypeForName(const Aws::String& name);

AWS_IOTTWINMAKER_API Aws::String GetNameForParentEntityUpdateType(ParentEntityUpdateType value);
}  // namespace ParentEntityUpdateTypeMapper
}  // namespace Model
}  // namespace IoTTwinMaker
}  // namespace Aws
