/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{
  enum class ImportStatus
  {
    NOT_SET,
    INITIALIZING,
    IN_PROGRESS,
    FAILED,
    STOPPED,
    COMPLETED
  };

namespace ImportStatusMapper
{
AWS_CLOUDTRAIL_API ImportStatus GetImportStatusForName(const Aws::String& name);

AWS_CLOUDTRAIL_API Aws::String GetNameForImportStatus(ImportStatus value);
} // namespace ImportStatusMapper
} // namespace Model
} // namespace CloudTrail
} // namespace Aws
