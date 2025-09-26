/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SearchableRoutingCriteriaStep.h>
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

SearchableRoutingCriteriaStep::SearchableRoutingCriteriaStep(JsonView jsonValue)
{
  *this = jsonValue;
}

SearchableRoutingCriteriaStep& SearchableRoutingCriteriaStep::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AgentCriteria"))
  {
    m_agentCriteria = jsonValue.GetObject("AgentCriteria");
    m_agentCriteriaHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchableRoutingCriteriaStep::Jsonize() const
{
  JsonValue payload;

  if(m_agentCriteriaHasBeenSet)
  {
   payload.WithObject("AgentCriteria", m_agentCriteria.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
