/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/ListDeviceDiscoveriesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListDeviceDiscoveriesRequest::SerializePayload() const
{
  return {};
}

void ListDeviceDiscoveriesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
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

    if(m_typeFilterHasBeenSet)
    {
      ss << DiscoveryTypeMapper::GetNameForDiscoveryType(m_typeFilter);
      uri.AddQueryStringParameter("TypeFilter", ss.str());
      ss.str("");
    }

    if(m_statusFilterHasBeenSet)
    {
      ss << DeviceDiscoveryStatusMapper::GetNameForDeviceDiscoveryStatus(m_statusFilter);
      uri.AddQueryStringParameter("StatusFilter", ss.str());
      ss.str("");
    }

}



