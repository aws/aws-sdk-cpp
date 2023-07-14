/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/VolumeSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

VolumeSpecification::VolumeSpecification() : 
    m_volumeTypeHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_sizeInGB(0),
    m_sizeInGBHasBeenSet(false)
{
}

VolumeSpecification::VolumeSpecification(JsonView jsonValue) : 
    m_volumeTypeHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_sizeInGB(0),
    m_sizeInGBHasBeenSet(false)
{
  *this = jsonValue;
}

VolumeSpecification& VolumeSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VolumeType"))
  {
    m_volumeType = jsonValue.GetString("VolumeType");

    m_volumeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Iops"))
  {
    m_iops = jsonValue.GetInteger("Iops");

    m_iopsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizeInGB"))
  {
    m_sizeInGB = jsonValue.GetInteger("SizeInGB");

    m_sizeInGBHasBeenSet = true;
  }

  return *this;
}

JsonValue VolumeSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_volumeTypeHasBeenSet)
  {
   payload.WithString("VolumeType", m_volumeType);

  }

  if(m_iopsHasBeenSet)
  {
   payload.WithInteger("Iops", m_iops);

  }

  if(m_sizeInGBHasBeenSet)
  {
   payload.WithInteger("SizeInGB", m_sizeInGB);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
