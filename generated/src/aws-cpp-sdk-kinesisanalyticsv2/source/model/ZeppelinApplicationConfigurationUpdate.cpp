/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ZeppelinApplicationConfigurationUpdate.h>
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

ZeppelinApplicationConfigurationUpdate::ZeppelinApplicationConfigurationUpdate() : 
    m_monitoringConfigurationUpdateHasBeenSet(false),
    m_catalogConfigurationUpdateHasBeenSet(false),
    m_deployAsApplicationConfigurationUpdateHasBeenSet(false),
    m_customArtifactsConfigurationUpdateHasBeenSet(false)
{
}

ZeppelinApplicationConfigurationUpdate::ZeppelinApplicationConfigurationUpdate(JsonView jsonValue) : 
    m_monitoringConfigurationUpdateHasBeenSet(false),
    m_catalogConfigurationUpdateHasBeenSet(false),
    m_deployAsApplicationConfigurationUpdateHasBeenSet(false),
    m_customArtifactsConfigurationUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

ZeppelinApplicationConfigurationUpdate& ZeppelinApplicationConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MonitoringConfigurationUpdate"))
  {
    m_monitoringConfigurationUpdate = jsonValue.GetObject("MonitoringConfigurationUpdate");

    m_monitoringConfigurationUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CatalogConfigurationUpdate"))
  {
    m_catalogConfigurationUpdate = jsonValue.GetObject("CatalogConfigurationUpdate");

    m_catalogConfigurationUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeployAsApplicationConfigurationUpdate"))
  {
    m_deployAsApplicationConfigurationUpdate = jsonValue.GetObject("DeployAsApplicationConfigurationUpdate");

    m_deployAsApplicationConfigurationUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomArtifactsConfigurationUpdate"))
  {
    Aws::Utils::Array<JsonView> customArtifactsConfigurationUpdateJsonList = jsonValue.GetArray("CustomArtifactsConfigurationUpdate");
    for(unsigned customArtifactsConfigurationUpdateIndex = 0; customArtifactsConfigurationUpdateIndex < customArtifactsConfigurationUpdateJsonList.GetLength(); ++customArtifactsConfigurationUpdateIndex)
    {
      m_customArtifactsConfigurationUpdate.push_back(customArtifactsConfigurationUpdateJsonList[customArtifactsConfigurationUpdateIndex].AsObject());
    }
    m_customArtifactsConfigurationUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue ZeppelinApplicationConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_monitoringConfigurationUpdateHasBeenSet)
  {
   payload.WithObject("MonitoringConfigurationUpdate", m_monitoringConfigurationUpdate.Jsonize());

  }

  if(m_catalogConfigurationUpdateHasBeenSet)
  {
   payload.WithObject("CatalogConfigurationUpdate", m_catalogConfigurationUpdate.Jsonize());

  }

  if(m_deployAsApplicationConfigurationUpdateHasBeenSet)
  {
   payload.WithObject("DeployAsApplicationConfigurationUpdate", m_deployAsApplicationConfigurationUpdate.Jsonize());

  }

  if(m_customArtifactsConfigurationUpdateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customArtifactsConfigurationUpdateJsonList(m_customArtifactsConfigurationUpdate.size());
   for(unsigned customArtifactsConfigurationUpdateIndex = 0; customArtifactsConfigurationUpdateIndex < customArtifactsConfigurationUpdateJsonList.GetLength(); ++customArtifactsConfigurationUpdateIndex)
   {
     customArtifactsConfigurationUpdateJsonList[customArtifactsConfigurationUpdateIndex].AsObject(m_customArtifactsConfigurationUpdate[customArtifactsConfigurationUpdateIndex].Jsonize());
   }
   payload.WithArray("CustomArtifactsConfigurationUpdate", std::move(customArtifactsConfigurationUpdateJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
