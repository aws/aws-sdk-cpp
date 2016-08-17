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
#include <aws/ecs/model/HostVolumeProperties.h>
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

HostVolumeProperties::HostVolumeProperties() : 
    m_sourcePathHasBeenSet(false)
{
}

HostVolumeProperties::HostVolumeProperties(const JsonValue& jsonValue) : 
    m_sourcePathHasBeenSet(false)
{
  *this = jsonValue;
}

HostVolumeProperties& HostVolumeProperties::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("sourcePath"))
  {
    m_sourcePath = jsonValue.GetString("sourcePath");

    m_sourcePathHasBeenSet = true;
  }

  return *this;
}

JsonValue HostVolumeProperties::Jsonize() const
{
  JsonValue payload;

  if(m_sourcePathHasBeenSet)
  {
   payload.WithString("sourcePath", m_sourcePath);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws