/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetDomainNamesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetDomainNamesRequest::GetDomainNamesRequest() : 
    m_positionHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
}

Aws::String GetDomainNamesRequest::SerializePayload() const
{
  return {};
}

void GetDomainNamesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_positionHasBeenSet)
    {
      ss << m_position;
      uri.AddQueryStringParameter("position", ss.str());
      ss.str("");
    }

    if(m_limitHasBeenSet)
    {
      ss << m_limit;
      uri.AddQueryStringParameter("limit", ss.str());
      ss.str("");
    }

}



