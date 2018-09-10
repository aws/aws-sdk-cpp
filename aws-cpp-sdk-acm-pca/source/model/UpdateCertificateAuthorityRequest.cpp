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

#include <aws/acm-pca/model/UpdateCertificateAuthorityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ACMPCA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateCertificateAuthorityRequest::UpdateCertificateAuthorityRequest() : 
    m_certificateAuthorityArnHasBeenSet(false),
    m_revocationConfigurationHasBeenSet(false),
    m_status(CertificateAuthorityStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String UpdateCertificateAuthorityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateAuthorityArnHasBeenSet)
  {
   payload.WithString("CertificateAuthorityArn", m_certificateAuthorityArn);

  }

  if(m_revocationConfigurationHasBeenSet)
  {
   payload.WithObject("RevocationConfiguration", m_revocationConfiguration.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CertificateAuthorityStatusMapper::GetNameForCertificateAuthorityStatus(m_status));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateCertificateAuthorityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ACMPrivateCA.UpdateCertificateAuthority"));
  return headers;

}




