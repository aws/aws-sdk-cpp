/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/AttachCertificateToDistributionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AttachCertificateToDistributionRequest::AttachCertificateToDistributionRequest() : 
    m_distributionNameHasBeenSet(false),
    m_certificateNameHasBeenSet(false)
{
}

Aws::String AttachCertificateToDistributionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_distributionNameHasBeenSet)
  {
   payload.WithString("distributionName", m_distributionName);

  }

  if(m_certificateNameHasBeenSet)
  {
   payload.WithString("certificateName", m_certificateName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AttachCertificateToDistributionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.AttachCertificateToDistribution"));
  return headers;

}




