/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/model/GetServiceQuotaIncreaseRequestFromTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceQuotas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetServiceQuotaIncreaseRequestFromTemplateRequest::GetServiceQuotaIncreaseRequestFromTemplateRequest() : 
    m_serviceCodeHasBeenSet(false),
    m_quotaCodeHasBeenSet(false),
    m_awsRegionHasBeenSet(false)
{
}

Aws::String GetServiceQuotaIncreaseRequestFromTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceCodeHasBeenSet)
  {
   payload.WithString("ServiceCode", m_serviceCode);

  }

  if(m_quotaCodeHasBeenSet)
  {
   payload.WithString("QuotaCode", m_quotaCode);

  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("AwsRegion", m_awsRegion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetServiceQuotaIncreaseRequestFromTemplateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ServiceQuotasV20190624.GetServiceQuotaIncreaseRequestFromTemplate"));
  return headers;

}




