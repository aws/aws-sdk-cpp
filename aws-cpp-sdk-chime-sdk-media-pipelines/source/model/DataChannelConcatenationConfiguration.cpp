/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/DataChannelConcatenationConfiguration.h>
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

DataChannelConcatenationConfiguration::DataChannelConcatenationConfiguration() : 
    m_state(ArtifactsConcatenationState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

DataChannelConcatenationConfiguration::DataChannelConcatenationConfiguration(JsonView jsonValue) : 
    m_state(ArtifactsConcatenationState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

DataChannelConcatenationConfiguration& DataChannelConcatenationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("State"))
  {
    m_state = ArtifactsConcatenationStateMapper::GetArtifactsConcatenationStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue DataChannelConcatenationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ArtifactsConcatenationStateMapper::GetNameForArtifactsConcatenationState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
