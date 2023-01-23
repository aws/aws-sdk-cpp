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
  enum class ScalarAttributeType
  {
    NOT_SET,
    S,
    N,
    B
  };

namespace ScalarAttributeTypeMapper
{
AWS_DYNAMODB_API ScalarAttributeType GetScalarAttributeTypeForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForScalarAttributeType(ScalarAttributeType value);
} // namespace ScalarAttributeTypeMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
