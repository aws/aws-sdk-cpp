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

#include <aws/storagegateway/model/SMBFileShareInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

SMBFileShareInfo::SMBFileShareInfo() : 
    m_fileShareARNHasBeenSet(false),
    m_fileShareIdHasBeenSet(false),
    m_fileShareStatusHasBeenSet(false),
    m_gatewayARNHasBeenSet(false),
    m_kMSEncrypted(false),
    m_kMSEncryptedHasBeenSet(false),
    m_kMSKeyHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_locationARNHasBeenSet(false),
    m_defaultStorageClassHasBeenSet(false),
    m_objectACL(ObjectACL::NOT_SET),
    m_objectACLHasBeenSet(false),
    m_readOnly(false),
    m_readOnlyHasBeenSet(false),
    m_guessMIMETypeEnabled(false),
    m_guessMIMETypeEnabledHasBeenSet(false),
    m_requesterPays(false),
    m_requesterPaysHasBeenSet(false),
    m_sMBACLEnabled(false),
    m_sMBACLEnabledHasBeenSet(false),
    m_adminUserListHasBeenSet(false),
    m_validUserListHasBeenSet(false),
    m_invalidUserListHasBeenSet(false),
    m_authenticationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

SMBFileShareInfo::SMBFileShareInfo(JsonView jsonValue) : 
    m_fileShareARNHasBeenSet(false),
    m_fileShareIdHasBeenSet(false),
    m_fileShareStatusHasBeenSet(false),
    m_gatewayARNHasBeenSet(false),
    m_kMSEncrypted(false),
    m_kMSEncryptedHasBeenSet(false),
    m_kMSKeyHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_locationARNHasBeenSet(false),
    m_defaultStorageClassHasBeenSet(false),
    m_objectACL(ObjectACL::NOT_SET),
    m_objectACLHasBeenSet(false),
    m_readOnly(false),
    m_readOnlyHasBeenSet(false),
    m_guessMIMETypeEnabled(false),
    m_guessMIMETypeEnabledHasBeenSet(false),
    m_requesterPays(false),
    m_requesterPaysHasBeenSet(false),
    m_sMBACLEnabled(false),
    m_sMBACLEnabledHasBeenSet(false),
    m_adminUserListHasBeenSet(false),
    m_validUserListHasBeenSet(false),
    m_invalidUserListHasBeenSet(false),
    m_authenticationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

SMBFileShareInfo& SMBFileShareInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FileShareARN"))
  {
    m_fileShareARN = jsonValue.GetString("FileShareARN");

    m_fileShareARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileShareId"))
  {
    m_fileShareId = jsonValue.GetString("FileShareId");

    m_fileShareIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileShareStatus"))
  {
    m_fileShareStatus = jsonValue.GetString("FileShareStatus");

    m_fileShareStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");

    m_gatewayARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KMSEncrypted"))
  {
    m_kMSEncrypted = jsonValue.GetBool("KMSEncrypted");

    m_kMSEncryptedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KMSKey"))
  {
    m_kMSKey = jsonValue.GetString("KMSKey");

    m_kMSKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = jsonValue.GetString("Role");

    m_roleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocationARN"))
  {
    m_locationARN = jsonValue.GetString("LocationARN");

    m_locationARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultStorageClass"))
  {
    m_defaultStorageClass = jsonValue.GetString("DefaultStorageClass");

    m_defaultStorageClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectACL"))
  {
    m_objectACL = ObjectACLMapper::GetObjectACLForName(jsonValue.GetString("ObjectACL"));

    m_objectACLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadOnly"))
  {
    m_readOnly = jsonValue.GetBool("ReadOnly");

    m_readOnlyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GuessMIMETypeEnabled"))
  {
    m_guessMIMETypeEnabled = jsonValue.GetBool("GuessMIMETypeEnabled");

    m_guessMIMETypeEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequesterPays"))
  {
    m_requesterPays = jsonValue.GetBool("RequesterPays");

    m_requesterPaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SMBACLEnabled"))
  {
    m_sMBACLEnabled = jsonValue.GetBool("SMBACLEnabled");

    m_sMBACLEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdminUserList"))
  {
    Array<JsonView> adminUserListJsonList = jsonValue.GetArray("AdminUserList");
    for(unsigned adminUserListIndex = 0; adminUserListIndex < adminUserListJsonList.GetLength(); ++adminUserListIndex)
    {
      m_adminUserList.push_back(adminUserListJsonList[adminUserListIndex].AsString());
    }
    m_adminUserListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidUserList"))
  {
    Array<JsonView> validUserListJsonList = jsonValue.GetArray("ValidUserList");
    for(unsigned validUserListIndex = 0; validUserListIndex < validUserListJsonList.GetLength(); ++validUserListIndex)
    {
      m_validUserList.push_back(validUserListJsonList[validUserListIndex].AsString());
    }
    m_validUserListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvalidUserList"))
  {
    Array<JsonView> invalidUserListJsonList = jsonValue.GetArray("InvalidUserList");
    for(unsigned invalidUserListIndex = 0; invalidUserListIndex < invalidUserListJsonList.GetLength(); ++invalidUserListIndex)
    {
      m_invalidUserList.push_back(invalidUserListJsonList[invalidUserListIndex].AsString());
    }
    m_invalidUserListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Authentication"))
  {
    m_authentication = jsonValue.GetString("Authentication");

    m_authenticationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue SMBFileShareInfo::Jsonize() const
{
  JsonValue payload;

  if(m_fileShareARNHasBeenSet)
  {
   payload.WithString("FileShareARN", m_fileShareARN);

  }

  if(m_fileShareIdHasBeenSet)
  {
   payload.WithString("FileShareId", m_fileShareId);

  }

  if(m_fileShareStatusHasBeenSet)
  {
   payload.WithString("FileShareStatus", m_fileShareStatus);

  }

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_kMSEncryptedHasBeenSet)
  {
   payload.WithBool("KMSEncrypted", m_kMSEncrypted);

  }

  if(m_kMSKeyHasBeenSet)
  {
   payload.WithString("KMSKey", m_kMSKey);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  if(m_locationARNHasBeenSet)
  {
   payload.WithString("LocationARN", m_locationARN);

  }

  if(m_defaultStorageClassHasBeenSet)
  {
   payload.WithString("DefaultStorageClass", m_defaultStorageClass);

  }

  if(m_objectACLHasBeenSet)
  {
   payload.WithString("ObjectACL", ObjectACLMapper::GetNameForObjectACL(m_objectACL));
  }

  if(m_readOnlyHasBeenSet)
  {
   payload.WithBool("ReadOnly", m_readOnly);

  }

  if(m_guessMIMETypeEnabledHasBeenSet)
  {
   payload.WithBool("GuessMIMETypeEnabled", m_guessMIMETypeEnabled);

  }

  if(m_requesterPaysHasBeenSet)
  {
   payload.WithBool("RequesterPays", m_requesterPays);

  }

  if(m_sMBACLEnabledHasBeenSet)
  {
   payload.WithBool("SMBACLEnabled", m_sMBACLEnabled);

  }

  if(m_adminUserListHasBeenSet)
  {
   Array<JsonValue> adminUserListJsonList(m_adminUserList.size());
   for(unsigned adminUserListIndex = 0; adminUserListIndex < adminUserListJsonList.GetLength(); ++adminUserListIndex)
   {
     adminUserListJsonList[adminUserListIndex].AsString(m_adminUserList[adminUserListIndex]);
   }
   payload.WithArray("AdminUserList", std::move(adminUserListJsonList));

  }

  if(m_validUserListHasBeenSet)
  {
   Array<JsonValue> validUserListJsonList(m_validUserList.size());
   for(unsigned validUserListIndex = 0; validUserListIndex < validUserListJsonList.GetLength(); ++validUserListIndex)
   {
     validUserListJsonList[validUserListIndex].AsString(m_validUserList[validUserListIndex]);
   }
   payload.WithArray("ValidUserList", std::move(validUserListJsonList));

  }

  if(m_invalidUserListHasBeenSet)
  {
   Array<JsonValue> invalidUserListJsonList(m_invalidUserList.size());
   for(unsigned invalidUserListIndex = 0; invalidUserListIndex < invalidUserListJsonList.GetLength(); ++invalidUserListIndex)
   {
     invalidUserListJsonList[invalidUserListIndex].AsString(m_invalidUserList[invalidUserListIndex]);
   }
   payload.WithArray("InvalidUserList", std::move(invalidUserListJsonList));

  }

  if(m_authenticationHasBeenSet)
  {
   payload.WithString("Authentication", m_authentication);

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
} // namespace StorageGateway
} // namespace Aws
