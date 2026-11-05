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
enum class BulkOperationPerformanceTier { NOT_SET, STANDARD, ACCELERATED };

namespace BulkOperationPerformanceTierMapper {
AWS_DYNAMODB_API BulkOperationPerformanceTier GetBulkOperationPerformanceTierForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForBulkOperationPerformanceTier(BulkOperationPerformanceTier value);
}  // namespace BulkOperationPerformanceTierMapper
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
