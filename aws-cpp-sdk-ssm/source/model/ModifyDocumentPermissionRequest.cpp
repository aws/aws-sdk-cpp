﻿/*
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
    m_accountIdsToRemoveHasBeenSet(false)
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
   Array<JsonValue> accountIdsToAddJsonList(m_accountIdsToAdd.size());
   for(unsigned accountIdsToAddIndex = 0; accountIdsToAddIndex < accountIdsToAddJsonList.GetLength(); ++accountIdsToAddIndex)
   {
     accountIdsToAddJsonList[accountIdsToAddIndex].AsString(m_accountIdsToAdd[accountIdsToAddIndex]);
   }
   payload.WithArray("AccountIdsToAdd", std::move(accountIdsToAddJsonList));

  }

  if(m_accountIdsToRemoveHasBeenSet)
  {
   Array<JsonValue> accountIdsToRemoveJsonList(m_accountIdsToRemove.size());
   for(unsigned accountIdsToRemoveIndex = 0; accountIdsToRemoveIndex < accountIdsToRemoveJsonList.GetLength(); ++accountIdsToRemoveIndex)
   {
     accountIdsToRemoveJsonList[accountIdsToRemoveIndex].AsString(m_accountIdsToRemove[accountIdsToRemoveIndex]);
   }
   payload.WithArray("AccountIdsToRemove", std::move(accountIdsToRemoveJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ModifyDocumentPermissionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.ModifyDocumentPermission"));
  return headers;

}



