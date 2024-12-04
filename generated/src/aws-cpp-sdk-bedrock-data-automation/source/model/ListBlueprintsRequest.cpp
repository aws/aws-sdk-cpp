/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/ListBlueprintsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockDataAutomation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListBlueprintsRequest::ListBlueprintsRequest() : 
    m_blueprintArnHasBeenSet(false),
    m_resourceOwner(ResourceOwner::NOT_SET),
    m_resourceOwnerHasBeenSet(false),
    m_blueprintStageFilter(BlueprintStageFilter::NOT_SET),
    m_blueprintStageFilterHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_projectFilterHasBeenSet(false)
{
}

Aws::String ListBlueprintsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_blueprintArnHasBeenSet)
  {
   payload.WithString("blueprintArn", m_blueprintArn);

  }

  if(m_resourceOwnerHasBeenSet)
  {
   payload.WithString("resourceOwner", ResourceOwnerMapper::GetNameForResourceOwner(m_resourceOwner));
  }

  if(m_blueprintStageFilterHasBeenSet)
  {
   payload.WithString("blueprintStageFilter", BlueprintStageFilterMapper::GetNameForBlueprintStageFilter(m_blueprintStageFilter));
  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_projectFilterHasBeenSet)
  {
   payload.WithObject("projectFilter", m_projectFilter.Jsonize());

  }

  return payload.View().WriteReadable();
}




