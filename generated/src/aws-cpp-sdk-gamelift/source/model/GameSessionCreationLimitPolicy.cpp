/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GameSessionCreationLimitPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

GameSessionCreationLimitPolicy::GameSessionCreationLimitPolicy(JsonView jsonValue)
{
  *this = jsonValue;
}

GameSessionCreationLimitPolicy& GameSessionCreationLimitPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NewGameSessionsPerCreator"))
  {
    m_newGameSessionsPerCreator = jsonValue.GetInteger("NewGameSessionsPerCreator");
    m_newGameSessionsPerCreatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PolicyPeriodInMinutes"))
  {
    m_policyPeriodInMinutes = jsonValue.GetInteger("PolicyPeriodInMinutes");
    m_policyPeriodInMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue GameSessionCreationLimitPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_newGameSessionsPerCreatorHasBeenSet)
  {
   payload.WithInteger("NewGameSessionsPerCreator", m_newGameSessionsPerCreator);

  }

  if(m_policyPeriodInMinutesHasBeenSet)
  {
   payload.WithInteger("PolicyPeriodInMinutes", m_policyPeriodInMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
