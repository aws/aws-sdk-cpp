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
  enum class PointInTimeRecoveryStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace PointInTimeRecoveryStatusMapper
{
AWS_DYNAMODB_API PointInTimeRecoveryStatus GetPointInTimeRecoveryStatusForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForPointInTimeRecoveryStatus(PointInTimeRecoveryStatus value);
} // namespace PointInTimeRecoveryStatusMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
