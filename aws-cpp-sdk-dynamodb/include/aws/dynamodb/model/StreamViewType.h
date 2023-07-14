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
AWS_DYNAMODB_API StreamViewType GetStreamViewTypeForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForStreamViewType(StreamViewType value);
} // namespace StreamViewTypeMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
