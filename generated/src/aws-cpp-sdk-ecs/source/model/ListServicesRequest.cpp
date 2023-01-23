/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ListServicesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListServicesRequest::ListServicesRequest() : 
    m_clusterHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_launchType(LaunchType::NOT_SET),
    m_launchTypeHasBeenSet(false),
    m_schedulingStrategy(SchedulingStrategy::NOT_SET),
    m_schedulingStrategyHasBeenSet(false)
{
}

Aws::String ListServicesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterHasBeenSet)
  {
   payload.WithString("cluster", m_cluster);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_launchTypeHasBeenSet)
  {
   payload.WithString("launchType", LaunchTypeMapper::GetNameForLaunchType(m_launchType));
  }

  if(m_schedulingStrategyHasBeenSet)
  {
   payload.WithString("schedulingStrategy", SchedulingStrategyMapper::GetNameForSchedulingStrategy(m_schedulingStrategy));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListServicesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.ListServices"));
  return headers;

}




