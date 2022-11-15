/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelConfiguration.h>
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

ModelConfiguration::ModelConfiguration() : 
    m_inferenceSpecificationNameHasBeenSet(false),
    m_environmentParametersHasBeenSet(false)
{
}

ModelConfiguration::ModelConfiguration(JsonView jsonValue) : 
    m_inferenceSpecificationNameHasBeenSet(false),
    m_environmentParametersHasBeenSet(false)
{
  *this = jsonValue;
}

ModelConfiguration& ModelConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InferenceSpecificationName"))
  {
    m_inferenceSpecificationName = jsonValue.GetString("InferenceSpecificationName");

    m_inferenceSpecificationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnvironmentParameters"))
  {
    Aws::Utils::Array<JsonView> environmentParametersJsonList = jsonValue.GetArray("EnvironmentParameters");
    for(unsigned environmentParametersIndex = 0; environmentParametersIndex < environmentParametersJsonList.GetLength(); ++environmentParametersIndex)
    {
      m_environmentParameters.push_back(environmentParametersJsonList[environmentParametersIndex].AsObject());
    }
    m_environmentParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_inferenceSpecificationNameHasBeenSet)
  {
   payload.WithString("InferenceSpecificationName", m_inferenceSpecificationName);

  }

  if(m_environmentParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> environmentParametersJsonList(m_environmentParameters.size());
   for(unsigned environmentParametersIndex = 0; environmentParametersIndex < environmentParametersJsonList.GetLength(); ++environmentParametersIndex)
   {
     environmentParametersJsonList[environmentParametersIndex].AsObject(m_environmentParameters[environmentParametersIndex].Jsonize());
   }
   payload.WithArray("EnvironmentParameters", std::move(environmentParametersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
