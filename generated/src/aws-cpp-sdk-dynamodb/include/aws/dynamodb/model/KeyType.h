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
  enum class KeyType
  {
    NOT_SET,
    HASH,
    RANGE
  };

namespace KeyTypeMapper
{
AWS_DYNAMODB_API KeyType GetKeyTypeForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForKeyType(KeyType value);
} // namespace KeyTypeMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
