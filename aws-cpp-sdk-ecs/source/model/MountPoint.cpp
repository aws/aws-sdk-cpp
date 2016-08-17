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
#include <aws/ecs/model/MountPoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

MountPoint::MountPoint() : 
    m_sourceVolumeHasBeenSet(false),
    m_containerPathHasBeenSet(false),
    m_readOnly(false),
    m_readOnlyHasBeenSet(false)
{
}

MountPoint::MountPoint(const JsonValue& jsonValue) : 
    m_sourceVolumeHasBeenSet(false),
    m_containerPathHasBeenSet(false),
    m_readOnly(false),
    m_readOnlyHasBeenSet(false)
{
  *this = jsonValue;
}

MountPoint& MountPoint::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("sourceVolume"))
  {
    m_sourceVolume = jsonValue.GetString("sourceVolume");

    m_sourceVolumeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerPath"))
  {
    m_containerPath = jsonValue.GetString("containerPath");

    m_containerPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("readOnly"))
  {
    m_readOnly = jsonValue.GetBool("readOnly");

    m_readOnlyHasBeenSet = true;
  }

  return *this;
}

JsonValue MountPoint::Jsonize() const
{
  JsonValue payload;

  if(m_sourceVolumeHasBeenSet)
  {
   payload.WithString("sourceVolume", m_sourceVolume);

  }

  if(m_containerPathHasBeenSet)
  {
   payload.WithString("containerPath", m_containerPath);

  }

  if(m_readOnlyHasBeenSet)
  {
   payload.WithBool("readOnly", m_readOnly);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws