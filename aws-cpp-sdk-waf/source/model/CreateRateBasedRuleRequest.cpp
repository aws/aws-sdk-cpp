/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/CreateRateBasedRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRateBasedRuleRequest::CreateRateBasedRuleRequest() : 
    m_nameHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_rateKey(RateKey::NOT_SET),
    m_rateKeyHasBeenSet(false),
    m_rateLimit(0),
    m_rateLimitHasBeenSet(false),
    m_changeTokenHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateRateBasedRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_rateKeyHasBeenSet)
  {
   payload.WithString("RateKey", RateKeyMapper::GetNameForRateKey(m_rateKey));
  }

  if(m_rateLimitHasBeenSet)
  {
   payload.WithInt64("RateLimit", m_rateLimit);

  }

  if(m_changeTokenHasBeenSet)
  {
   payload.WithString("ChangeToken", m_changeToken);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateRateBasedRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20150824.CreateRateBasedRule"));
  return headers;

}




