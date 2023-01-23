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
  enum class DestinationStatus
  {
    NOT_SET,
    ENABLING,
    ACTIVE,
    DISABLING,
    DISABLED,
    ENABLE_FAILED
  };

namespace DestinationStatusMapper
{
AWS_DYNAMODB_API DestinationStatus GetDestinationStatusForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForDestinationStatus(DestinationStatus value);
} // namespace DestinationStatusMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
