/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{
  enum class TerminationMode
  {
    NOT_SET,
    TRIGGER_ON_PROCESS_TERMINATE,
    FORCE_TERMINATE
  };

namespace TerminationModeMapper
{
AWS_GAMELIFT_API TerminationMode GetTerminationModeForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForTerminationMode(TerminationMode value);
} // namespace TerminationModeMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
