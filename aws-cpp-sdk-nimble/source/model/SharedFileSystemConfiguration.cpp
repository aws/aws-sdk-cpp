/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/SharedFileSystemConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

SharedFileSystemConfiguration::SharedFileSystemConfiguration() : 
    m_endpointHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_linuxMountPointHasBeenSet(false),
    m_shareNameHasBeenSet(false),
    m_windowsMountDriveHasBeenSet(false)
{
}

SharedFileSystemConfiguration::SharedFileSystemConfiguration(JsonView jsonValue) : 
    m_endpointHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_linuxMountPointHasBeenSet(false),
    m_shareNameHasBeenSet(false),
    m_windowsMountDriveHasBeenSet(false)
{
  *this = jsonValue;
}

SharedFileSystemConfiguration& SharedFileSystemConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetString("endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileSystemId"))
  {
    m_fileSystemId = jsonValue.GetString("fileSystemId");

    m_fileSystemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("linuxMountPoint"))
  {
    m_linuxMountPoint = jsonValue.GetString("linuxMountPoint");

    m_linuxMountPointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shareName"))
  {
    m_shareName = jsonValue.GetString("shareName");

    m_shareNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("windowsMountDrive"))
  {
    m_windowsMountDrive = jsonValue.GetString("windowsMountDrive");

    m_windowsMountDriveHasBeenSet = true;
  }

  return *this;
}

JsonValue SharedFileSystemConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_endpointHasBeenSet)
  {
   payload.WithString("endpoint", m_endpoint);

  }

  if(m_fileSystemIdHasBeenSet)
  {
   payload.WithString("fileSystemId", m_fileSystemId);

  }

  if(m_linuxMountPointHasBeenSet)
  {
   payload.WithString("linuxMountPoint", m_linuxMountPoint);

  }

  if(m_shareNameHasBeenSet)
  {
   payload.WithString("shareName", m_shareName);

  }

  if(m_windowsMountDriveHasBeenSet)
  {
   payload.WithString("windowsMountDrive", m_windowsMountDrive);

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
