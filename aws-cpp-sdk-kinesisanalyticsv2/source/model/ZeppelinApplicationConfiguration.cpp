/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ZeppelinApplicationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

ZeppelinApplicationConfiguration::ZeppelinApplicationConfiguration() : 
    m_monitoringConfigurationHasBeenSet(false),
    m_catalogConfigurationHasBeenSet(false),
    m_deployAsApplicationConfigurationHasBeenSet(false),
    m_customArtifactsConfigurationHasBeenSet(false)
{
}

ZeppelinApplicationConfiguration::ZeppelinApplicationConfiguration(JsonView jsonValue) : 
    m_monitoringConfigurationHasBeenSet(false),
    m_catalogConfigurationHasBeenSet(false),
    m_deployAsApplicationConfigurationHasBeenSet(false),
    m_customArtifactsConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ZeppelinApplicationConfiguration& ZeppelinApplicationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MonitoringConfiguration"))
  {
    m_monitoringConfiguration = jsonValue.GetObject("MonitoringConfiguration");

    m_monitoringConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CatalogConfiguration"))
  {
    m_catalogConfiguration = jsonValue.GetObject("CatalogConfiguration");

    m_catalogConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeployAsApplicationConfiguration"))
  {
    m_deployAsApplicationConfiguration = jsonValue.GetObject("DeployAsApplicationConfiguration");

    m_deployAsApplicationConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomArtifactsConfiguration"))
  {
    Aws::Utils::Array<JsonView> customArtifactsConfigurationJsonList = jsonValue.GetArray("CustomArtifactsConfiguration");
    for(unsigned customArtifactsConfigurationIndex = 0; customArtifactsConfigurationIndex < customArtifactsConfigurationJsonList.GetLength(); ++customArtifactsConfigurationIndex)
    {
      m_customArtifactsConfiguration.push_back(customArtifactsConfigurationJsonList[customArtifactsConfigurationIndex].AsObject());
    }
    m_customArtifactsConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ZeppelinApplicationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_monitoringConfigurationHasBeenSet)
  {
   payload.WithObject("MonitoringConfiguration", m_monitoringConfiguration.Jsonize());

  }

  if(m_catalogConfigurationHasBeenSet)
  {
   payload.WithObject("CatalogConfiguration", m_catalogConfiguration.Jsonize());

  }

  if(m_deployAsApplicationConfigurationHasBeenSet)
  {
   payload.WithObject("DeployAsApplicationConfiguration", m_deployAsApplicationConfiguration.Jsonize());

  }

  if(m_customArtifactsConfigurationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customArtifactsConfigurationJsonList(m_customArtifactsConfiguration.size());
   for(unsigned customArtifactsConfigurationIndex = 0; customArtifactsConfigurationIndex < customArtifactsConfigurationJsonList.GetLength(); ++customArtifactsConfigurationIndex)
   {
     customArtifactsConfigurationJsonList[customArtifactsConfigurationIndex].AsObject(m_customArtifactsConfiguration[customArtifactsConfigurationIndex].Jsonize());
   }
   payload.WithArray("CustomArtifactsConfiguration", std::move(customArtifactsConfigurationJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
