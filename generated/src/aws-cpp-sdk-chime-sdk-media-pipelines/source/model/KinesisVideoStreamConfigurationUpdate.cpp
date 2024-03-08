/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/KinesisVideoStreamConfigurationUpdate.h>
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

KinesisVideoStreamConfigurationUpdate::KinesisVideoStreamConfigurationUpdate() : 
    m_dataRetentionInHours(0),
    m_dataRetentionInHoursHasBeenSet(false)
{
}

KinesisVideoStreamConfigurationUpdate::KinesisVideoStreamConfigurationUpdate(JsonView jsonValue) : 
    m_dataRetentionInHours(0),
    m_dataRetentionInHoursHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisVideoStreamConfigurationUpdate& KinesisVideoStreamConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataRetentionInHours"))
  {
    m_dataRetentionInHours = jsonValue.GetInteger("DataRetentionInHours");

    m_dataRetentionInHoursHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisVideoStreamConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_dataRetentionInHoursHasBeenSet)
  {
   payload.WithInteger("DataRetentionInHours", m_dataRetentionInHours);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
