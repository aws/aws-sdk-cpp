/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{
  enum class EntityRejectionErrorType
  {
    NOT_SET,
    InvalidEntity,
    InvalidTypeValue,
    InvalidKeyAttributes,
    InvalidAttributes,
    EntitySizeTooLarge,
    UnsupportedLogGroupType,
    MissingRequiredFields
  };

namespace EntityRejectionErrorTypeMapper
{
AWS_CLOUDWATCHLOGS_API EntityRejectionErrorType GetEntityRejectionErrorTypeForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForEntityRejectionErrorType(EntityRejectionErrorType value);
} // namespace EntityRejectionErrorTypeMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
