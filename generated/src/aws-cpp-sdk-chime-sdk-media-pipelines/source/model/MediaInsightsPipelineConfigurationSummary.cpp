/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/MediaInsightsPipelineConfigurationSummary.h>
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

MediaInsightsPipelineConfigurationSummary::MediaInsightsPipelineConfigurationSummary() : 
    m_mediaInsightsPipelineConfigurationNameHasBeenSet(false),
    m_mediaInsightsPipelineConfigurationIdHasBeenSet(false),
    m_mediaInsightsPipelineConfigurationArnHasBeenSet(false)
{
}

MediaInsightsPipelineConfigurationSummary::MediaInsightsPipelineConfigurationSummary(JsonView jsonValue) : 
    m_mediaInsightsPipelineConfigurationNameHasBeenSet(false),
    m_mediaInsightsPipelineConfigurationIdHasBeenSet(false),
    m_mediaInsightsPipelineConfigurationArnHasBeenSet(false)
{
  *this = jsonValue;
}

MediaInsightsPipelineConfigurationSummary& MediaInsightsPipelineConfigurationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MediaInsightsPipelineConfigurationName"))
  {
    m_mediaInsightsPipelineConfigurationName = jsonValue.GetString("MediaInsightsPipelineConfigurationName");

    m_mediaInsightsPipelineConfigurationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaInsightsPipelineConfigurationId"))
  {
    m_mediaInsightsPipelineConfigurationId = jsonValue.GetString("MediaInsightsPipelineConfigurationId");

    m_mediaInsightsPipelineConfigurationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaInsightsPipelineConfigurationArn"))
  {
    m_mediaInsightsPipelineConfigurationArn = jsonValue.GetString("MediaInsightsPipelineConfigurationArn");

    m_mediaInsightsPipelineConfigurationArnHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaInsightsPipelineConfigurationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_mediaInsightsPipelineConfigurationNameHasBeenSet)
  {
   payload.WithString("MediaInsightsPipelineConfigurationName", m_mediaInsightsPipelineConfigurationName);

  }

  if(m_mediaInsightsPipelineConfigurationIdHasBeenSet)
  {
   payload.WithString("MediaInsightsPipelineConfigurationId", m_mediaInsightsPipelineConfigurationId);

  }

  if(m_mediaInsightsPipelineConfigurationArnHasBeenSet)
  {
   payload.WithString("MediaInsightsPipelineConfigurationArn", m_mediaInsightsPipelineConfigurationArn);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
