/*
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

#include <aws/acm-pca/model/ImportCertificateAuthorityCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::ACMPCA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportCertificateAuthorityCertificateRequest::ImportCertificateAuthorityCertificateRequest() : 
    m_certificateAuthorityArnHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_certificateChainHasBeenSet(false)
{
}

Aws::String ImportCertificateAuthorityCertificateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateAuthorityArnHasBeenSet)
  {
   payload.WithString("CertificateAuthorityArn", m_certificateAuthorityArn);

  }

  if(m_certificateHasBeenSet)
  {
   payload.WithString("Certificate", HashingUtils::Base64Encode(m_certificate));
  }

  if(m_certificateChainHasBeenSet)
  {
   payload.WithString("CertificateChain", HashingUtils::Base64Encode(m_certificateChain));
  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ImportCertificateAuthorityCertificateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ACMPrivateCA.ImportCertificateAuthorityCertificate"));
  return headers;

}




