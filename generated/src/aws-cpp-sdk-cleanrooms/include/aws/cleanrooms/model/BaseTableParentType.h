/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CleanRooms {
namespace Model {
enum class BaseTableParentType { NOT_SET, DIRECT, INDIRECT };

namespace BaseTableParentTypeMapper {
AWS_CLEANROOMS_API BaseTableParentType GetBaseTableParentTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForBaseTableParentType(BaseTableParentType value);
}  // namespace BaseTableParentTypeMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
