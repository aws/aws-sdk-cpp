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
enum class DataTableAttributeValueType { NOT_SET, TEXT, NUMBER, BOOLEAN, TEXT_LIST, NUMBER_LIST };

namespace DataTableAttributeValueTypeMapper {
AWS_CONNECT_API DataTableAttributeValueType GetDataTableAttributeValueTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForDataTableAttributeValueType(DataTableAttributeValueType value);
}  // namespace DataTableAttributeValueTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
