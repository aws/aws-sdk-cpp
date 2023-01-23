/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/AgentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{

AgentConfiguration::AgentConfiguration() : 
    m_agentParametersHasBeenSet(false),
    m_periodInSeconds(0),
    m_periodInSecondsHasBeenSet(false),
    m_shouldProfile(false),
    m_shouldProfileHasBeenSet(false)
{
}

AgentConfiguration::AgentConfiguration(JsonView jsonValue) : 
    m_agentParametersHasBeenSet(false),
    m_periodInSeconds(0),
    m_periodInSecondsHasBeenSet(false),
    m_shouldProfile(false),
    m_shouldProfileHasBeenSet(false)
{
  *this = jsonValue;
}

AgentConfiguration& AgentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentParameters"))
  {
    Aws::Map<Aws::String, JsonView> agentParametersJsonMap = jsonValue.GetObject("agentParameters").GetAllObjects();
    for(auto& agentParametersItem : agentParametersJsonMap)
    {
      m_agentParameters[AgentParameterFieldMapper::GetAgentParameterFieldForName(agentParametersItem.first)] = agentParametersItem.second.AsString();
    }
    m_agentParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("periodInSeconds"))
  {
    m_periodInSeconds = jsonValue.GetInteger("periodInSeconds");

    m_periodInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shouldProfile"))
  {
    m_shouldProfile = jsonValue.GetBool("shouldProfile");

    m_shouldProfileHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_agentParametersHasBeenSet)
  {
   JsonValue agentParametersJsonMap;
   for(auto& agentParametersItem : m_agentParameters)
   {
     agentParametersJsonMap.WithString(AgentParameterFieldMapper::GetNameForAgentParameterField(agentParametersItem.first), agentParametersItem.second);
   }
   payload.WithObject("agentParameters", std::move(agentParametersJsonMap));

  }

  if(m_periodInSecondsHasBeenSet)
  {
   payload.WithInteger("periodInSeconds", m_periodInSeconds);

  }

  if(m_shouldProfileHasBeenSet)
  {
   payload.WithBool("shouldProfile", m_shouldProfile);

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
