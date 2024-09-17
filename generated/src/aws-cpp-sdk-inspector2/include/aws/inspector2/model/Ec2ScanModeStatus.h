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
  enum class Ec2ScanModeStatus
  {
    NOT_SET,
    SUCCESS,
    PENDING
  };

namespace Ec2ScanModeStatusMapper
{
AWS_INSPECTOR2_API Ec2ScanModeStatus GetEc2ScanModeStatusForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForEc2ScanModeStatus(Ec2ScanModeStatus value);
} // namespace Ec2ScanModeStatusMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
