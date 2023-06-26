/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/CreateComputerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateComputerRequest::CreateComputerRequest() : 
    m_directoryIdHasBeenSet(false),
    m_computerNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_organizationalUnitDistinguishedNameHasBeenSet(false),
    m_computerAttributesHasBeenSet(false)
{
}

Aws::String CreateComputerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_computerNameHasBeenSet)
  {
   payload.WithString("ComputerName", m_computerName);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("Password", m_password);

  }

  if(m_organizationalUnitDistinguishedNameHasBeenSet)
  {
   payload.WithString("OrganizationalUnitDistinguishedName", m_organizationalUnitDistinguishedName);

  }

  if(m_computerAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> computerAttributesJsonList(m_computerAttributes.size());
   for(unsigned computerAttributesIndex = 0; computerAttributesIndex < computerAttributesJsonList.GetLength(); ++computerAttributesIndex)
   {
     computerAttributesJsonList[computerAttributesIndex].AsObject(m_computerAttributes[computerAttributesIndex].Jsonize());
   }
   payload.WithArray("ComputerAttributes", std::move(computerAttributesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateComputerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.CreateComputer"));
  return headers;

}




