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
  enum class GameState
  {
    NOT_SET,
    ACTIVE,
    DELETING
  };

namespace GameStateMapper
{
AWS_GAMESPARKS_API GameState GetGameStateForName(const Aws::String& name);

AWS_GAMESPARKS_API Aws::String GetNameForGameState(GameState value);
} // namespace GameStateMapper
} // namespace Model
} // namespace GameSparks
} // namespace Aws
