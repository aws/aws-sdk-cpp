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
#include <aws/workspaces/model/WorkspaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

WorkspaceRequest::WorkspaceRequest() : 
    m_directoryIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_volumeEncryptionKeyHasBeenSet(false),
    m_userVolumeEncryptionEnabled(false),
    m_userVolumeEncryptionEnabledHasBeenSet(false),
    m_rootVolumeEncryptionEnabled(false),
    m_rootVolumeEncryptionEnabledHasBeenSet(false),
    m_workspacePropertiesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

WorkspaceRequest::WorkspaceRequest(const JsonValue& jsonValue) : 
    m_directoryIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_volumeEncryptionKeyHasBeenSet(false),
    m_userVolumeEncryptionEnabled(false),
    m_userVolumeEncryptionEnabledHasBeenSet(false),
    m_rootVolumeEncryptionEnabled(false),
    m_rootVolumeEncryptionEnabledHasBeenSet(false),
    m_workspacePropertiesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

WorkspaceRequest& WorkspaceRequest::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");

    m_directoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserName"))
  {
    m_userName = jsonValue.GetString("UserName");

    m_userNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BundleId"))
  {
    m_bundleId = jsonValue.GetString("BundleId");

    m_bundleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeEncryptionKey"))
  {
    m_volumeEncryptionKey = jsonValue.GetString("VolumeEncryptionKey");

    m_volumeEncryptionKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserVolumeEncryptionEnabled"))
  {
    m_userVolumeEncryptionEnabled = jsonValue.GetBool("UserVolumeEncryptionEnabled");

    m_userVolumeEncryptionEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RootVolumeEncryptionEnabled"))
  {
    m_rootVolumeEncryptionEnabled = jsonValue.GetBool("RootVolumeEncryptionEnabled");

    m_rootVolumeEncryptionEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkspaceProperties"))
  {
    m_workspaceProperties = jsonValue.GetObject("WorkspaceProperties");

    m_workspacePropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Array<JsonValue> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkspaceRequest::Jsonize() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

  }

  if(m_bundleIdHasBeenSet)
  {
   payload.WithString("BundleId", m_bundleId);

  }

  if(m_volumeEncryptionKeyHasBeenSet)
  {
   payload.WithString("VolumeEncryptionKey", m_volumeEncryptionKey);

  }

  if(m_userVolumeEncryptionEnabledHasBeenSet)
  {
   payload.WithBool("UserVolumeEncryptionEnabled", m_userVolumeEncryptionEnabled);

  }

  if(m_rootVolumeEncryptionEnabledHasBeenSet)
  {
   payload.WithBool("RootVolumeEncryptionEnabled", m_rootVolumeEncryptionEnabled);

  }

  if(m_workspacePropertiesHasBeenSet)
  {
   payload.WithObject("WorkspaceProperties", m_workspaceProperties.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws