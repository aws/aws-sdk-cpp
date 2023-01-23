/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ContentArtifactsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

ContentArtifactsConfiguration::ContentArtifactsConfiguration() : 
    m_state(ArtifactsState::NOT_SET),
    m_stateHasBeenSet(false),
    m_muxType(ContentMuxType::NOT_SET),
    m_muxTypeHasBeenSet(false)
{
}

ContentArtifactsConfiguration::ContentArtifactsConfiguration(JsonView jsonValue) : 
    m_state(ArtifactsState::NOT_SET),
    m_stateHasBeenSet(false),
    m_muxType(ContentMuxType::NOT_SET),
    m_muxTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ContentArtifactsConfiguration& ContentArtifactsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("State"))
  {
    m_state = ArtifactsStateMapper::GetArtifactsStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MuxType"))
  {
    m_muxType = ContentMuxTypeMapper::GetContentMuxTypeForName(jsonValue.GetString("MuxType"));

    m_muxTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ContentArtifactsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ArtifactsStateMapper::GetNameForArtifactsState(m_state));
  }

  if(m_muxTypeHasBeenSet)
  {
   payload.WithString("MuxType", ContentMuxTypeMapper::GetNameForContentMuxType(m_muxType));
  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
