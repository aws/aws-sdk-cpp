/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/ImportCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::ACM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportCertificateRequest::ImportCertificateRequest() : 
    m_certificateArnHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_certificateChainHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String ImportCertificateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("CertificateArn", m_certificateArn);

  }

  if(m_certificateHasBeenSet)
  {
   payload.WithString("Certificate", HashingUtils::Base64Encode(m_certificate));
  }

  if(m_privateKeyHasBeenSet)
  {
   payload.WithString("PrivateKey", HashingUtils::Base64Encode(m_privateKey));
  }

  if(m_certificateChainHasBeenSet)
  {
   payload.WithString("CertificateChain", HashingUtils::Base64Encode(m_certificateChain));
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
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CertificateManager.ImportCertificate"));
  return headers;

}




