/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/SetupInstanceHttpsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetupInstanceHttpsRequest::SetupInstanceHttpsRequest() : 
    m_instanceNameHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_domainNamesHasBeenSet(false),
    m_certificateProvider(CertificateProvider::NOT_SET),
    m_certificateProviderHasBeenSet(false)
{
}

Aws::String SetupInstanceHttpsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceNameHasBeenSet)
  {
   payload.WithString("instanceName", m_instanceName);

  }

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("emailAddress", m_emailAddress);

  }

  if(m_domainNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> domainNamesJsonList(m_domainNames.size());
   for(unsigned domainNamesIndex = 0; domainNamesIndex < domainNamesJsonList.GetLength(); ++domainNamesIndex)
   {
     domainNamesJsonList[domainNamesIndex].AsString(m_domainNames[domainNamesIndex]);
   }
   payload.WithArray("domainNames", std::move(domainNamesJsonList));

  }

  if(m_certificateProviderHasBeenSet)
  {
   payload.WithString("certificateProvider", CertificateProviderMapper::GetNameForCertificateProvider(m_certificateProvider));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SetupInstanceHttpsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.SetupInstanceHttps"));
  return headers;

}




