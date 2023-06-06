/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TurnSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

TurnSpecification::TurnSpecification() : 
    m_agentTurnHasBeenSet(false),
    m_userTurnHasBeenSet(false)
{
}

TurnSpecification::TurnSpecification(JsonView jsonValue) : 
    m_agentTurnHasBeenSet(false),
    m_userTurnHasBeenSet(false)
{
  *this = jsonValue;
}

TurnSpecification& TurnSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentTurn"))
  {
    m_agentTurn = jsonValue.GetObject("agentTurn");

    m_agentTurnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userTurn"))
  {
    m_userTurn = jsonValue.GetObject("userTurn");

    m_userTurnHasBeenSet = true;
  }

  return *this;
}

JsonValue TurnSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_agentTurnHasBeenSet)
  {
   payload.WithObject("agentTurn", m_agentTurn.Jsonize());

  }

  if(m_userTurnHasBeenSet)
  {
   payload.WithObject("userTurn", m_userTurn.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
