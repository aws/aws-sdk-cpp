/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListDomainConfigurationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListDomainConfigurationsRequest::ListDomainConfigurationsRequest() : 
    m_markerHasBeenSet(false),
    m_pageSize(0),
    m_pageSizeHasBeenSet(false),
    m_serviceType(ServiceType::NOT_SET),
    m_serviceTypeHasBeenSet(false)
{
}

Aws::String ListDomainConfigurationsRequest::SerializePayload() const
{
  return {};
}

void ListDomainConfigurationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_markerHasBeenSet)
    {
      ss << m_marker;
      uri.AddQueryStringParameter("marker", ss.str());
      ss.str("");
    }

    if(m_pageSizeHasBeenSet)
    {
      ss << m_pageSize;
      uri.AddQueryStringParameter("pageSize", ss.str());
      ss.str("");
    }

    if(m_serviceTypeHasBeenSet)
    {
      ss << ServiceTypeMapper::GetNameForServiceType(m_serviceType);
      uri.AddQueryStringParameter("serviceType", ss.str());
      ss.str("");
    }

}



