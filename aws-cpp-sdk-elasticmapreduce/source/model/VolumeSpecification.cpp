/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

VolumeSpecification::VolumeSpecification(const JsonValue& jsonValue) : 
    m_volumeTypeHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_sizeInGB(0),
    m_sizeInGBHasBeenSet(false)
{
  *this = jsonValue;
}

VolumeSpecification& VolumeSpecification::operator =(const JsonValue& jsonValue)
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