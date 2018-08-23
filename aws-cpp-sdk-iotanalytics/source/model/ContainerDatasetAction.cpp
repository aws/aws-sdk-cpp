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

#include <aws/iotanalytics/model/ContainerDatasetAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

ContainerDatasetAction::ContainerDatasetAction() : 
    m_imageHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_resourceConfigurationHasBeenSet(false),
    m_variablesHasBeenSet(false)
{
}

ContainerDatasetAction::ContainerDatasetAction(JsonView jsonValue) : 
    m_imageHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_resourceConfigurationHasBeenSet(false),
    m_variablesHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerDatasetAction& ContainerDatasetAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("image"))
  {
    m_image = jsonValue.GetString("image");

    m_imageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("executionRoleArn");

    m_executionRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceConfiguration"))
  {
    m_resourceConfiguration = jsonValue.GetObject("resourceConfiguration");

    m_resourceConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("variables"))
  {
    Array<JsonView> variablesJsonList = jsonValue.GetArray("variables");
    for(unsigned variablesIndex = 0; variablesIndex < variablesJsonList.GetLength(); ++variablesIndex)
    {
      m_variables.push_back(variablesJsonList[variablesIndex].AsObject());
    }
    m_variablesHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerDatasetAction::Jsonize() const
{
  JsonValue payload;

  if(m_imageHasBeenSet)
  {
   payload.WithString("image", m_image);

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("executionRoleArn", m_executionRoleArn);

  }

  if(m_resourceConfigurationHasBeenSet)
  {
   payload.WithObject("resourceConfiguration", m_resourceConfiguration.Jsonize());

  }

  if(m_variablesHasBeenSet)
  {
   Array<JsonValue> variablesJsonList(m_variables.size());
   for(unsigned variablesIndex = 0; variablesIndex < variablesJsonList.GetLength(); ++variablesIndex)
   {
     variablesJsonList[variablesIndex].AsObject(m_variables[variablesIndex].Jsonize());
   }
   payload.WithArray("variables", std::move(variablesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
