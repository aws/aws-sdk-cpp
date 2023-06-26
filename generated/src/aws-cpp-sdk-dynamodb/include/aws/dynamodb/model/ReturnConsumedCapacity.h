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
  enum class ReturnConsumedCapacity
  {
    NOT_SET,
    INDEXES,
    TOTAL,
    NONE
  };

namespace ReturnConsumedCapacityMapper
{
AWS_DYNAMODB_API ReturnConsumedCapacity GetReturnConsumedCapacityForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForReturnConsumedCapacity(ReturnConsumedCapacity value);
} // namespace ReturnConsumedCapacityMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
