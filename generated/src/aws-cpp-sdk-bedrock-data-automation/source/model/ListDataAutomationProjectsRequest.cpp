/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/ListDataAutomationProjectsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockDataAutomation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListDataAutomationProjectsRequest::ListDataAutomationProjectsRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_projectStageFilter(DataAutomationProjectStageFilter::NOT_SET),
    m_projectStageFilterHasBeenSet(false),
    m_blueprintFilterHasBeenSet(false),
    m_resourceOwner(ResourceOwner::NOT_SET),
    m_resourceOwnerHasBeenSet(false)
{
}

Aws::String ListDataAutomationProjectsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_projectStageFilterHasBeenSet)
  {
   payload.WithString("projectStageFilter", DataAutomationProjectStageFilterMapper::GetNameForDataAutomationProjectStageFilter(m_projectStageFilter));
  }

  if(m_blueprintFilterHasBeenSet)
  {
   payload.WithObject("blueprintFilter", m_blueprintFilter.Jsonize());

  }

  if(m_resourceOwnerHasBeenSet)
  {
   payload.WithString("resourceOwner", ResourceOwnerMapper::GetNameForResourceOwner(m_resourceOwner));
  }

  return payload.View().WriteReadable();
}




