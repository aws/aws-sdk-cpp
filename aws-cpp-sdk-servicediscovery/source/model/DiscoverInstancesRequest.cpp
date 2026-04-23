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

#include <aws/servicediscovery/model/DiscoverInstancesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceDiscovery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DiscoverInstancesRequest::DiscoverInstancesRequest() : 
    m_namespaceNameHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_queryParametersHasBeenSet(false),
    m_healthStatus(HealthStatusFilter::NOT_SET),
    m_healthStatusHasBeenSet(false)
{
}

Aws::String DiscoverInstancesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_namespaceNameHasBeenSet)
  {
   payload.WithString("NamespaceName", m_namespaceName);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("ServiceName", m_serviceName);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_queryParametersHasBeenSet)
  {
   JsonValue queryParametersJsonMap;
   for(auto& queryParametersItem : m_queryParameters)
   {
     queryParametersJsonMap.WithString(queryParametersItem.first, queryParametersItem.second);
   }
   payload.WithObject("QueryParameters", std::move(queryParametersJsonMap));

  }

  if(m_healthStatusHasBeenSet)
  {
   payload.WithString("HealthStatus", HealthStatusFilterMapper::GetNameForHealthStatusFilter(m_healthStatus));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DiscoverInstancesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53AutoNaming_v20170314.DiscoverInstances"));
  return headers;

}




