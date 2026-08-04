/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>

namespace Aws {
namespace DynamoDB {
namespace Model {
enum class SearchSchemaElementType { NOT_SET, HASH, INLINE_FILTER };

namespace SearchSchemaElementTypeMapper {
AWS_DYNAMODB_API SearchSchemaElementType GetSearchSchemaElementTypeForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForSearchSchemaElementType(SearchSchemaElementType value);
}  // namespace SearchSchemaElementTypeMapper
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
