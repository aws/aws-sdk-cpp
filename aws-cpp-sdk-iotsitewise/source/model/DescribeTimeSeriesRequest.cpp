/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeTimeSeriesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeTimeSeriesRequest::DescribeTimeSeriesRequest() : 
    m_aliasHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_propertyIdHasBeenSet(false)
{
}

Aws::String DescribeTimeSeriesRequest::SerializePayload() const
{
  return {};
}

void DescribeTimeSeriesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_aliasHasBeenSet)
    {
      ss << m_alias;
      uri.AddQueryStringParameter("alias", ss.str());
      ss.str("");
    }

    if(m_assetIdHasBeenSet)
    {
      ss << m_assetId;
      uri.AddQueryStringParameter("assetId", ss.str());
      ss.str("");
    }

    if(m_propertyIdHasBeenSet)
    {
      ss << m_propertyId;
      uri.AddQueryStringParameter("propertyId", ss.str());
      ss.str("");
    }

}



