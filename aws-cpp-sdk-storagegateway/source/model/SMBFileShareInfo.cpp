/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_accessBasedEnumeration(false),
    m_accessBasedEnumerationHasBeenSet(false),
    m_adminUserListHasBeenSet(false),
    m_validUserListHasBeenSet(false),
    m_invalidUserListHasBeenSet(false),
    m_auditDestinationARNHasBeenSet(false),
    m_authenticationHasBeenSet(false),
    m_caseSensitivity(CaseSensitivity::NOT_SET),
    m_caseSensitivityHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_fileShareNameHasBeenSet(false),
    m_cacheAttributesHasBeenSet(false),
    m_notificationPolicyHasBeenSet(false),
    m_vPCEndpointDNSNameHasBeenSet(false),
    m_bucketRegionHasBeenSet(false),
    m_oplocksEnabled(false),
    m_oplocksEnabledHasBeenSet(false)
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
    m_accessBasedEnumeration(false),
    m_accessBasedEnumerationHasBeenSet(false),
    m_adminUserListHasBeenSet(false),
    m_validUserListHasBeenSet(false),
    m_invalidUserListHasBeenSet(false),
    m_auditDestinationARNHasBeenSet(false),
    m_authenticationHasBeenSet(false),
    m_caseSensitivity(CaseSensitivity::NOT_SET),
    m_caseSensitivityHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_fileShareNameHasBeenSet(false),
    m_cacheAttributesHasBeenSet(false),
    m_notificationPolicyHasBeenSet(false),
    m_vPCEndpointDNSNameHasBeenSet(false),
    m_bucketRegionHasBeenSet(false),
    m_oplocksEnabled(false),
    m_oplocksEnabledHasBeenSet(false)
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

  if(jsonValue.ValueExists("AccessBasedEnumeration"))
  {
    m_accessBasedEnumeration = jsonValue.GetBool("AccessBasedEnumeration");

    m_accessBasedEnumerationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdminUserList"))
  {
    Aws::Utils::Array<JsonView> adminUserListJsonList = jsonValue.GetArray("AdminUserList");
    for(unsigned adminUserListIndex = 0; adminUserListIndex < adminUserListJsonList.GetLength(); ++adminUserListIndex)
    {
      m_adminUserList.push_back(adminUserListJsonList[adminUserListIndex].AsString());
    }
    m_adminUserListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidUserList"))
  {
    Aws::Utils::Array<JsonView> validUserListJsonList = jsonValue.GetArray("ValidUserList");
    for(unsigned validUserListIndex = 0; validUserListIndex < validUserListJsonList.GetLength(); ++validUserListIndex)
    {
      m_validUserList.push_back(validUserListJsonList[validUserListIndex].AsString());
    }
    m_validUserListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvalidUserList"))
  {
    Aws::Utils::Array<JsonView> invalidUserListJsonList = jsonValue.GetArray("InvalidUserList");
    for(unsigned invalidUserListIndex = 0; invalidUserListIndex < invalidUserListJsonList.GetLength(); ++invalidUserListIndex)
    {
      m_invalidUserList.push_back(invalidUserListJsonList[invalidUserListIndex].AsString());
    }
    m_invalidUserListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuditDestinationARN"))
  {
    m_auditDestinationARN = jsonValue.GetString("AuditDestinationARN");

    m_auditDestinationARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Authentication"))
  {
    m_authentication = jsonValue.GetString("Authentication");

    m_authenticationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CaseSensitivity"))
  {
    m_caseSensitivity = CaseSensitivityMapper::GetCaseSensitivityForName(jsonValue.GetString("CaseSensitivity"));

    m_caseSensitivityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileShareName"))
  {
    m_fileShareName = jsonValue.GetString("FileShareName");

    m_fileShareNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CacheAttributes"))
  {
    m_cacheAttributes = jsonValue.GetObject("CacheAttributes");

    m_cacheAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotificationPolicy"))
  {
    m_notificationPolicy = jsonValue.GetString("NotificationPolicy");

    m_notificationPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VPCEndpointDNSName"))
  {
    m_vPCEndpointDNSName = jsonValue.GetString("VPCEndpointDNSName");

    m_vPCEndpointDNSNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BucketRegion"))
  {
    m_bucketRegion = jsonValue.GetString("BucketRegion");

    m_bucketRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OplocksEnabled"))
  {
    m_oplocksEnabled = jsonValue.GetBool("OplocksEnabled");

    m_oplocksEnabledHasBeenSet = true;
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

  if(m_accessBasedEnumerationHasBeenSet)
  {
   payload.WithBool("AccessBasedEnumeration", m_accessBasedEnumeration);

  }

  if(m_adminUserListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> adminUserListJsonList(m_adminUserList.size());
   for(unsigned adminUserListIndex = 0; adminUserListIndex < adminUserListJsonList.GetLength(); ++adminUserListIndex)
   {
     adminUserListJsonList[adminUserListIndex].AsString(m_adminUserList[adminUserListIndex]);
   }
   payload.WithArray("AdminUserList", std::move(adminUserListJsonList));

  }

  if(m_validUserListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> validUserListJsonList(m_validUserList.size());
   for(unsigned validUserListIndex = 0; validUserListIndex < validUserListJsonList.GetLength(); ++validUserListIndex)
   {
     validUserListJsonList[validUserListIndex].AsString(m_validUserList[validUserListIndex]);
   }
   payload.WithArray("ValidUserList", std::move(validUserListJsonList));

  }

  if(m_invalidUserListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> invalidUserListJsonList(m_invalidUserList.size());
   for(unsigned invalidUserListIndex = 0; invalidUserListIndex < invalidUserListJsonList.GetLength(); ++invalidUserListIndex)
   {
     invalidUserListJsonList[invalidUserListIndex].AsString(m_invalidUserList[invalidUserListIndex]);
   }
   payload.WithArray("InvalidUserList", std::move(invalidUserListJsonList));

  }

  if(m_auditDestinationARNHasBeenSet)
  {
   payload.WithString("AuditDestinationARN", m_auditDestinationARN);

  }

  if(m_authenticationHasBeenSet)
  {
   payload.WithString("Authentication", m_authentication);

  }

  if(m_caseSensitivityHasBeenSet)
  {
   payload.WithString("CaseSensitivity", CaseSensitivityMapper::GetNameForCaseSensitivity(m_caseSensitivity));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_fileShareNameHasBeenSet)
  {
   payload.WithString("FileShareName", m_fileShareName);

  }

  if(m_cacheAttributesHasBeenSet)
  {
   payload.WithObject("CacheAttributes", m_cacheAttributes.Jsonize());

  }

  if(m_notificationPolicyHasBeenSet)
  {
   payload.WithString("NotificationPolicy", m_notificationPolicy);

  }

  if(m_vPCEndpointDNSNameHasBeenSet)
  {
   payload.WithString("VPCEndpointDNSName", m_vPCEndpointDNSName);

  }

  if(m_bucketRegionHasBeenSet)
  {
   payload.WithString("BucketRegion", m_bucketRegion);

  }

  if(m_oplocksEnabledHasBeenSet)
  {
   payload.WithBool("OplocksEnabled", m_oplocksEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
