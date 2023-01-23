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
  enum class ShardIteratorType
  {
    NOT_SET,
    TRIM_HORIZON,
    LATEST,
    AT_SEQUENCE_NUMBER,
    AFTER_SEQUENCE_NUMBER
  };

namespace ShardIteratorTypeMapper
{
AWS_DYNAMODBSTREAMS_API ShardIteratorType GetShardIteratorTypeForName(const Aws::String& name);

AWS_DYNAMODBSTREAMS_API Aws::String GetNameForShardIteratorType(ShardIteratorType value);
} // namespace ShardIteratorTypeMapper
} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
