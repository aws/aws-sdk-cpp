/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetCertificatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCertificatesRequest::GetCertificatesRequest() : 
    m_certificateStatusesHasBeenSet(false),
    m_includeCertificateDetails(false),
    m_includeCertificateDetailsHasBeenSet(false),
    m_certificateNameHasBeenSet(false)
{
}

Aws::String GetCertificatesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateStatusesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> certificateStatusesJsonList(m_certificateStatuses.size());
   for(unsigned certificateStatusesIndex = 0; certificateStatusesIndex < certificateStatusesJsonList.GetLength(); ++certificateStatusesIndex)
   {
     certificateStatusesJsonList[certificateStatusesIndex].AsString(CertificateStatusMapper::GetNameForCertificateStatus(m_certificateStatuses[certificateStatusesIndex]));
   }
   payload.WithArray("certificateStatuses", std::move(certificateStatusesJsonList));

  }

  if(m_includeCertificateDetailsHasBeenSet)
  {
   payload.WithBool("includeCertificateDetails", m_includeCertificateDetails);

  }

  if(m_certificateNameHasBeenSet)
  {
   payload.WithString("certificateName", m_certificateName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetCertificatesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.GetCertificates"));
  return headers;

}




