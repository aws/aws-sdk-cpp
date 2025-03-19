/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/ListManagedThingSchemasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListManagedThingSchemasRequest::SerializePayload() const
{
  return {};
}

void ListManagedThingSchemasRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_endpointIdFilterHasBeenSet)
    {
      ss << m_endpointIdFilter;
      uri.AddQueryStringParameter("EndpointIdFilter", ss.str());
      ss.str("");
    }

    if(m_capabilityIdFilterHasBeenSet)
    {
      ss << m_capabilityIdFilter;
      uri.AddQueryStringParameter("CapabilityIdFilter", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("MaxResults", ss.str());
      ss.str("");
    }

}



