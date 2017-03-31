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
#include <aws/storagegateway/model/NFSFileShareInfo.h>
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

NFSFileShareInfo::NFSFileShareInfo() : 
    m_nFSFileShareDefaultsHasBeenSet(false),
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
    m_clientListHasBeenSet(false),
    m_squashHasBeenSet(false),
    m_readOnly(false),
    m_readOnlyHasBeenSet(false)
{
}

NFSFileShareInfo::NFSFileShareInfo(const JsonValue& jsonValue) : 
    m_nFSFileShareDefaultsHasBeenSet(false),
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
    m_clientListHasBeenSet(false),
    m_squashHasBeenSet(false),
    m_readOnly(false),
    m_readOnlyHasBeenSet(false)
{
  *this = jsonValue;
}

NFSFileShareInfo& NFSFileShareInfo::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("NFSFileShareDefaults"))
  {
    m_nFSFileShareDefaults = jsonValue.GetObject("NFSFileShareDefaults");

    m_nFSFileShareDefaultsHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("ClientList"))
  {
    Array<JsonValue> clientListJsonList = jsonValue.GetArray("ClientList");
    for(unsigned clientListIndex = 0; clientListIndex < clientListJsonList.GetLength(); ++clientListIndex)
    {
      m_clientList.push_back(clientListJsonList[clientListIndex].AsString());
    }
    m_clientListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Squash"))
  {
    m_squash = jsonValue.GetString("Squash");

    m_squashHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadOnly"))
  {
    m_readOnly = jsonValue.GetBool("ReadOnly");

    m_readOnlyHasBeenSet = true;
  }

  return *this;
}

JsonValue NFSFileShareInfo::Jsonize() const
{
  JsonValue payload;

  if(m_nFSFileShareDefaultsHasBeenSet)
  {
   payload.WithObject("NFSFileShareDefaults", m_nFSFileShareDefaults.Jsonize());

  }

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

  if(m_clientListHasBeenSet)
  {
   Array<JsonValue> clientListJsonList(m_clientList.size());
   for(unsigned clientListIndex = 0; clientListIndex < clientListJsonList.GetLength(); ++clientListIndex)
   {
     clientListJsonList[clientListIndex].AsString(m_clientList[clientListIndex]);
   }
   payload.WithArray("ClientList", std::move(clientListJsonList));

  }

  if(m_squashHasBeenSet)
  {
   payload.WithString("Squash", m_squash);

  }

  if(m_readOnlyHasBeenSet)
  {
   payload.WithBool("ReadOnly", m_readOnly);

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws