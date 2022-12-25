/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ImportCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportCertificateRequest::ImportCertificateRequest() : 
    m_certificateIdentifierHasBeenSet(false),
    m_certificatePemHasBeenSet(false),
    m_certificateWalletHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String ImportCertificateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateIdentifierHasBeenSet)
  {
   payload.WithString("CertificateIdentifier", m_certificateIdentifier);

  }

  if(m_certificatePemHasBeenSet)
  {
   payload.WithString("CertificatePem", m_certificatePem);

  }

  if(m_certificateWalletHasBeenSet)
  {
   payload.WithString("CertificateWallet", HashingUtils::Base64Encode(m_certificateWallet));
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
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.ImportCertificate"));
  return headers;

}




