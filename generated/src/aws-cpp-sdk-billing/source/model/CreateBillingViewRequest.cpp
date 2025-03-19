/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/CreateBillingViewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Billing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateBillingViewRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_sourceViewsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceViewsJsonList(m_sourceViews.size());
   for(unsigned sourceViewsIndex = 0; sourceViewsIndex < sourceViewsJsonList.GetLength(); ++sourceViewsIndex)
   {
     sourceViewsJsonList[sourceViewsIndex].AsString(m_sourceViews[sourceViewsIndex]);
   }
   payload.WithArray("sourceViews", std::move(sourceViewsJsonList));

  }

  if(m_dataFilterExpressionHasBeenSet)
  {
   payload.WithObject("dataFilterExpression", m_dataFilterExpression.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_resourceTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTagsJsonList(m_resourceTags.size());
   for(unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex)
   {
     resourceTagsJsonList[resourceTagsIndex].AsObject(m_resourceTags[resourceTagsIndex].Jsonize());
   }
   payload.WithArray("resourceTags", std::move(resourceTagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateBillingViewRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBilling.CreateBillingView"));
  return headers;

}




