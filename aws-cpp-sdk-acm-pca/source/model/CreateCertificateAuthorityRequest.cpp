﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_idempotencyTokenHasBeenSet(false)
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateCertificateAuthorityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ACMPrivateCA.CreateCertificateAuthority"));
  return headers;

}




