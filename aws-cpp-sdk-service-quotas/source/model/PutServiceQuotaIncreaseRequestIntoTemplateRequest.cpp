/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/model/PutServiceQuotaIncreaseRequestIntoTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceQuotas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutServiceQuotaIncreaseRequestIntoTemplateRequest::PutServiceQuotaIncreaseRequestIntoTemplateRequest() : 
    m_quotaCodeHasBeenSet(false),
    m_serviceCodeHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_desiredValue(0.0),
    m_desiredValueHasBeenSet(false)
{
}

Aws::String PutServiceQuotaIncreaseRequestIntoTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_quotaCodeHasBeenSet)
  {
   payload.WithString("QuotaCode", m_quotaCode);

  }

  if(m_serviceCodeHasBeenSet)
  {
   payload.WithString("ServiceCode", m_serviceCode);

  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("AwsRegion", m_awsRegion);

  }

  if(m_desiredValueHasBeenSet)
  {
   payload.WithDouble("DesiredValue", m_desiredValue);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutServiceQuotaIncreaseRequestIntoTemplateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ServiceQuotasV20190624.PutServiceQuotaIncreaseRequestIntoTemplate"));
  return headers;

}




