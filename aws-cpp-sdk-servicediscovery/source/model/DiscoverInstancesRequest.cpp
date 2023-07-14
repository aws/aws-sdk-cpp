/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_optionalParametersHasBeenSet(false),
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

  if(m_optionalParametersHasBeenSet)
  {
   JsonValue optionalParametersJsonMap;
   for(auto& optionalParametersItem : m_optionalParameters)
   {
     optionalParametersJsonMap.WithString(optionalParametersItem.first, optionalParametersItem.second);
   }
   payload.WithObject("OptionalParameters", std::move(optionalParametersJsonMap));

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




