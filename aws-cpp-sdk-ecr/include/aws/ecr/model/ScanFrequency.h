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
  enum class ScanFrequency
  {
    NOT_SET,
    SCAN_ON_PUSH,
    CONTINUOUS_SCAN,
    MANUAL
  };

namespace ScanFrequencyMapper
{
AWS_ECR_API ScanFrequency GetScanFrequencyForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForScanFrequency(ScanFrequency value);
} // namespace ScanFrequencyMapper
} // namespace Model
} // namespace ECR
} // namespace Aws
