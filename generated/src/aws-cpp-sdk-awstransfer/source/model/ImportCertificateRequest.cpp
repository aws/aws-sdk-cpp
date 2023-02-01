/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ImportCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportCertificateRequest::ImportCertificateRequest() : 
    m_usage(CertificateUsageType::NOT_SET),
    m_usageHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_certificateChainHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_activeDateHasBeenSet(false),
    m_inactiveDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String ImportCertificateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_usageHasBeenSet)
  {
   payload.WithString("Usage", CertificateUsageTypeMapper::GetNameForCertificateUsageType(m_usage));
  }

  if(m_certificateHasBeenSet)
  {
   payload.WithString("Certificate", m_certificate);

  }

  if(m_certificateChainHasBeenSet)
  {
   payload.WithString("CertificateChain", m_certificateChain);

  }

  if(m_privateKeyHasBeenSet)
  {
   payload.WithString("PrivateKey", m_privateKey);

  }

  if(m_activeDateHasBeenSet)
  {
   payload.WithDouble("ActiveDate", m_activeDate.SecondsWithMSPrecision());
  }

  if(m_inactiveDateHasBeenSet)
  {
   payload.WithDouble("InactiveDate", m_inactiveDate.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ImportCertificateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.ImportCertificate"));
  return headers;

}




