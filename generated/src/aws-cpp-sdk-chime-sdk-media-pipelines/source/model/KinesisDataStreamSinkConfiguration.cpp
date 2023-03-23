/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/KinesisDataStreamSinkConfiguration.h>
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

KinesisDataStreamSinkConfiguration::KinesisDataStreamSinkConfiguration() : 
    m_insightsTargetHasBeenSet(false)
{
}

KinesisDataStreamSinkConfiguration::KinesisDataStreamSinkConfiguration(JsonView jsonValue) : 
    m_insightsTargetHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisDataStreamSinkConfiguration& KinesisDataStreamSinkConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InsightsTarget"))
  {
    m_insightsTarget = jsonValue.GetString("InsightsTarget");

    m_insightsTargetHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisDataStreamSinkConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_insightsTargetHasBeenSet)
  {
   payload.WithString("InsightsTarget", m_insightsTarget);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
