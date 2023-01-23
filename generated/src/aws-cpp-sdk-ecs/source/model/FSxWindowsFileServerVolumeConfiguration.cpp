/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/FSxWindowsFileServerVolumeConfiguration.h>
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

FSxWindowsFileServerVolumeConfiguration::FSxWindowsFileServerVolumeConfiguration() : 
    m_fileSystemIdHasBeenSet(false),
    m_rootDirectoryHasBeenSet(false),
    m_authorizationConfigHasBeenSet(false)
{
}

FSxWindowsFileServerVolumeConfiguration::FSxWindowsFileServerVolumeConfiguration(JsonView jsonValue) : 
    m_fileSystemIdHasBeenSet(false),
    m_rootDirectoryHasBeenSet(false),
    m_authorizationConfigHasBeenSet(false)
{
  *this = jsonValue;
}

FSxWindowsFileServerVolumeConfiguration& FSxWindowsFileServerVolumeConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("authorizationConfig"))
  {
    m_authorizationConfig = jsonValue.GetObject("authorizationConfig");

    m_authorizationConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue FSxWindowsFileServerVolumeConfiguration::Jsonize() const
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

  if(m_authorizationConfigHasBeenSet)
  {
   payload.WithObject("authorizationConfig", m_authorizationConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
