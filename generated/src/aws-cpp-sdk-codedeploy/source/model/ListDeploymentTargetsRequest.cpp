/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/ListDeploymentTargetsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListDeploymentTargetsRequest::ListDeploymentTargetsRequest() : 
    m_deploymentIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_targetFiltersHasBeenSet(false)
{
}

Aws::String ListDeploymentTargetsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("deploymentId", m_deploymentId);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_targetFiltersHasBeenSet)
  {
   JsonValue targetFiltersJsonMap;
   for(auto& targetFiltersItem : m_targetFilters)
   {
     Aws::Utils::Array<JsonValue> filterValueListJsonList(targetFiltersItem.second.size());
     for(unsigned filterValueListIndex = 0; filterValueListIndex < filterValueListJsonList.GetLength(); ++filterValueListIndex)
     {
       filterValueListJsonList[filterValueListIndex].AsString(targetFiltersItem.second[filterValueListIndex]);
     }
     targetFiltersJsonMap.WithArray(TargetFilterNameMapper::GetNameForTargetFilterName(targetFiltersItem.first), std::move(filterValueListJsonList));
   }
   payload.WithObject("targetFilters", std::move(targetFiltersJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListDeploymentTargetsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.ListDeploymentTargets"));
  return headers;

}




