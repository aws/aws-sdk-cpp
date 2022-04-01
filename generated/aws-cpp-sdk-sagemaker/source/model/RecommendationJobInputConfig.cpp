﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RecommendationJobInputConfig.h>
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

RecommendationJobInputConfig::RecommendationJobInputConfig() : 
    m_modelPackageVersionArnHasBeenSet(false),
    m_jobDurationInSeconds(0),
    m_jobDurationInSecondsHasBeenSet(false),
    m_trafficPatternHasBeenSet(false),
    m_resourceLimitHasBeenSet(false),
    m_endpointConfigurationsHasBeenSet(false)
{
}

RecommendationJobInputConfig::RecommendationJobInputConfig(JsonView jsonValue) : 
    m_modelPackageVersionArnHasBeenSet(false),
    m_jobDurationInSeconds(0),
    m_jobDurationInSecondsHasBeenSet(false),
    m_trafficPatternHasBeenSet(false),
    m_resourceLimitHasBeenSet(false),
    m_endpointConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationJobInputConfig& RecommendationJobInputConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelPackageVersionArn"))
  {
    m_modelPackageVersionArn = jsonValue.GetString("ModelPackageVersionArn");

    m_modelPackageVersionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobDurationInSeconds"))
  {
    m_jobDurationInSeconds = jsonValue.GetInteger("JobDurationInSeconds");

    m_jobDurationInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrafficPattern"))
  {
    m_trafficPattern = jsonValue.GetObject("TrafficPattern");

    m_trafficPatternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceLimit"))
  {
    m_resourceLimit = jsonValue.GetObject("ResourceLimit");

    m_resourceLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointConfigurations"))
  {
    Array<JsonView> endpointConfigurationsJsonList = jsonValue.GetArray("EndpointConfigurations");
    for(unsigned endpointConfigurationsIndex = 0; endpointConfigurationsIndex < endpointConfigurationsJsonList.GetLength(); ++endpointConfigurationsIndex)
    {
      m_endpointConfigurations.push_back(endpointConfigurationsJsonList[endpointConfigurationsIndex].AsObject());
    }
    m_endpointConfigurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationJobInputConfig::Jsonize() const
{
  JsonValue payload;

  if(m_modelPackageVersionArnHasBeenSet)
  {
   payload.WithString("ModelPackageVersionArn", m_modelPackageVersionArn);

  }

  if(m_jobDurationInSecondsHasBeenSet)
  {
   payload.WithInteger("JobDurationInSeconds", m_jobDurationInSeconds);

  }

  if(m_trafficPatternHasBeenSet)
  {
   payload.WithObject("TrafficPattern", m_trafficPattern.Jsonize());

  }

  if(m_resourceLimitHasBeenSet)
  {
   payload.WithObject("ResourceLimit", m_resourceLimit.Jsonize());

  }

  if(m_endpointConfigurationsHasBeenSet)
  {
   Array<JsonValue> endpointConfigurationsJsonList(m_endpointConfigurations.size());
   for(unsigned endpointConfigurationsIndex = 0; endpointConfigurationsIndex < endpointConfigurationsJsonList.GetLength(); ++endpointConfigurationsIndex)
   {
     endpointConfigurationsJsonList[endpointConfigurationsIndex].AsObject(m_endpointConfigurations[endpointConfigurationsIndex].Jsonize());
   }
   payload.WithArray("EndpointConfigurations", std::move(endpointConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
