/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/DescribeCostCategoryDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeCostCategoryDefinitionRequest::DescribeCostCategoryDefinitionRequest() : 
    m_costCategoryArnHasBeenSet(false),
    m_effectiveOnHasBeenSet(false)
{
}

Aws::String DescribeCostCategoryDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_costCategoryArnHasBeenSet)
  {
   payload.WithString("CostCategoryArn", m_costCategoryArn);

  }

  if(m_effectiveOnHasBeenSet)
  {
   payload.WithString("EffectiveOn", m_effectiveOn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeCostCategoryDefinitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.DescribeCostCategoryDefinition"));
  return headers;

}




