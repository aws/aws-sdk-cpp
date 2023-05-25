/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class EcrScanFrequency
  {
    NOT_SET,
    MANUAL,
    SCAN_ON_PUSH,
    CONTINUOUS_SCAN
  };

namespace EcrScanFrequencyMapper
{
AWS_INSPECTOR2_API EcrScanFrequency GetEcrScanFrequencyForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForEcrScanFrequency(EcrScanFrequency value);
} // namespace EcrScanFrequencyMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
