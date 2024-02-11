/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TestSetTurnResult.h>
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

TestSetTurnResult::TestSetTurnResult() : 
    m_agentHasBeenSet(false),
    m_userHasBeenSet(false)
{
}

TestSetTurnResult::TestSetTurnResult(JsonView jsonValue) : 
    m_agentHasBeenSet(false),
    m_userHasBeenSet(false)
{
  *this = jsonValue;
}

TestSetTurnResult& TestSetTurnResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agent"))
  {
    m_agent = jsonValue.GetObject("agent");

    m_agentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("user"))
  {
    m_user = jsonValue.GetObject("user");

    m_userHasBeenSet = true;
  }

  return *this;
}

JsonValue TestSetTurnResult::Jsonize() const
{
  JsonValue payload;

  if(m_agentHasBeenSet)
  {
   payload.WithObject("agent", m_agent.Jsonize());

  }

  if(m_userHasBeenSet)
  {
   payload.WithObject("user", m_user.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
