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
enum class BulkOperationStatus { NOT_SET, IN_PROGRESS, COMPLETED, COMPLETED_WITH_ERRORS, CANCELLING, CANCELLED, FAILED };

namespace BulkOperationStatusMapper {
AWS_DYNAMODB_API BulkOperationStatus GetBulkOperationStatusForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForBulkOperationStatus(BulkOperationStatus value);
}  // namespace BulkOperationStatusMapper
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
