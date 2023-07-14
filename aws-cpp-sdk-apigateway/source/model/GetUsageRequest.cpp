/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetUsageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetUsageRequest::GetUsageRequest() : 
    m_usagePlanIdHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
}

Aws::String GetUsageRequest::SerializePayload() const
{
  return {};
}

void GetUsageRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_keyIdHasBeenSet)
    {
      ss << m_keyId;
      uri.AddQueryStringParameter("keyId", ss.str());
      ss.str("");
    }

    if(m_startDateHasBeenSet)
    {
      ss << m_startDate;
      uri.AddQueryStringParameter("startDate", ss.str());
      ss.str("");
    }

    if(m_endDateHasBeenSet)
    {
      ss << m_endDate;
      uri.AddQueryStringParameter("endDate", ss.str());
      ss.str("");
    }

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



