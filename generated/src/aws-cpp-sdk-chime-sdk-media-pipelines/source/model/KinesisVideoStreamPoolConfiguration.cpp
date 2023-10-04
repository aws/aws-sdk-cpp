/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/KinesisVideoStreamPoolConfiguration.h>
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

KinesisVideoStreamPoolConfiguration::KinesisVideoStreamPoolConfiguration() : 
    m_poolArnHasBeenSet(false),
    m_poolNameHasBeenSet(false),
    m_poolIdHasBeenSet(false),
    m_poolStatus(KinesisVideoStreamPoolStatus::NOT_SET),
    m_poolStatusHasBeenSet(false),
    m_poolSize(0),
    m_poolSizeHasBeenSet(false),
    m_streamConfigurationHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false)
{
}

KinesisVideoStreamPoolConfiguration::KinesisVideoStreamPoolConfiguration(JsonView jsonValue) : 
    m_poolArnHasBeenSet(false),
    m_poolNameHasBeenSet(false),
    m_poolIdHasBeenSet(false),
    m_poolStatus(KinesisVideoStreamPoolStatus::NOT_SET),
    m_poolStatusHasBeenSet(false),
    m_poolSize(0),
    m_poolSizeHasBeenSet(false),
    m_streamConfigurationHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisVideoStreamPoolConfiguration& KinesisVideoStreamPoolConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PoolArn"))
  {
    m_poolArn = jsonValue.GetString("PoolArn");

    m_poolArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PoolName"))
  {
    m_poolName = jsonValue.GetString("PoolName");

    m_poolNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PoolId"))
  {
    m_poolId = jsonValue.GetString("PoolId");

    m_poolIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PoolStatus"))
  {
    m_poolStatus = KinesisVideoStreamPoolStatusMapper::GetKinesisVideoStreamPoolStatusForName(jsonValue.GetString("PoolStatus"));

    m_poolStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PoolSize"))
  {
    m_poolSize = jsonValue.GetInteger("PoolSize");

    m_poolSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamConfiguration"))
  {
    m_streamConfiguration = jsonValue.GetObject("StreamConfiguration");

    m_streamConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetString("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedTimestamp"))
  {
    m_updatedTimestamp = jsonValue.GetString("UpdatedTimestamp");

    m_updatedTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisVideoStreamPoolConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_poolArnHasBeenSet)
  {
   payload.WithString("PoolArn", m_poolArn);

  }

  if(m_poolNameHasBeenSet)
  {
   payload.WithString("PoolName", m_poolName);

  }

  if(m_poolIdHasBeenSet)
  {
   payload.WithString("PoolId", m_poolId);

  }

  if(m_poolStatusHasBeenSet)
  {
   payload.WithString("PoolStatus", KinesisVideoStreamPoolStatusMapper::GetNameForKinesisVideoStreamPoolStatus(m_poolStatus));
  }

  if(m_poolSizeHasBeenSet)
  {
   payload.WithInteger("PoolSize", m_poolSize);

  }

  if(m_streamConfigurationHasBeenSet)
  {
   payload.WithObject("StreamConfiguration", m_streamConfiguration.Jsonize());

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithString("CreatedTimestamp", m_createdTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedTimestampHasBeenSet)
  {
   payload.WithString("UpdatedTimestamp", m_updatedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
