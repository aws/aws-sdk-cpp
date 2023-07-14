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
  enum class ReturnValuesOnConditionCheckFailure
  {
    NOT_SET,
    ALL_OLD,
    NONE
  };

namespace ReturnValuesOnConditionCheckFailureMapper
{
AWS_DYNAMODB_API ReturnValuesOnConditionCheckFailure GetReturnValuesOnConditionCheckFailureForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForReturnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure value);
} // namespace ReturnValuesOnConditionCheckFailureMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
