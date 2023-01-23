/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CreateCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCertificateRequest::CreateCertificateRequest() : 
    m_certificateNameHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_subjectAlternativeNamesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateCertificateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateNameHasBeenSet)
  {
   payload.WithString("certificateName", m_certificateName);

  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_subjectAlternativeNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subjectAlternativeNamesJsonList(m_subjectAlternativeNames.size());
   for(unsigned subjectAlternativeNamesIndex = 0; subjectAlternativeNamesIndex < subjectAlternativeNamesJsonList.GetLength(); ++subjectAlternativeNamesIndex)
   {
     subjectAlternativeNamesJsonList[subjectAlternativeNamesIndex].AsString(m_subjectAlternativeNames[subjectAlternativeNamesIndex]);
   }
   payload.WithArray("subjectAlternativeNames", std::move(subjectAlternativeNamesJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateCertificateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.CreateCertificate"));
  return headers;

}




