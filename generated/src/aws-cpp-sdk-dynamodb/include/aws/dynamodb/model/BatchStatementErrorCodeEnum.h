/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{
  enum class BatchStatementErrorCodeEnum
  {
    NOT_SET,
    ConditionalCheckFailed,
    ItemCollectionSizeLimitExceeded,
    RequestLimitExceeded,
    ValidationError,
    ProvisionedThroughputExceeded,
    TransactionConflict,
    ThrottlingError,
    InternalServerError,
    ResourceNotFound,
    AccessDenied,
    DuplicateItem
  };

namespace BatchStatementErrorCodeEnumMapper
{
AWS_DYNAMODB_API BatchStatementErrorCodeEnum GetBatchStatementErrorCodeEnumForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForBatchStatementErrorCodeEnum(BatchStatementErrorCodeEnum value);
} // namespace BatchStatementErrorCodeEnumMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
