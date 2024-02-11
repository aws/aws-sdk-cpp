/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/KinesisVideoStreamConfiguration.h>
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

KinesisVideoStreamConfiguration::KinesisVideoStreamConfiguration() : 
    m_regionHasBeenSet(false),
    m_dataRetentionInHours(0),
    m_dataRetentionInHoursHasBeenSet(false)
{
}

KinesisVideoStreamConfiguration::KinesisVideoStreamConfiguration(JsonView jsonValue) : 
    m_regionHasBeenSet(false),
    m_dataRetentionInHours(0),
    m_dataRetentionInHoursHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisVideoStreamConfiguration& KinesisVideoStreamConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataRetentionInHours"))
  {
    m_dataRetentionInHours = jsonValue.GetInteger("DataRetentionInHours");

    m_dataRetentionInHoursHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisVideoStreamConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_dataRetentionInHoursHasBeenSet)
  {
   payload.WithInteger("DataRetentionInHours", m_dataRetentionInHours);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
