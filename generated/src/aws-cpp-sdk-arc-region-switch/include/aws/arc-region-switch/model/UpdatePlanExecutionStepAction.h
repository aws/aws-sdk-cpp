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
  enum class UpdatePlanExecutionStepAction
  {
    NOT_SET,
    switchToUngraceful,
    skip
  };

namespace UpdatePlanExecutionStepActionMapper
{
AWS_ARCREGIONSWITCH_API UpdatePlanExecutionStepAction GetUpdatePlanExecutionStepActionForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForUpdatePlanExecutionStepAction(UpdatePlanExecutionStepAction value);
} // namespace UpdatePlanExecutionStepActionMapper
} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
