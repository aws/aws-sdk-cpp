/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/LiveConnectorSourceConfiguration.h>
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

LiveConnectorSourceConfiguration::LiveConnectorSourceConfiguration() : 
    m_sourceType(LiveConnectorSourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_chimeSdkMeetingLiveConnectorConfigurationHasBeenSet(false)
{
}

LiveConnectorSourceConfiguration::LiveConnectorSourceConfiguration(JsonView jsonValue) : 
    m_sourceType(LiveConnectorSourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_chimeSdkMeetingLiveConnectorConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

LiveConnectorSourceConfiguration& LiveConnectorSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = LiveConnectorSourceTypeMapper::GetLiveConnectorSourceTypeForName(jsonValue.GetString("SourceType"));

    m_sourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChimeSdkMeetingLiveConnectorConfiguration"))
  {
    m_chimeSdkMeetingLiveConnectorConfiguration = jsonValue.GetObject("ChimeSdkMeetingLiveConnectorConfiguration");

    m_chimeSdkMeetingLiveConnectorConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue LiveConnectorSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", LiveConnectorSourceTypeMapper::GetNameForLiveConnectorSourceType(m_sourceType));
  }

  if(m_chimeSdkMeetingLiveConnectorConfigurationHasBeenSet)
  {
   payload.WithObject("ChimeSdkMeetingLiveConnectorConfiguration", m_chimeSdkMeetingLiveConnectorConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
