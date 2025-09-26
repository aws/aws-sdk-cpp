/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/AssociateSourceViewsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Billing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateSourceViewsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateSourceViewsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBilling.AssociateSourceViews"));
  return headers;

}




