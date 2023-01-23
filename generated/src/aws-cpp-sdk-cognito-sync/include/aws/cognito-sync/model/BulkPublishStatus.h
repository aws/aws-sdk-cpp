/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CognitoSync
{
namespace Model
{
  enum class BulkPublishStatus
  {
    NOT_SET,
    NOT_STARTED,
    IN_PROGRESS,
    FAILED,
    SUCCEEDED
  };

namespace BulkPublishStatusMapper
{
AWS_COGNITOSYNC_API BulkPublishStatus GetBulkPublishStatusForName(const Aws::String& name);

AWS_COGNITOSYNC_API Aws::String GetNameForBulkPublishStatus(BulkPublishStatus value);
} // namespace BulkPublishStatusMapper
} // namespace Model
} // namespace CognitoSync
} // namespace Aws
