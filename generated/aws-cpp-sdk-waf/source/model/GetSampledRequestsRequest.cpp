/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/GetSampledRequestsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSampledRequestsRequest::GetSampledRequestsRequest() : 
    m_webAclIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_timeWindowHasBeenSet(false),
    m_maxItems(0),
    m_maxItemsHasBeenSet(false)
{
}

Aws::String GetSampledRequestsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_webAclIdHasBeenSet)
  {
   payload.WithString("WebAclId", m_webAclId);

  }

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("RuleId", m_ruleId);

  }

  if(m_timeWindowHasBeenSet)
  {
   payload.WithObject("TimeWindow", m_timeWindow.Jsonize());

  }

  if(m_maxItemsHasBeenSet)
  {
   payload.WithInt64("MaxItems", m_maxItems);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetSampledRequestsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20150824.GetSampledRequests"));
  return headers;

}




