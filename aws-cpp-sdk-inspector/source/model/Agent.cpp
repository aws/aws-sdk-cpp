/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/inspector/model/Agent.h>
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

Agent::Agent() : 
    m_agentIdHasBeenSet(false),
    m_assessmentArnHasBeenSet(false),
    m_agentHealthHasBeenSet(false),
    m_agentHealthCodeHasBeenSet(false),
    m_agentHealthDetailsHasBeenSet(false),
    m_autoScalingGroupHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_telemetryHasBeenSet(false)
{
}

Agent::Agent(const JsonValue& jsonValue) : 
    m_agentIdHasBeenSet(false),
    m_assessmentArnHasBeenSet(false),
    m_agentHealthHasBeenSet(false),
    m_agentHealthCodeHasBeenSet(false),
    m_agentHealthDetailsHasBeenSet(false),
    m_autoScalingGroupHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_telemetryHasBeenSet(false)
{
  *this = jsonValue;
}

Agent& Agent::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("agentId"))
  {
    m_agentId = jsonValue.GetString("agentId");

    m_agentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentArn"))
  {
    m_assessmentArn = jsonValue.GetString("assessmentArn");

    m_assessmentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentHealth"))
  {
    m_agentHealth = jsonValue.GetString("agentHealth");

    m_agentHealthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentHealthCode"))
  {
    m_agentHealthCode = jsonValue.GetString("agentHealthCode");

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

  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("telemetry"))
  {
    Array<JsonValue> telemetryJsonList = jsonValue.GetArray("telemetry");
    for(unsigned telemetryIndex = 0; telemetryIndex < telemetryJsonList.GetLength(); ++telemetryIndex)
    {
      m_telemetry.push_back(telemetryJsonList[telemetryIndex].AsObject());
    }
    m_telemetryHasBeenSet = true;
  }

  return *this;
}

JsonValue Agent::Jsonize() const
{
  JsonValue payload;

  if(m_agentIdHasBeenSet)
  {
   payload.WithString("agentId", m_agentId);

  }

  if(m_assessmentArnHasBeenSet)
  {
   payload.WithString("assessmentArn", m_assessmentArn);

  }

  if(m_agentHealthHasBeenSet)
  {
   payload.WithString("agentHealth", m_agentHealth);

  }

  if(m_agentHealthCodeHasBeenSet)
  {
   payload.WithString("agentHealthCode", m_agentHealthCode);

  }

  if(m_agentHealthDetailsHasBeenSet)
  {
   payload.WithString("agentHealthDetails", m_agentHealthDetails);

  }

  if(m_autoScalingGroupHasBeenSet)
  {
   payload.WithString("autoScalingGroup", m_autoScalingGroup);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_telemetryHasBeenSet)
  {
   Array<JsonValue> telemetryJsonList(m_telemetry.size());
   for(unsigned telemetryIndex = 0; telemetryIndex < telemetryJsonList.GetLength(); ++telemetryIndex)
   {
     telemetryJsonList[telemetryIndex].AsObject(m_telemetry[telemetryIndex].Jsonize());
   }
   payload.WithArray("telemetry", std::move(telemetryJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws