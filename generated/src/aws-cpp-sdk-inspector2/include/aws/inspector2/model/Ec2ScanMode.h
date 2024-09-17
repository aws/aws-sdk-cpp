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
  enum class Ec2ScanMode
  {
    NOT_SET,
    EC2_SSM_AGENT_BASED,
    EC2_HYBRID
  };

namespace Ec2ScanModeMapper
{
AWS_INSPECTOR2_API Ec2ScanMode GetEc2ScanModeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForEc2ScanMode(Ec2ScanMode value);
} // namespace Ec2ScanModeMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
