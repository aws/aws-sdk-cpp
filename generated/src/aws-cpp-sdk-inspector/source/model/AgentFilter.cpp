/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/AgentFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

AgentFilter::AgentFilter() : 
    m_agentHealthsHasBeenSet(false),
    m_agentHealthCodesHasBeenSet(false)
{
}

AgentFilter::AgentFilter(JsonView jsonValue) : 
    m_agentHealthsHasBeenSet(false),
    m_agentHealthCodesHasBeenSet(false)
{
  *this = jsonValue;
}

AgentFilter& AgentFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentHealths"))
  {
    Aws::Utils::Array<JsonView> agentHealthsJsonList = jsonValue.GetArray("agentHealths");
    for(unsigned agentHealthsIndex = 0; agentHealthsIndex < agentHealthsJsonList.GetLength(); ++agentHealthsIndex)
    {
      m_agentHealths.push_back(AgentHealthMapper::GetAgentHealthForName(agentHealthsJsonList[agentHealthsIndex].AsString()));
    }
    m_agentHealthsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentHealthCodes"))
  {
    Aws::Utils::Array<JsonView> agentHealthCodesJsonList = jsonValue.GetArray("agentHealthCodes");
    for(unsigned agentHealthCodesIndex = 0; agentHealthCodesIndex < agentHealthCodesJsonList.GetLength(); ++agentHealthCodesIndex)
    {
      m_agentHealthCodes.push_back(AgentHealthCodeMapper::GetAgentHealthCodeForName(agentHealthCodesJsonList[agentHealthCodesIndex].AsString()));
    }
    m_agentHealthCodesHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentFilter::Jsonize() const
{
  JsonValue payload;

  if(m_agentHealthsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> agentHealthsJsonList(m_agentHealths.size());
   for(unsigned agentHealthsIndex = 0; agentHealthsIndex < agentHealthsJsonList.GetLength(); ++agentHealthsIndex)
   {
     agentHealthsJsonList[agentHealthsIndex].AsString(AgentHealthMapper::GetNameForAgentHealth(m_agentHealths[agentHealthsIndex]));
   }
   payload.WithArray("agentHealths", std::move(agentHealthsJsonList));

  }

  if(m_agentHealthCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> agentHealthCodesJsonList(m_agentHealthCodes.size());
   for(unsigned agentHealthCodesIndex = 0; agentHealthCodesIndex < agentHealthCodesJsonList.GetLength(); ++agentHealthCodesIndex)
   {
     agentHealthCodesJsonList[agentHealthCodesIndex].AsString(AgentHealthCodeMapper::GetNameForAgentHealthCode(m_agentHealthCodes[agentHealthCodesIndex]));
   }
   payload.WithArray("agentHealthCodes", std::move(agentHealthCodesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
