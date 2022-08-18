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
  enum class InputCompressionType
  {
    NOT_SET,
    GZIP,
    ZSTD,
    NONE
  };

namespace InputCompressionTypeMapper
{
AWS_DYNAMODB_API InputCompressionType GetInputCompressionTypeForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForInputCompressionType(InputCompressionType value);
} // namespace InputCompressionTypeMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
