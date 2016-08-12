/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iot/model/ListOutgoingCertificatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListOutgoingCertificatesRequest::ListOutgoingCertificatesRequest() : 
    m_pageSize(0),
    m_pageSizeHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_ascendingOrder(false),
    m_ascendingOrderHasBeenSet(false)
{
}

Aws::String ListOutgoingCertificatesRequest::SerializePayload() const
{
  return "";
}

void ListOutgoingCertificatesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_pageSizeHasBeenSet)
    {
      ss << m_pageSize;
      uri.AddQueryStringParameter("pageSize", ss.str());
      ss.str("");
    }

    if(m_markerHasBeenSet)
    {
      ss << m_marker;
      uri.AddQueryStringParameter("marker", ss.str());
      ss.str("");
    }

    if(m_ascendingOrderHasBeenSet)
    {
      ss << m_ascendingOrder;
      uri.AddQueryStringParameter("isAscendingOrder", ss.str());
      ss.str("");
    }

}


