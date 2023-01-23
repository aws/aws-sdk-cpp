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
  enum class StreamViewType
  {
    NOT_SET,
    NEW_IMAGE,
    OLD_IMAGE,
    NEW_AND_OLD_IMAGES,
    KEYS_ONLY
  };

namespace StreamViewTypeMapper
{
AWS_DYNAMODBSTREAMS_API StreamViewType GetStreamViewTypeForName(const Aws::String& name);

AWS_DYNAMODBSTREAMS_API Aws::String GetNameForStreamViewType(StreamViewType value);
} // namespace StreamViewTypeMapper
} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
