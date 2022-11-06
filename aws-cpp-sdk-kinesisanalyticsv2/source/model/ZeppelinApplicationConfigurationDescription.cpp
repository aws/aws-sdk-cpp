/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ZeppelinApplicationConfigurationDescription.h>
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

ZeppelinApplicationConfigurationDescription::ZeppelinApplicationConfigurationDescription() : 
    m_monitoringConfigurationDescriptionHasBeenSet(false),
    m_catalogConfigurationDescriptionHasBeenSet(false),
    m_deployAsApplicationConfigurationDescriptionHasBeenSet(false),
    m_customArtifactsConfigurationDescriptionHasBeenSet(false)
{
}

ZeppelinApplicationConfigurationDescription::ZeppelinApplicationConfigurationDescription(JsonView jsonValue) : 
    m_monitoringConfigurationDescriptionHasBeenSet(false),
    m_catalogConfigurationDescriptionHasBeenSet(false),
    m_deployAsApplicationConfigurationDescriptionHasBeenSet(false),
    m_customArtifactsConfigurationDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

ZeppelinApplicationConfigurationDescription& ZeppelinApplicationConfigurationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MonitoringConfigurationDescription"))
  {
    m_monitoringConfigurationDescription = jsonValue.GetObject("MonitoringConfigurationDescription");

    m_monitoringConfigurationDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CatalogConfigurationDescription"))
  {
    m_catalogConfigurationDescription = jsonValue.GetObject("CatalogConfigurationDescription");

    m_catalogConfigurationDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeployAsApplicationConfigurationDescription"))
  {
    m_deployAsApplicationConfigurationDescription = jsonValue.GetObject("DeployAsApplicationConfigurationDescription");

    m_deployAsApplicationConfigurationDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomArtifactsConfigurationDescription"))
  {
    Aws::Utils::Array<JsonView> customArtifactsConfigurationDescriptionJsonList = jsonValue.GetArray("CustomArtifactsConfigurationDescription");
    for(unsigned customArtifactsConfigurationDescriptionIndex = 0; customArtifactsConfigurationDescriptionIndex < customArtifactsConfigurationDescriptionJsonList.GetLength(); ++customArtifactsConfigurationDescriptionIndex)
    {
      m_customArtifactsConfigurationDescription.push_back(customArtifactsConfigurationDescriptionJsonList[customArtifactsConfigurationDescriptionIndex].AsObject());
    }
    m_customArtifactsConfigurationDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue ZeppelinApplicationConfigurationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_monitoringConfigurationDescriptionHasBeenSet)
  {
   payload.WithObject("MonitoringConfigurationDescription", m_monitoringConfigurationDescription.Jsonize());

  }

  if(m_catalogConfigurationDescriptionHasBeenSet)
  {
   payload.WithObject("CatalogConfigurationDescription", m_catalogConfigurationDescription.Jsonize());

  }

  if(m_deployAsApplicationConfigurationDescriptionHasBeenSet)
  {
   payload.WithObject("DeployAsApplicationConfigurationDescription", m_deployAsApplicationConfigurationDescription.Jsonize());

  }

  if(m_customArtifactsConfigurationDescriptionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customArtifactsConfigurationDescriptionJsonList(m_customArtifactsConfigurationDescription.size());
   for(unsigned customArtifactsConfigurationDescriptionIndex = 0; customArtifactsConfigurationDescriptionIndex < customArtifactsConfigurationDescriptionJsonList.GetLength(); ++customArtifactsConfigurationDescriptionIndex)
   {
     customArtifactsConfigurationDescriptionJsonList[customArtifactsConfigurationDescriptionIndex].AsObject(m_customArtifactsConfigurationDescription[customArtifactsConfigurationDescriptionIndex].Jsonize());
   }
   payload.WithArray("CustomArtifactsConfigurationDescription", std::move(customArtifactsConfigurationDescriptionJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
