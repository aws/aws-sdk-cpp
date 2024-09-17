/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ListContainerGroupDefinitionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListContainerGroupDefinitionsRequest::ListContainerGroupDefinitionsRequest() : 
    m_schedulingStrategy(ContainerSchedulingStrategy::NOT_SET),
    m_schedulingStrategyHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListContainerGroupDefinitionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_schedulingStrategyHasBeenSet)
  {
   payload.WithString("SchedulingStrategy", ContainerSchedulingStrategyMapper::GetNameForContainerSchedulingStrategy(m_schedulingStrategy));
  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListContainerGroupDefinitionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.ListContainerGroupDefinitions"));
  return headers;

}




