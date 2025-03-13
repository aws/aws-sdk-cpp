/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MatchCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

MatchCriteria::MatchCriteria(JsonView jsonValue)
{
  *this = jsonValue;
}

MatchCriteria& MatchCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AgentsCriteria"))
  {
    m_agentsCriteria = jsonValue.GetObject("AgentsCriteria");
    m_agentsCriteriaHasBeenSet = true;
  }
  return *this;
}

JsonValue MatchCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_agentsCriteriaHasBeenSet)
  {
   payload.WithObject("AgentsCriteria", m_agentsCriteria.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
