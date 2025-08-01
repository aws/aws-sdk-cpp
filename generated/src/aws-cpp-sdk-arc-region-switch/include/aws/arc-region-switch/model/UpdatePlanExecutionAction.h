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
  enum class UpdatePlanExecutionAction
  {
    NOT_SET,
    switchToGraceful,
    switchToUngraceful,
    pause,
    resume
  };

namespace UpdatePlanExecutionActionMapper
{
AWS_ARCREGIONSWITCH_API UpdatePlanExecutionAction GetUpdatePlanExecutionActionForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForUpdatePlanExecutionAction(UpdatePlanExecutionAction value);
} // namespace UpdatePlanExecutionActionMapper
} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
