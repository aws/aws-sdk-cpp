/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/AssessmentRunAgent.h>
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

AssessmentRunAgent::AssessmentRunAgent() : 
    m_agentIdHasBeenSet(false),
    m_assessmentRunArnHasBeenSet(false),
    m_agentHealth(AgentHealth::NOT_SET),
    m_agentHealthHasBeenSet(false),
    m_agentHealthCode(AgentHealthCode::NOT_SET),
    m_agentHealthCodeHasBeenSet(false),
    m_agentHealthDetailsHasBeenSet(false),
    m_autoScalingGroupHasBeenSet(false),
    m_telemetryMetadataHasBeenSet(false)
{
}

AssessmentRunAgent::AssessmentRunAgent(JsonView jsonValue) : 
    m_agentIdHasBeenSet(false),
    m_assessmentRunArnHasBeenSet(false),
    m_agentHealth(AgentHealth::NOT_SET),
    m_agentHealthHasBeenSet(false),
    m_agentHealthCode(AgentHealthCode::NOT_SET),
    m_agentHealthCodeHasBeenSet(false),
    m_agentHealthDetailsHasBeenSet(false),
    m_autoScalingGroupHasBeenSet(false),
    m_telemetryMetadataHasBeenSet(false)
{
  *this = jsonValue;
}

AssessmentRunAgent& AssessmentRunAgent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentId"))
  {
    m_agentId = jsonValue.GetString("agentId");

    m_agentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentRunArn"))
  {
    m_assessmentRunArn = jsonValue.GetString("assessmentRunArn");

    m_assessmentRunArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentHealth"))
  {
    m_agentHealth = AgentHealthMapper::GetAgentHealthForName(jsonValue.GetString("agentHealth"));

    m_agentHealthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentHealthCode"))
  {
    m_agentHealthCode = AgentHealthCodeMapper::GetAgentHealthCodeForName(jsonValue.GetString("agentHealthCode"));

    m_agentHealthCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentHealthDetails"))
  {
    m_agentHealthDetails = jsonValue.GetString("agentHealthDetails");

    m_agentHealthDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoScalingGroup"))
  {
    m_autoScalingGroup = jsonValue.GetString("autoScalingGroup");

    m_autoScalingGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("telemetryMetadata"))
  {
    Aws::Utils::Array<JsonView> telemetryMetadataJsonList = jsonValue.GetArray("telemetryMetadata");
    for(unsigned telemetryMetadataIndex = 0; telemetryMetadataIndex < telemetryMetadataJsonList.GetLength(); ++telemetryMetadataIndex)
    {
      m_telemetryMetadata.push_back(telemetryMetadataJsonList[telemetryMetadataIndex].AsObject());
    }
    m_telemetryMetadataHasBeenSet = true;
  }

  return *this;
}

JsonValue AssessmentRunAgent::Jsonize() const
{
  JsonValue payload;

  if(m_agentIdHasBeenSet)
  {
   payload.WithString("agentId", m_agentId);

  }

  if(m_assessmentRunArnHasBeenSet)
  {
   payload.WithString("assessmentRunArn", m_assessmentRunArn);

  }

  if(m_agentHealthHasBeenSet)
  {
   payload.WithString("agentHealth", AgentHealthMapper::GetNameForAgentHealth(m_agentHealth));
  }

  if(m_agentHealthCodeHasBeenSet)
  {
   payload.WithString("agentHealthCode", AgentHealthCodeMapper::GetNameForAgentHealthCode(m_agentHealthCode));
  }

  if(m_agentHealthDetailsHasBeenSet)
  {
   payload.WithString("agentHealthDetails", m_agentHealthDetails);

  }

  if(m_autoScalingGroupHasBeenSet)
  {
   payload.WithString("autoScalingGroup", m_autoScalingGroup);

  }

  if(m_telemetryMetadataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> telemetryMetadataJsonList(m_telemetryMetadata.size());
   for(unsigned telemetryMetadataIndex = 0; telemetryMetadataIndex < telemetryMetadataJsonList.GetLength(); ++telemetryMetadataIndex)
   {
     telemetryMetadataJsonList[telemetryMetadataIndex].AsObject(m_telemetryMetadata[telemetryMetadataIndex].Jsonize());
   }
   payload.WithArray("telemetryMetadata", std::move(telemetryMetadataJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
