/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ModifyDocumentPermissionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ModifyDocumentPermissionRequest::ModifyDocumentPermissionRequest() : 
    m_nameHasBeenSet(false),
    m_permissionType(DocumentPermissionType::NOT_SET),
    m_permissionTypeHasBeenSet(false),
    m_accountIdsToAddHasBeenSet(false),
    m_accountIdsToRemoveHasBeenSet(false),
    m_sharedDocumentVersionHasBeenSet(false)
{
}

Aws::String ModifyDocumentPermissionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_permissionTypeHasBeenSet)
  {
   payload.WithString("PermissionType", DocumentPermissionTypeMapper::GetNameForDocumentPermissionType(m_permissionType));
  }

  if(m_accountIdsToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountIdsToAddJsonList(m_accountIdsToAdd.size());
   for(unsigned accountIdsToAddIndex = 0; accountIdsToAddIndex < accountIdsToAddJsonList.GetLength(); ++accountIdsToAddIndex)
   {
     accountIdsToAddJsonList[accountIdsToAddIndex].AsString(m_accountIdsToAdd[accountIdsToAddIndex]);
   }
   payload.WithArray("AccountIdsToAdd", std::move(accountIdsToAddJsonList));

  }

  if(m_accountIdsToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountIdsToRemoveJsonList(m_accountIdsToRemove.size());
   for(unsigned accountIdsToRemoveIndex = 0; accountIdsToRemoveIndex < accountIdsToRemoveJsonList.GetLength(); ++accountIdsToRemoveIndex)
   {
     accountIdsToRemoveJsonList[accountIdsToRemoveIndex].AsString(m_accountIdsToRemove[accountIdsToRemoveIndex]);
   }
   payload.WithArray("AccountIdsToRemove", std::move(accountIdsToRemoveJsonList));

  }

  if(m_sharedDocumentVersionHasBeenSet)
  {
   payload.WithString("SharedDocumentVersion", m_sharedDocumentVersion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ModifyDocumentPermissionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.ModifyDocumentPermission"));
  return headers;

}




