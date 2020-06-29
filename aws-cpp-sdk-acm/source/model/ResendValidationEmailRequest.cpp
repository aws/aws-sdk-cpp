/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/ResendValidationEmailRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ACM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ResendValidationEmailRequest::ResendValidationEmailRequest() : 
    m_certificateArnHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_validationDomainHasBeenSet(false)
{
}

Aws::String ResendValidationEmailRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("CertificateArn", m_certificateArn);

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_validationDomainHasBeenSet)
  {
   payload.WithString("ValidationDomain", m_validationDomain);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ResendValidationEmailRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CertificateManager.ResendValidationEmail"));
  return headers;

}




