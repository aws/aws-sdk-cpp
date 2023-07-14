/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DynamoDBStreams
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
AWS_DYNAMODBSTREAMS_API KeyType GetKeyTypeForName(const Aws::String& name);

AWS_DYNAMODBSTREAMS_API Aws::String GetNameForKeyType(KeyType value);
} // namespace KeyTypeMapper
} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
