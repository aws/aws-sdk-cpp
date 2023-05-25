/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/LiveConnectorSinkConfiguration.h>
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

LiveConnectorSinkConfiguration::LiveConnectorSinkConfiguration() : 
    m_sinkType(LiveConnectorSinkType::NOT_SET),
    m_sinkTypeHasBeenSet(false),
    m_rTMPConfigurationHasBeenSet(false)
{
}

LiveConnectorSinkConfiguration::LiveConnectorSinkConfiguration(JsonView jsonValue) : 
    m_sinkType(LiveConnectorSinkType::NOT_SET),
    m_sinkTypeHasBeenSet(false),
    m_rTMPConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

LiveConnectorSinkConfiguration& LiveConnectorSinkConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SinkType"))
  {
    m_sinkType = LiveConnectorSinkTypeMapper::GetLiveConnectorSinkTypeForName(jsonValue.GetString("SinkType"));

    m_sinkTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RTMPConfiguration"))
  {
    m_rTMPConfiguration = jsonValue.GetObject("RTMPConfiguration");

    m_rTMPConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue LiveConnectorSinkConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_sinkTypeHasBeenSet)
  {
   payload.WithString("SinkType", LiveConnectorSinkTypeMapper::GetNameForLiveConnectorSinkType(m_sinkType));
  }

  if(m_rTMPConfigurationHasBeenSet)
  {
   payload.WithObject("RTMPConfiguration", m_rTMPConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
