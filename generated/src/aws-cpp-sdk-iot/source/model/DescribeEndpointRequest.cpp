/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeEndpointRequest::DescribeEndpointRequest() : 
    m_endpointTypeHasBeenSet(false)
{
}

Aws::String DescribeEndpointRequest::SerializePayload() const
{
  return {};
}

void DescribeEndpointRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_endpointTypeHasBeenSet)
    {
      ss << m_endpointType;
      uri.AddQueryStringParameter("endpointType", ss.str());
      ss.str("");
    }

}



