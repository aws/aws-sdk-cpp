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
  enum class ReturnValue
  {
    NOT_SET,
    NONE,
    ALL_OLD,
    UPDATED_OLD,
    ALL_NEW,
    UPDATED_NEW
  };

namespace ReturnValueMapper
{
AWS_DYNAMODB_API ReturnValue GetReturnValueForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForReturnValue(ReturnValue value);
} // namespace ReturnValueMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
