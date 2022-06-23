/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/Phase.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

Phase::Phase() : 
    m_initialNumberOfUsers(0),
    m_initialNumberOfUsersHasBeenSet(false),
    m_spawnRate(0),
    m_spawnRateHasBeenSet(false),
    m_durationInSeconds(0),
    m_durationInSecondsHasBeenSet(false)
{
}

Phase::Phase(JsonView jsonValue) : 
    m_initialNumberOfUsers(0),
    m_initialNumberOfUsersHasBeenSet(false),
    m_spawnRate(0),
    m_spawnRateHasBeenSet(false),
    m_durationInSeconds(0),
    m_durationInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

Phase& Phase::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InitialNumberOfUsers"))
  {
    m_initialNumberOfUsers = jsonValue.GetInteger("InitialNumberOfUsers");

    m_initialNumberOfUsersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpawnRate"))
  {
    m_spawnRate = jsonValue.GetInteger("SpawnRate");

    m_spawnRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DurationInSeconds"))
  {
    m_durationInSeconds = jsonValue.GetInteger("DurationInSeconds");

    m_durationInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue Phase::Jsonize() const
{
  JsonValue payload;

  if(m_initialNumberOfUsersHasBeenSet)
  {
   payload.WithInteger("InitialNumberOfUsers", m_initialNumberOfUsers);

  }

  if(m_spawnRateHasBeenSet)
  {
   payload.WithInteger("SpawnRate", m_spawnRate);

  }

  if(m_durationInSecondsHasBeenSet)
  {
   payload.WithInteger("DurationInSeconds", m_durationInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
