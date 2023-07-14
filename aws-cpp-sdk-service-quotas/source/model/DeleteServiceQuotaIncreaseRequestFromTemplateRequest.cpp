/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/model/DeleteServiceQuotaIncreaseRequestFromTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceQuotas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteServiceQuotaIncreaseRequestFromTemplateRequest::DeleteServiceQuotaIncreaseRequestFromTemplateRequest() : 
    m_serviceCodeHasBeenSet(false),
    m_quotaCodeHasBeenSet(false),
    m_awsRegionHasBeenSet(false)
{
}

Aws::String DeleteServiceQuotaIncreaseRequestFromTemplateRequest::SerializePayload() const
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

Aws::Http::HeaderValueCollection DeleteServiceQuotaIncreaseRequestFromTemplateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ServiceQuotasV20190624.DeleteServiceQuotaIncreaseRequestFromTemplate"));
  return headers;

}




