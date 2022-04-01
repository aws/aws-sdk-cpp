/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Outposts
{
namespace Model
{
  enum class PowerPhase
  {
    NOT_SET,
    SINGLE_PHASE,
    THREE_PHASE
  };

namespace PowerPhaseMapper
{
AWS_OUTPOSTS_API PowerPhase GetPowerPhaseForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForPowerPhase(PowerPhase value);
} // namespace PowerPhaseMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
