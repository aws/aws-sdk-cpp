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
  enum class ShardFilterType
  {
    NOT_SET,
    CHILD_SHARDS
  };

namespace ShardFilterTypeMapper
{
AWS_DYNAMODBSTREAMS_API ShardFilterType GetShardFilterTypeForName(const Aws::String& name);

AWS_DYNAMODBSTREAMS_API Aws::String GetNameForShardFilterType(ShardFilterType value);
} // namespace ShardFilterTypeMapper
} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
