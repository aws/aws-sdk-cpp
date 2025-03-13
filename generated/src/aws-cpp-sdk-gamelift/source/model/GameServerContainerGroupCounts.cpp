/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GameServerContainerGroupCounts.h>
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

GameServerContainerGroupCounts::GameServerContainerGroupCounts(JsonView jsonValue)
{
  *this = jsonValue;
}

GameServerContainerGroupCounts& GameServerContainerGroupCounts::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PENDING"))
  {
    m_pENDING = jsonValue.GetInteger("PENDING");
    m_pENDINGHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ACTIVE"))
  {
    m_aCTIVE = jsonValue.GetInteger("ACTIVE");
    m_aCTIVEHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IDLE"))
  {
    m_iDLE = jsonValue.GetInteger("IDLE");
    m_iDLEHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TERMINATING"))
  {
    m_tERMINATING = jsonValue.GetInteger("TERMINATING");
    m_tERMINATINGHasBeenSet = true;
  }
  return *this;
}

JsonValue GameServerContainerGroupCounts::Jsonize() const
{
  JsonValue payload;

  if(m_pENDINGHasBeenSet)
  {
   payload.WithInteger("PENDING", m_pENDING);

  }

  if(m_aCTIVEHasBeenSet)
  {
   payload.WithInteger("ACTIVE", m_aCTIVE);

  }

  if(m_iDLEHasBeenSet)
  {
   payload.WithInteger("IDLE", m_iDLE);

  }

  if(m_tERMINATINGHasBeenSet)
  {
   payload.WithInteger("TERMINATING", m_tERMINATING);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
