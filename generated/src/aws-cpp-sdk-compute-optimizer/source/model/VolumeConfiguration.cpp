/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/VolumeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

VolumeConfiguration::VolumeConfiguration() : 
    m_volumeTypeHasBeenSet(false),
    m_volumeSize(0),
    m_volumeSizeHasBeenSet(false),
    m_volumeBaselineIOPS(0),
    m_volumeBaselineIOPSHasBeenSet(false),
    m_volumeBurstIOPS(0),
    m_volumeBurstIOPSHasBeenSet(false),
    m_volumeBaselineThroughput(0),
    m_volumeBaselineThroughputHasBeenSet(false),
    m_volumeBurstThroughput(0),
    m_volumeBurstThroughputHasBeenSet(false),
    m_rootVolume(false),
    m_rootVolumeHasBeenSet(false)
{
}

VolumeConfiguration::VolumeConfiguration(JsonView jsonValue) : 
    m_volumeTypeHasBeenSet(false),
    m_volumeSize(0),
    m_volumeSizeHasBeenSet(false),
    m_volumeBaselineIOPS(0),
    m_volumeBaselineIOPSHasBeenSet(false),
    m_volumeBurstIOPS(0),
    m_volumeBurstIOPSHasBeenSet(false),
    m_volumeBaselineThroughput(0),
    m_volumeBaselineThroughputHasBeenSet(false),
    m_volumeBurstThroughput(0),
    m_volumeBurstThroughputHasBeenSet(false),
    m_rootVolume(false),
    m_rootVolumeHasBeenSet(false)
{
  *this = jsonValue;
}

VolumeConfiguration& VolumeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("volumeType"))
  {
    m_volumeType = jsonValue.GetString("volumeType");

    m_volumeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumeSize"))
  {
    m_volumeSize = jsonValue.GetInteger("volumeSize");

    m_volumeSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumeBaselineIOPS"))
  {
    m_volumeBaselineIOPS = jsonValue.GetInteger("volumeBaselineIOPS");

    m_volumeBaselineIOPSHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumeBurstIOPS"))
  {
    m_volumeBurstIOPS = jsonValue.GetInteger("volumeBurstIOPS");

    m_volumeBurstIOPSHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumeBaselineThroughput"))
  {
    m_volumeBaselineThroughput = jsonValue.GetInteger("volumeBaselineThroughput");

    m_volumeBaselineThroughputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumeBurstThroughput"))
  {
    m_volumeBurstThroughput = jsonValue.GetInteger("volumeBurstThroughput");

    m_volumeBurstThroughputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rootVolume"))
  {
    m_rootVolume = jsonValue.GetBool("rootVolume");

    m_rootVolumeHasBeenSet = true;
  }

  return *this;
}

JsonValue VolumeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_volumeTypeHasBeenSet)
  {
   payload.WithString("volumeType", m_volumeType);

  }

  if(m_volumeSizeHasBeenSet)
  {
   payload.WithInteger("volumeSize", m_volumeSize);

  }

  if(m_volumeBaselineIOPSHasBeenSet)
  {
   payload.WithInteger("volumeBaselineIOPS", m_volumeBaselineIOPS);

  }

  if(m_volumeBurstIOPSHasBeenSet)
  {
   payload.WithInteger("volumeBurstIOPS", m_volumeBurstIOPS);

  }

  if(m_volumeBaselineThroughputHasBeenSet)
  {
   payload.WithInteger("volumeBaselineThroughput", m_volumeBaselineThroughput);

  }

  if(m_volumeBurstThroughputHasBeenSet)
  {
   payload.WithInteger("volumeBurstThroughput", m_volumeBurstThroughput);

  }

  if(m_rootVolumeHasBeenSet)
  {
   payload.WithBool("rootVolume", m_rootVolume);

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
