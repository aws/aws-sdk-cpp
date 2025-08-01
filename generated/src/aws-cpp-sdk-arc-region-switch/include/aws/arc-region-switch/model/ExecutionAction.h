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
  enum class ExecutionAction
  {
    NOT_SET,
    activate,
    deactivate
  };

namespace ExecutionActionMapper
{
AWS_ARCREGIONSWITCH_API ExecutionAction GetExecutionActionForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForExecutionAction(ExecutionAction value);
} // namespace ExecutionActionMapper
} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
