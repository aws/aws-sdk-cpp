/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/RecordingStreamConfiguration.h>
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

RecordingStreamConfiguration::RecordingStreamConfiguration() : 
    m_streamArnHasBeenSet(false)
{
}

RecordingStreamConfiguration::RecordingStreamConfiguration(JsonView jsonValue) : 
    m_streamArnHasBeenSet(false)
{
  *this = jsonValue;
}

RecordingStreamConfiguration& RecordingStreamConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StreamArn"))
  {
    m_streamArn = jsonValue.GetString("StreamArn");

    m_streamArnHasBeenSet = true;
  }

  return *this;
}

JsonValue RecordingStreamConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_streamArnHasBeenSet)
  {
   payload.WithString("StreamArn", m_streamArn);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
