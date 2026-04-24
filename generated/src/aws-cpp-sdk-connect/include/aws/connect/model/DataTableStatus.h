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
enum class DataTableStatus { NOT_SET, PUBLISHED };

namespace DataTableStatusMapper {
AWS_CONNECT_API DataTableStatus GetDataTableStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForDataTableStatus(DataTableStatus value);
}  // namespace DataTableStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
