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
  enum class Select
  {
    NOT_SET,
    ALL_ATTRIBUTES,
    ALL_PROJECTED_ATTRIBUTES,
    SPECIFIC_ATTRIBUTES,
    COUNT
  };

namespace SelectMapper
{
AWS_DYNAMODB_API Select GetSelectForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForSelect(Select value);
} // namespace SelectMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
