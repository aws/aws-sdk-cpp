/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/CreateCertificateAuthorityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ACMPCA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCertificateAuthorityRequest::CreateCertificateAuthorityRequest() : 
    m_certificateAuthorityConfigurationHasBeenSet(false),
    m_revocationConfigurationHasBeenSet(false),
    m_certificateAuthorityType(CertificateAuthorityType::NOT_SET),
    m_certificateAuthorityTypeHasBeenSet(false),
    m_idempotencyTokenHasBeenSet(false),
    m_keyStorageSecurityStandard(KeyStorageSecurityStandard::NOT_SET),
    m_keyStorageSecurityStandardHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_usageMode(CertificateAuthorityUsageMode::NOT_SET),
    m_usageModeHasBeenSet(false)
{
}

Aws::String CreateCertificateAuthorityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateAuthorityConfigurationHasBeenSet)
  {
   payload.WithObject("CertificateAuthorityConfiguration", m_certificateAuthorityConfiguration.Jsonize());

  }

  if(m_revocationConfigurationHasBeenSet)
  {
   payload.WithObject("RevocationConfiguration", m_revocationConfiguration.Jsonize());

  }

  if(m_certificateAuthorityTypeHasBeenSet)
  {
   payload.WithString("CertificateAuthorityType", CertificateAuthorityTypeMapper::GetNameForCertificateAuthorityType(m_certificateAuthorityType));
  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  if(m_keyStorageSecurityStandardHasBeenSet)
  {
   payload.WithString("KeyStorageSecurityStandard", KeyStorageSecurityStandardMapper::GetNameForKeyStorageSecurityStandard(m_keyStorageSecurityStandard));
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

  if(m_usageModeHasBeenSet)
  {
   payload.WithString("UsageMode", CertificateAuthorityUsageModeMapper::GetNameForCertificateAuthorityUsageMode(m_usageMode));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateCertificateAuthorityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ACMPrivateCA.CreateCertificateAuthority"));
  return headers;

}




