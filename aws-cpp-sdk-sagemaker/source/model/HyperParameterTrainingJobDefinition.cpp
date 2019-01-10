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

#include <aws/sagemaker/model/HyperParameterTrainingJobDefinition.h>
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

HyperParameterTrainingJobDefinition::HyperParameterTrainingJobDefinition() : 
    m_staticHyperParametersHasBeenSet(false),
    m_algorithmSpecificationHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false),
    m_enableNetworkIsolation(false),
    m_enableNetworkIsolationHasBeenSet(false),
    m_enableInterContainerTrafficEncryption(false),
    m_enableInterContainerTrafficEncryptionHasBeenSet(false)
{
}

HyperParameterTrainingJobDefinition::HyperParameterTrainingJobDefinition(JsonView jsonValue) : 
    m_staticHyperParametersHasBeenSet(false),
    m_algorithmSpecificationHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false),
    m_enableNetworkIsolation(false),
    m_enableNetworkIsolationHasBeenSet(false),
    m_enableInterContainerTrafficEncryption(false),
    m_enableInterContainerTrafficEncryptionHasBeenSet(false)
{
  *this = jsonValue;
}

HyperParameterTrainingJobDefinition& HyperParameterTrainingJobDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StaticHyperParameters"))
  {
    Aws::Map<Aws::String, JsonView> staticHyperParametersJsonMap = jsonValue.GetObject("StaticHyperParameters").GetAllObjects();
    for(auto& staticHyperParametersItem : staticHyperParametersJsonMap)
    {
      m_staticHyperParameters[staticHyperParametersItem.first] = staticHyperParametersItem.second.AsString();
    }
    m_staticHyperParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlgorithmSpecification"))
  {
    m_algorithmSpecification = jsonValue.GetObject("AlgorithmSpecification");

    m_algorithmSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputDataConfig"))
  {
    Array<JsonView> inputDataConfigJsonList = jsonValue.GetArray("InputDataConfig");
    for(unsigned inputDataConfigIndex = 0; inputDataConfigIndex < inputDataConfigJsonList.GetLength(); ++inputDataConfigIndex)
    {
      m_inputDataConfig.push_back(inputDataConfigJsonList[inputDataConfigIndex].AsObject());
    }
    m_inputDataConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");

    m_vpcConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputDataConfig"))
  {
    m_outputDataConfig = jsonValue.GetObject("OutputDataConfig");

    m_outputDataConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceConfig"))
  {
    m_resourceConfig = jsonValue.GetObject("ResourceConfig");

    m_resourceConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StoppingCondition"))
  {
    m_stoppingCondition = jsonValue.GetObject("StoppingCondition");

    m_stoppingConditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableNetworkIsolation"))
  {
    m_enableNetworkIsolation = jsonValue.GetBool("EnableNetworkIsolation");

    m_enableNetworkIsolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableInterContainerTrafficEncryption"))
  {
    m_enableInterContainerTrafficEncryption = jsonValue.GetBool("EnableInterContainerTrafficEncryption");

    m_enableInterContainerTrafficEncryptionHasBeenSet = true;
  }

  return *this;
}

JsonValue HyperParameterTrainingJobDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_staticHyperParametersHasBeenSet)
  {
   JsonValue staticHyperParametersJsonMap;
   for(auto& staticHyperParametersItem : m_staticHyperParameters)
   {
     staticHyperParametersJsonMap.WithString(staticHyperParametersItem.first, staticHyperParametersItem.second);
   }
   payload.WithObject("StaticHyperParameters", std::move(staticHyperParametersJsonMap));

  }

  if(m_algorithmSpecificationHasBeenSet)
  {
   payload.WithObject("AlgorithmSpecification", m_algorithmSpecification.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_inputDataConfigHasBeenSet)
  {
   Array<JsonValue> inputDataConfigJsonList(m_inputDataConfig.size());
   for(unsigned inputDataConfigIndex = 0; inputDataConfigIndex < inputDataConfigJsonList.GetLength(); ++inputDataConfigIndex)
   {
     inputDataConfigJsonList[inputDataConfigIndex].AsObject(m_inputDataConfig[inputDataConfigIndex].Jsonize());
   }
   payload.WithArray("InputDataConfig", std::move(inputDataConfigJsonList));

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_outputDataConfigHasBeenSet)
  {
   payload.WithObject("OutputDataConfig", m_outputDataConfig.Jsonize());

  }

  if(m_resourceConfigHasBeenSet)
  {
   payload.WithObject("ResourceConfig", m_resourceConfig.Jsonize());

  }

  if(m_stoppingConditionHasBeenSet)
  {
   payload.WithObject("StoppingCondition", m_stoppingCondition.Jsonize());

  }

  if(m_enableNetworkIsolationHasBeenSet)
  {
   payload.WithBool("EnableNetworkIsolation", m_enableNetworkIsolation);

  }

  if(m_enableInterContainerTrafficEncryptionHasBeenSet)
  {
   payload.WithBool("EnableInterContainerTrafficEncryption", m_enableInterContainerTrafficEncryption);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
