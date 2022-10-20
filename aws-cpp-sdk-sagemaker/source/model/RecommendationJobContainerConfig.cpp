/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RecommendationJobContainerConfig.h>
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

RecommendationJobContainerConfig::RecommendationJobContainerConfig() : 
    m_domainHasBeenSet(false),
    m_taskHasBeenSet(false),
    m_frameworkHasBeenSet(false),
    m_frameworkVersionHasBeenSet(false),
    m_payloadConfigHasBeenSet(false),
    m_nearestModelNameHasBeenSet(false),
    m_supportedInstanceTypesHasBeenSet(false)
{
}

RecommendationJobContainerConfig::RecommendationJobContainerConfig(JsonView jsonValue) : 
    m_domainHasBeenSet(false),
    m_taskHasBeenSet(false),
    m_frameworkHasBeenSet(false),
    m_frameworkVersionHasBeenSet(false),
    m_payloadConfigHasBeenSet(false),
    m_nearestModelNameHasBeenSet(false),
    m_supportedInstanceTypesHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationJobContainerConfig& RecommendationJobContainerConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");

    m_domainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Task"))
  {
    m_task = jsonValue.GetString("Task");

    m_taskHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Framework"))
  {
    m_framework = jsonValue.GetString("Framework");

    m_frameworkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FrameworkVersion"))
  {
    m_frameworkVersion = jsonValue.GetString("FrameworkVersion");

    m_frameworkVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PayloadConfig"))
  {
    m_payloadConfig = jsonValue.GetObject("PayloadConfig");

    m_payloadConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NearestModelName"))
  {
    m_nearestModelName = jsonValue.GetString("NearestModelName");

    m_nearestModelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedInstanceTypes"))
  {
    Aws::Utils::Array<JsonView> supportedInstanceTypesJsonList = jsonValue.GetArray("SupportedInstanceTypes");
    for(unsigned supportedInstanceTypesIndex = 0; supportedInstanceTypesIndex < supportedInstanceTypesJsonList.GetLength(); ++supportedInstanceTypesIndex)
    {
      m_supportedInstanceTypes.push_back(supportedInstanceTypesJsonList[supportedInstanceTypesIndex].AsString());
    }
    m_supportedInstanceTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationJobContainerConfig::Jsonize() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_taskHasBeenSet)
  {
   payload.WithString("Task", m_task);

  }

  if(m_frameworkHasBeenSet)
  {
   payload.WithString("Framework", m_framework);

  }

  if(m_frameworkVersionHasBeenSet)
  {
   payload.WithString("FrameworkVersion", m_frameworkVersion);

  }

  if(m_payloadConfigHasBeenSet)
  {
   payload.WithObject("PayloadConfig", m_payloadConfig.Jsonize());

  }

  if(m_nearestModelNameHasBeenSet)
  {
   payload.WithString("NearestModelName", m_nearestModelName);

  }

  if(m_supportedInstanceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedInstanceTypesJsonList(m_supportedInstanceTypes.size());
   for(unsigned supportedInstanceTypesIndex = 0; supportedInstanceTypesIndex < supportedInstanceTypesJsonList.GetLength(); ++supportedInstanceTypesIndex)
   {
     supportedInstanceTypesJsonList[supportedInstanceTypesIndex].AsString(m_supportedInstanceTypes[supportedInstanceTypesIndex]);
   }
   payload.WithArray("SupportedInstanceTypes", std::move(supportedInstanceTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
