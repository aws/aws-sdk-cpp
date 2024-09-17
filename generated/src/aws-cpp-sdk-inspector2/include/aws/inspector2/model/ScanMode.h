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
  enum class ScanMode
  {
    NOT_SET,
    EC2_SSM_AGENT_BASED,
    EC2_AGENTLESS
  };

namespace ScanModeMapper
{
AWS_INSPECTOR2_API ScanMode GetScanModeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForScanMode(ScanMode value);
} // namespace ScanModeMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
