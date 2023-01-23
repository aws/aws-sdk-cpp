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
  enum class IndexStatus
  {
    NOT_SET,
    CREATING,
    UPDATING,
    DELETING,
    ACTIVE
  };

namespace IndexStatusMapper
{
AWS_DYNAMODB_API IndexStatus GetIndexStatusForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForIndexStatus(IndexStatus value);
} // namespace IndexStatusMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
