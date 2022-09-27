/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/ContentConcatenationConfiguration.h>
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

ContentConcatenationConfiguration::ContentConcatenationConfiguration() : 
    m_state(ArtifactsConcatenationState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

ContentConcatenationConfiguration::ContentConcatenationConfiguration(JsonView jsonValue) : 
    m_state(ArtifactsConcatenationState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

ContentConcatenationConfiguration& ContentConcatenationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("State"))
  {
    m_state = ArtifactsConcatenationStateMapper::GetArtifactsConcatenationStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue ContentConcatenationConfiguration::Jsonize() const
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
