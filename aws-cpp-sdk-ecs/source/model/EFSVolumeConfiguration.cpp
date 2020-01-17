/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/ecs/model/EFSVolumeConfiguration.h>
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

EFSVolumeConfiguration::EFSVolumeConfiguration() : 
    m_fileSystemIdHasBeenSet(false),
    m_rootDirectoryHasBeenSet(false)
{
}

EFSVolumeConfiguration::EFSVolumeConfiguration(JsonView jsonValue) : 
    m_fileSystemIdHasBeenSet(false),
    m_rootDirectoryHasBeenSet(false)
{
  *this = jsonValue;
}

EFSVolumeConfiguration& EFSVolumeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileSystemId"))
  {
    m_fileSystemId = jsonValue.GetString("fileSystemId");

    m_fileSystemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rootDirectory"))
  {
    m_rootDirectory = jsonValue.GetString("rootDirectory");

    m_rootDirectoryHasBeenSet = true;
  }

  return *this;
}

JsonValue EFSVolumeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_fileSystemIdHasBeenSet)
  {
   payload.WithString("fileSystemId", m_fileSystemId);

  }

  if(m_rootDirectoryHasBeenSet)
  {
   payload.WithString("rootDirectory", m_rootDirectory);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
