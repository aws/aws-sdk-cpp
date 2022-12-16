/**
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
    m_endpointConfigurationsHasBeenSet(false),
    m_volumeKmsKeyIdHasBeenSet(false),
    m_containerConfigHasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_vpcConfigHasBeenSet(false)
{
}

RecommendationJobInputConfig::RecommendationJobInputConfig(JsonView jsonValue) : 
    m_modelPackageVersionArnHasBeenSet(false),
    m_jobDurationInSeconds(0),
    m_jobDurationInSecondsHasBeenSet(false),
    m_trafficPatternHasBeenSet(false),
    m_resourceLimitHasBeenSet(false),
    m_endpointConfigurationsHasBeenSet(false),
    m_volumeKmsKeyIdHasBeenSet(false),
    m_containerConfigHasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_vpcConfigHasBeenSet(false)
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
    Aws::Utils::Array<JsonView> endpointConfigurationsJsonList = jsonValue.GetArray("EndpointConfigurations");
    for(unsigned endpointConfigurationsIndex = 0; endpointConfigurationsIndex < endpointConfigurationsJsonList.GetLength(); ++endpointConfigurationsIndex)
    {
      m_endpointConfigurations.push_back(endpointConfigurationsJsonList[endpointConfigurationsIndex].AsObject());
    }
    m_endpointConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeKmsKeyId"))
  {
    m_volumeKmsKeyId = jsonValue.GetString("VolumeKmsKeyId");

    m_volumeKmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainerConfig"))
  {
    m_containerConfig = jsonValue.GetObject("ContainerConfig");

    m_containerConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Endpoints"))
  {
    Aws::Utils::Array<JsonView> endpointsJsonList = jsonValue.GetArray("Endpoints");
    for(unsigned endpointsIndex = 0; endpointsIndex < endpointsJsonList.GetLength(); ++endpointsIndex)
    {
      m_endpoints.push_back(endpointsJsonList[endpointsIndex].AsObject());
    }
    m_endpointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");

    m_vpcConfigHasBeenSet = true;
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
   Aws::Utils::Array<JsonValue> endpointConfigurationsJsonList(m_endpointConfigurations.size());
   for(unsigned endpointConfigurationsIndex = 0; endpointConfigurationsIndex < endpointConfigurationsJsonList.GetLength(); ++endpointConfigurationsIndex)
   {
     endpointConfigurationsJsonList[endpointConfigurationsIndex].AsObject(m_endpointConfigurations[endpointConfigurationsIndex].Jsonize());
   }
   payload.WithArray("EndpointConfigurations", std::move(endpointConfigurationsJsonList));

  }

  if(m_volumeKmsKeyIdHasBeenSet)
  {
   payload.WithString("VolumeKmsKeyId", m_volumeKmsKeyId);

  }

  if(m_containerConfigHasBeenSet)
  {
   payload.WithObject("ContainerConfig", m_containerConfig.Jsonize());

  }

  if(m_endpointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> endpointsJsonList(m_endpoints.size());
   for(unsigned endpointsIndex = 0; endpointsIndex < endpointsJsonList.GetLength(); ++endpointsIndex)
   {
     endpointsJsonList[endpointsIndex].AsObject(m_endpoints[endpointsIndex].Jsonize());
   }
   payload.WithArray("Endpoints", std::move(endpointsJsonList));

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
