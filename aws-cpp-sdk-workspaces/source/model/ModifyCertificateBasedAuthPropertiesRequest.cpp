/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ModifyCertificateBasedAuthPropertiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ModifyCertificateBasedAuthPropertiesRequest::ModifyCertificateBasedAuthPropertiesRequest() : 
    m_resourceIdHasBeenSet(false),
    m_certificateBasedAuthPropertiesHasBeenSet(false),
    m_propertiesToDeleteHasBeenSet(false)
{
}

Aws::String ModifyCertificateBasedAuthPropertiesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_certificateBasedAuthPropertiesHasBeenSet)
  {
   payload.WithObject("CertificateBasedAuthProperties", m_certificateBasedAuthProperties.Jsonize());

  }

  if(m_propertiesToDeleteHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> propertiesToDeleteJsonList(m_propertiesToDelete.size());
   for(unsigned propertiesToDeleteIndex = 0; propertiesToDeleteIndex < propertiesToDeleteJsonList.GetLength(); ++propertiesToDeleteIndex)
   {
     propertiesToDeleteJsonList[propertiesToDeleteIndex].AsString(DeletableCertificateBasedAuthPropertyMapper::GetNameForDeletableCertificateBasedAuthProperty(m_propertiesToDelete[propertiesToDeleteIndex]));
   }
   payload.WithArray("PropertiesToDelete", std::move(propertiesToDeleteJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ModifyCertificateBasedAuthPropertiesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.ModifyCertificateBasedAuthProperties"));
  return headers;

}




