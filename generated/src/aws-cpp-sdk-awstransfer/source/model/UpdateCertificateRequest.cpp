/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/UpdateCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateCertificateRequest::UpdateCertificateRequest() : 
    m_certificateIdHasBeenSet(false),
    m_activeDateHasBeenSet(false),
    m_inactiveDateHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String UpdateCertificateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateIdHasBeenSet)
  {
   payload.WithString("CertificateId", m_certificateId);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateCertificateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.UpdateCertificate"));
  return headers;

}




