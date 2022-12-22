/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SimSpaceWeaver
{
namespace Model
{
  enum class SimulationStatus
  {
    NOT_SET,
    UNKNOWN,
    STARTING,
    STARTED,
    STOPPING,
    STOPPED,
    FAILED,
    DELETING,
    DELETED
  };

namespace SimulationStatusMapper
{
AWS_SIMSPACEWEAVER_API SimulationStatus GetSimulationStatusForName(const Aws::String& name);

AWS_SIMSPACEWEAVER_API Aws::String GetNameForSimulationStatus(SimulationStatus value);
} // namespace SimulationStatusMapper
} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
