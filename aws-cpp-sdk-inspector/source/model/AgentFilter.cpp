/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

AgentFilter::AgentFilter(const JsonValue& jsonValue) : 
    m_agentHealthsHasBeenSet(false),
    m_agentHealthCodesHasBeenSet(false)
{
  *this = jsonValue;
}

AgentFilter& AgentFilter::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("agentHealths"))
  {
    Array<JsonValue> agentHealthsJsonList = jsonValue.GetArray("agentHealths");
    for(unsigned agentHealthsIndex = 0; agentHealthsIndex < agentHealthsJsonList.GetLength(); ++agentHealthsIndex)
    {
      m_agentHealths.push_back(AgentHealthMapper::GetAgentHealthForName(agentHealthsJsonList[agentHealthsIndex].AsString()));
    }
    m_agentHealthsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentHealthCodes"))
  {
    Array<JsonValue> agentHealthCodesJsonList = jsonValue.GetArray("agentHealthCodes");
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
   Array<JsonValue> agentHealthsJsonList(m_agentHealths.size());
   for(unsigned agentHealthsIndex = 0; agentHealthsIndex < agentHealthsJsonList.GetLength(); ++agentHealthsIndex)
   {
     agentHealthsJsonList[agentHealthsIndex].AsString(AgentHealthMapper::GetNameForAgentHealth(m_agentHealths[agentHealthsIndex]));
   }
   payload.WithArray("agentHealths", std::move(agentHealthsJsonList));

  }

  if(m_agentHealthCodesHasBeenSet)
  {
   Array<JsonValue> agentHealthCodesJsonList(m_agentHealthCodes.size());
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
