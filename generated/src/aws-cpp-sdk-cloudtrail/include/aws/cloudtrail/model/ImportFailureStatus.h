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
  enum class ImportFailureStatus
  {
    NOT_SET,
    FAILED,
    RETRY,
    SUCCEEDED
  };

namespace ImportFailureStatusMapper
{
AWS_CLOUDTRAIL_API ImportFailureStatus GetImportFailureStatusForName(const Aws::String& name);

AWS_CLOUDTRAIL_API Aws::String GetNameForImportFailureStatus(ImportFailureStatus value);
} // namespace ImportFailureStatusMapper
} // namespace Model
} // namespace CloudTrail
} // namespace Aws
