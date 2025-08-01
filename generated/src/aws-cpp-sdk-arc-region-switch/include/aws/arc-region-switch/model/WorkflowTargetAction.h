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
  enum class WorkflowTargetAction
  {
    NOT_SET,
    activate,
    deactivate
  };

namespace WorkflowTargetActionMapper
{
AWS_ARCREGIONSWITCH_API WorkflowTargetAction GetWorkflowTargetActionForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForWorkflowTargetAction(WorkflowTargetAction value);
} // namespace WorkflowTargetActionMapper
} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
