/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class DataTableLockLevel { NOT_SET, NONE, DATA_TABLE, PRIMARY_VALUE, ATTRIBUTE, VALUE };

namespace DataTableLockLevelMapper {
AWS_CONNECT_API DataTableLockLevel GetDataTableLockLevelForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForDataTableLockLevel(DataTableLockLevel value);
}  // namespace DataTableLockLevelMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
