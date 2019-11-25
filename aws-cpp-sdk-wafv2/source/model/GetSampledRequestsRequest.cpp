/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/wafv2/model/GetSampledRequestsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSampledRequestsRequest::GetSampledRequestsRequest() : 
    m_webAclArnHasBeenSet(false),
    m_ruleMetricNameHasBeenSet(false),
    m_scope(Scope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_timeWindowHasBeenSet(false),
    m_maxItems(0),
    m_maxItemsHasBeenSet(false)
{
}

Aws::String GetSampledRequestsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_webAclArnHasBeenSet)
  {
   payload.WithString("WebAclArn", m_webAclArn);

  }

  if(m_ruleMetricNameHasBeenSet)
  {
   payload.WithString("RuleMetricName", m_ruleMetricName);

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", ScopeMapper::GetNameForScope(m_scope));
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
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20190729.GetSampledRequests"));
  return headers;

}




