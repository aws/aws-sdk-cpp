/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsm/model/DescribeLunaClientRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudHSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeLunaClientRequest::DescribeLunaClientRequest() : 
    m_clientArnHasBeenSet(false),
    m_certificateFingerprintHasBeenSet(false)
{
}

Aws::String DescribeLunaClientRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientArnHasBeenSet)
  {
   payload.WithString("ClientArn", m_clientArn);

  }

  if(m_certificateFingerprintHasBeenSet)
  {
   payload.WithString("CertificateFingerprint", m_certificateFingerprint);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeLunaClientRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CloudHsmFrontendService.DescribeLunaClient"));
  return headers;

}




