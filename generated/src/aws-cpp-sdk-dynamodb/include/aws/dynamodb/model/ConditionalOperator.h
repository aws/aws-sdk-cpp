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
  enum class ConditionalOperator
  {
    NOT_SET,
    AND,
    OR
  };

namespace ConditionalOperatorMapper
{
AWS_DYNAMODB_API ConditionalOperator GetConditionalOperatorForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForConditionalOperator(ConditionalOperator value);
} // namespace ConditionalOperatorMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
