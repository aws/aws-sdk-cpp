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
enum class BulkOperationInputFormat { NOT_SET, DYNAMODB_JSON, ION };

namespace BulkOperationInputFormatMapper {
AWS_DYNAMODB_API BulkOperationInputFormat GetBulkOperationInputFormatForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForBulkOperationInputFormat(BulkOperationInputFormat value);
}  // namespace BulkOperationInputFormatMapper
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
