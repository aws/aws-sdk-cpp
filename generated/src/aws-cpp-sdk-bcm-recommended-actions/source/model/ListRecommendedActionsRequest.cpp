/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-recommended-actions/model/ListRecommendedActionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BCMRecommendedActions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListRecommendedActionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filterHasBeenSet)
  {
   payload.WithObject("filter", m_filter.Jsonize());

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListRecommendedActionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBillingAndCostManagementRecommendedActions.ListRecommendedActions"));
  return headers;

}




