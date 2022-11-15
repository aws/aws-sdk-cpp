/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/ChimeSdkMeetingConcatenationConfiguration.h>
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

ChimeSdkMeetingConcatenationConfiguration::ChimeSdkMeetingConcatenationConfiguration() : 
    m_artifactsConfigurationHasBeenSet(false)
{
}

ChimeSdkMeetingConcatenationConfiguration::ChimeSdkMeetingConcatenationConfiguration(JsonView jsonValue) : 
    m_artifactsConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ChimeSdkMeetingConcatenationConfiguration& ChimeSdkMeetingConcatenationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ArtifactsConfiguration"))
  {
    m_artifactsConfiguration = jsonValue.GetObject("ArtifactsConfiguration");

    m_artifactsConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ChimeSdkMeetingConcatenationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_artifactsConfigurationHasBeenSet)
  {
   payload.WithObject("ArtifactsConfiguration", m_artifactsConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
