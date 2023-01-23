/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECR
{
namespace Model
{
  enum class ScanStatus
  {
    NOT_SET,
    IN_PROGRESS,
    COMPLETE,
    FAILED,
    UNSUPPORTED_IMAGE,
    ACTIVE,
    PENDING,
    SCAN_ELIGIBILITY_EXPIRED,
    FINDINGS_UNAVAILABLE
  };

namespace ScanStatusMapper
{
AWS_ECR_API ScanStatus GetScanStatusForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForScanStatus(ScanStatus value);
} // namespace ScanStatusMapper
} // namespace Model
} // namespace ECR
} // namespace Aws
