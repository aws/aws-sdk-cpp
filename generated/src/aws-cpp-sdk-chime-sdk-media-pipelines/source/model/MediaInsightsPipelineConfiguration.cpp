/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/MediaInsightsPipelineConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

MediaInsightsPipelineConfiguration::MediaInsightsPipelineConfiguration() : 
    m_mediaInsightsPipelineConfigurationNameHasBeenSet(false),
    m_mediaInsightsPipelineConfigurationArnHasBeenSet(false),
    m_resourceAccessRoleArnHasBeenSet(false),
    m_realTimeAlertConfigurationHasBeenSet(false),
    m_elementsHasBeenSet(false),
    m_mediaInsightsPipelineConfigurationIdHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false)
{
}

MediaInsightsPipelineConfiguration::MediaInsightsPipelineConfiguration(JsonView jsonValue) : 
    m_mediaInsightsPipelineConfigurationNameHasBeenSet(false),
    m_mediaInsightsPipelineConfigurationArnHasBeenSet(false),
    m_resourceAccessRoleArnHasBeenSet(false),
    m_realTimeAlertConfigurationHasBeenSet(false),
    m_elementsHasBeenSet(false),
    m_mediaInsightsPipelineConfigurationIdHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

MediaInsightsPipelineConfiguration& MediaInsightsPipelineConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MediaInsightsPipelineConfigurationName"))
  {
    m_mediaInsightsPipelineConfigurationName = jsonValue.GetString("MediaInsightsPipelineConfigurationName");

    m_mediaInsightsPipelineConfigurationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaInsightsPipelineConfigurationArn"))
  {
    m_mediaInsightsPipelineConfigurationArn = jsonValue.GetString("MediaInsightsPipelineConfigurationArn");

    m_mediaInsightsPipelineConfigurationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceAccessRoleArn"))
  {
    m_resourceAccessRoleArn = jsonValue.GetString("ResourceAccessRoleArn");

    m_resourceAccessRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RealTimeAlertConfiguration"))
  {
    m_realTimeAlertConfiguration = jsonValue.GetObject("RealTimeAlertConfiguration");

    m_realTimeAlertConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Elements"))
  {
    Aws::Utils::Array<JsonView> elementsJsonList = jsonValue.GetArray("Elements");
    for(unsigned elementsIndex = 0; elementsIndex < elementsJsonList.GetLength(); ++elementsIndex)
    {
      m_elements.push_back(elementsJsonList[elementsIndex].AsObject());
    }
    m_elementsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaInsightsPipelineConfigurationId"))
  {
    m_mediaInsightsPipelineConfigurationId = jsonValue.GetString("MediaInsightsPipelineConfigurationId");

    m_mediaInsightsPipelineConfigurationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetString("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedTimestamp"))
  {
    m_updatedTimestamp = jsonValue.GetString("UpdatedTimestamp");

    m_updatedTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaInsightsPipelineConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_mediaInsightsPipelineConfigurationNameHasBeenSet)
  {
   payload.WithString("MediaInsightsPipelineConfigurationName", m_mediaInsightsPipelineConfigurationName);

  }

  if(m_mediaInsightsPipelineConfigurationArnHasBeenSet)
  {
   payload.WithString("MediaInsightsPipelineConfigurationArn", m_mediaInsightsPipelineConfigurationArn);

  }

  if(m_resourceAccessRoleArnHasBeenSet)
  {
   payload.WithString("ResourceAccessRoleArn", m_resourceAccessRoleArn);

  }

  if(m_realTimeAlertConfigurationHasBeenSet)
  {
   payload.WithObject("RealTimeAlertConfiguration", m_realTimeAlertConfiguration.Jsonize());

  }

  if(m_elementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> elementsJsonList(m_elements.size());
   for(unsigned elementsIndex = 0; elementsIndex < elementsJsonList.GetLength(); ++elementsIndex)
   {
     elementsJsonList[elementsIndex].AsObject(m_elements[elementsIndex].Jsonize());
   }
   payload.WithArray("Elements", std::move(elementsJsonList));

  }

  if(m_mediaInsightsPipelineConfigurationIdHasBeenSet)
  {
   payload.WithString("MediaInsightsPipelineConfigurationId", m_mediaInsightsPipelineConfigurationId);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithString("CreatedTimestamp", m_createdTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedTimestampHasBeenSet)
  {
   payload.WithString("UpdatedTimestamp", m_updatedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
