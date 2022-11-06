/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/UpdateDirectoryConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDirectoryConfigRequest::UpdateDirectoryConfigRequest() : 
    m_directoryNameHasBeenSet(false),
    m_organizationalUnitDistinguishedNamesHasBeenSet(false),
    m_serviceAccountCredentialsHasBeenSet(false),
    m_certificateBasedAuthPropertiesHasBeenSet(false)
{
}

Aws::String UpdateDirectoryConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryNameHasBeenSet)
  {
   payload.WithString("DirectoryName", m_directoryName);

  }

  if(m_organizationalUnitDistinguishedNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> organizationalUnitDistinguishedNamesJsonList(m_organizationalUnitDistinguishedNames.size());
   for(unsigned organizationalUnitDistinguishedNamesIndex = 0; organizationalUnitDistinguishedNamesIndex < organizationalUnitDistinguishedNamesJsonList.GetLength(); ++organizationalUnitDistinguishedNamesIndex)
   {
     organizationalUnitDistinguishedNamesJsonList[organizationalUnitDistinguishedNamesIndex].AsString(m_organizationalUnitDistinguishedNames[organizationalUnitDistinguishedNamesIndex]);
   }
   payload.WithArray("OrganizationalUnitDistinguishedNames", std::move(organizationalUnitDistinguishedNamesJsonList));

  }

  if(m_serviceAccountCredentialsHasBeenSet)
  {
   payload.WithObject("ServiceAccountCredentials", m_serviceAccountCredentials.Jsonize());

  }

  if(m_certificateBasedAuthPropertiesHasBeenSet)
  {
   payload.WithObject("CertificateBasedAuthProperties", m_certificateBasedAuthProperties.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDirectoryConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.UpdateDirectoryConfig"));
  return headers;

}




