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
  enum class ContinuousBackupsStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace ContinuousBackupsStatusMapper
{
AWS_DYNAMODB_API ContinuousBackupsStatus GetContinuousBackupsStatusForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForContinuousBackupsStatus(ContinuousBackupsStatus value);
} // namespace ContinuousBackupsStatusMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
