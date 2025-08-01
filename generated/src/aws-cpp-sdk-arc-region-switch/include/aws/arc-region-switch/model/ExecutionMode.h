/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{
  enum class ExecutionMode
  {
    NOT_SET,
    graceful,
    ungraceful
  };

namespace ExecutionModeMapper
{
AWS_ARCREGIONSWITCH_API ExecutionMode GetExecutionModeForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForExecutionMode(ExecutionMode value);
} // namespace ExecutionModeMapper
} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
