/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/LiveSimulationState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SimSpaceWeaver
{
namespace Model
{

LiveSimulationState::LiveSimulationState() : 
    m_clocksHasBeenSet(false),
    m_domainsHasBeenSet(false)
{
}

LiveSimulationState::LiveSimulationState(JsonView jsonValue) : 
    m_clocksHasBeenSet(false),
    m_domainsHasBeenSet(false)
{
  *this = jsonValue;
}

LiveSimulationState& LiveSimulationState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Clocks"))
  {
    Aws::Utils::Array<JsonView> clocksJsonList = jsonValue.GetArray("Clocks");
    for(unsigned clocksIndex = 0; clocksIndex < clocksJsonList.GetLength(); ++clocksIndex)
    {
      m_clocks.push_back(clocksJsonList[clocksIndex].AsObject());
    }
    m_clocksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Domains"))
  {
    Aws::Utils::Array<JsonView> domainsJsonList = jsonValue.GetArray("Domains");
    for(unsigned domainsIndex = 0; domainsIndex < domainsJsonList.GetLength(); ++domainsIndex)
    {
      m_domains.push_back(domainsJsonList[domainsIndex].AsObject());
    }
    m_domainsHasBeenSet = true;
  }

  return *this;
}

JsonValue LiveSimulationState::Jsonize() const
{
  JsonValue payload;

  if(m_clocksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clocksJsonList(m_clocks.size());
   for(unsigned clocksIndex = 0; clocksIndex < clocksJsonList.GetLength(); ++clocksIndex)
   {
     clocksJsonList[clocksIndex].AsObject(m_clocks[clocksIndex].Jsonize());
   }
   payload.WithArray("Clocks", std::move(clocksJsonList));

  }

  if(m_domainsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> domainsJsonList(m_domains.size());
   for(unsigned domainsIndex = 0; domainsIndex < domainsJsonList.GetLength(); ++domainsIndex)
   {
     domainsJsonList[domainsIndex].AsObject(m_domains[domainsIndex].Jsonize());
   }
   payload.WithArray("Domains", std::move(domainsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
