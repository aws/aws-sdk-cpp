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
  enum class StreamStatus
  {
    NOT_SET,
    ENABLING,
    ENABLED,
    DISABLING,
    DISABLED
  };

namespace StreamStatusMapper
{
AWS_DYNAMODBSTREAMS_API StreamStatus GetStreamStatusForName(const Aws::String& name);

AWS_DYNAMODBSTREAMS_API Aws::String GetNameForStreamStatus(StreamStatus value);
} // namespace StreamStatusMapper
} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
