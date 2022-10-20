/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringJobDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

MonitoringJobDefinition::MonitoringJobDefinition() : 
    m_baselineConfigHasBeenSet(false),
    m_monitoringInputsHasBeenSet(false),
    m_monitoringOutputConfigHasBeenSet(false),
    m_monitoringResourcesHasBeenSet(false),
    m_monitoringAppSpecificationHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_networkConfigHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

MonitoringJobDefinition::MonitoringJobDefinition(JsonView jsonValue) : 
    m_baselineConfigHasBeenSet(false),
    m_monitoringInputsHasBeenSet(false),
    m_monitoringOutputConfigHasBeenSet(false),
    m_monitoringResourcesHasBeenSet(false),
    m_monitoringAppSpecificationHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_networkConfigHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

MonitoringJobDefinition& MonitoringJobDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BaselineConfig"))
  {
    m_baselineConfig = jsonValue.GetObject("BaselineConfig");

    m_baselineConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitoringInputs"))
  {
    Aws::Utils::Array<JsonView> monitoringInputsJsonList = jsonValue.GetArray("MonitoringInputs");
    for(unsigned monitoringInputsIndex = 0; monitoringInputsIndex < monitoringInputsJsonList.GetLength(); ++monitoringInputsIndex)
    {
      m_monitoringInputs.push_back(monitoringInputsJsonList[monitoringInputsIndex].AsObject());
    }
    m_monitoringInputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitoringOutputConfig"))
  {
    m_monitoringOutputConfig = jsonValue.GetObject("MonitoringOutputConfig");

    m_monitoringOutputConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitoringResources"))
  {
    m_monitoringResources = jsonValue.GetObject("MonitoringResources");

    m_monitoringResourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitoringAppSpecification"))
  {
    m_monitoringAppSpecification = jsonValue.GetObject("MonitoringAppSpecification");

    m_monitoringAppSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StoppingCondition"))
  {
    m_stoppingCondition = jsonValue.GetObject("StoppingCondition");

    m_stoppingConditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Environment"))
  {
    Aws::Map<Aws::String, JsonView> environmentJsonMap = jsonValue.GetObject("Environment").GetAllObjects();
    for(auto& environmentItem : environmentJsonMap)
    {
      m_environment[environmentItem.first] = environmentItem.second.AsString();
    }
    m_environmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkConfig"))
  {
    m_networkConfig = jsonValue.GetObject("NetworkConfig");

    m_networkConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitoringJobDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_baselineConfigHasBeenSet)
  {
   payload.WithObject("BaselineConfig", m_baselineConfig.Jsonize());

  }

  if(m_monitoringInputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> monitoringInputsJsonList(m_monitoringInputs.size());
   for(unsigned monitoringInputsIndex = 0; monitoringInputsIndex < monitoringInputsJsonList.GetLength(); ++monitoringInputsIndex)
   {
     monitoringInputsJsonList[monitoringInputsIndex].AsObject(m_monitoringInputs[monitoringInputsIndex].Jsonize());
   }
   payload.WithArray("MonitoringInputs", std::move(monitoringInputsJsonList));

  }

  if(m_monitoringOutputConfigHasBeenSet)
  {
   payload.WithObject("MonitoringOutputConfig", m_monitoringOutputConfig.Jsonize());

  }

  if(m_monitoringResourcesHasBeenSet)
  {
   payload.WithObject("MonitoringResources", m_monitoringResources.Jsonize());

  }

  if(m_monitoringAppSpecificationHasBeenSet)
  {
   payload.WithObject("MonitoringAppSpecification", m_monitoringAppSpecification.Jsonize());

  }

  if(m_stoppingConditionHasBeenSet)
  {
   payload.WithObject("StoppingCondition", m_stoppingCondition.Jsonize());

  }

  if(m_environmentHasBeenSet)
  {
   JsonValue environmentJsonMap;
   for(auto& environmentItem : m_environment)
   {
     environmentJsonMap.WithString(environmentItem.first, environmentItem.second);
   }
   payload.WithObject("Environment", std::move(environmentJsonMap));

  }

  if(m_networkConfigHasBeenSet)
  {
   payload.WithObject("NetworkConfig", m_networkConfig.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
