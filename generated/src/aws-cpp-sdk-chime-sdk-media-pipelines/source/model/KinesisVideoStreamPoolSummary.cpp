/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/KinesisVideoStreamPoolSummary.h>
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

KinesisVideoStreamPoolSummary::KinesisVideoStreamPoolSummary() : 
    m_poolNameHasBeenSet(false),
    m_poolIdHasBeenSet(false),
    m_poolArnHasBeenSet(false)
{
}

KinesisVideoStreamPoolSummary::KinesisVideoStreamPoolSummary(JsonView jsonValue) : 
    m_poolNameHasBeenSet(false),
    m_poolIdHasBeenSet(false),
    m_poolArnHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisVideoStreamPoolSummary& KinesisVideoStreamPoolSummary::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("PoolArn"))
  {
    m_poolArn = jsonValue.GetString("PoolArn");

    m_poolArnHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisVideoStreamPoolSummary::Jsonize() const
{
  JsonValue payload;

  if(m_poolNameHasBeenSet)
  {
   payload.WithString("PoolName", m_poolName);

  }

  if(m_poolIdHasBeenSet)
  {
   payload.WithString("PoolId", m_poolId);

  }

  if(m_poolArnHasBeenSet)
  {
   payload.WithString("PoolArn", m_poolArn);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
