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
enum class TableReferenceType { NOT_SET, GLUE, SNOWFLAKE, ATHENA, DATABRICKS };

namespace TableReferenceTypeMapper {
AWS_CLEANROOMS_API TableReferenceType GetTableReferenceTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForTableReferenceType(TableReferenceType value);
}  // namespace TableReferenceTypeMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
