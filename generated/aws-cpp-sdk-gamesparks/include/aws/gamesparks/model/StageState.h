/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameSparks
{
namespace Model
{
  enum class StageState
  {
    NOT_SET,
    ACTIVE,
    DELETING
  };

namespace StageStateMapper
{
AWS_GAMESPARKS_API StageState GetStageStateForName(const Aws::String& name);

AWS_GAMESPARKS_API Aws::String GetNameForStageState(StageState value);
} // namespace StageStateMapper
} // namespace Model
} // namespace GameSparks
} // namespace Aws
