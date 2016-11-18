/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_certificateChainHasBeenSet(false)
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ImportCertificateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CertificateManager.ImportCertificate"));
  return headers;

}



