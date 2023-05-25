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
  enum class TimeToLiveStatus
  {
    NOT_SET,
    ENABLING,
    DISABLING,
    ENABLED,
    DISABLED
  };

namespace TimeToLiveStatusMapper
{
AWS_DYNAMODB_API TimeToLiveStatus GetTimeToLiveStatusForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForTimeToLiveStatus(TimeToLiveStatus value);
} // namespace TimeToLiveStatusMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
