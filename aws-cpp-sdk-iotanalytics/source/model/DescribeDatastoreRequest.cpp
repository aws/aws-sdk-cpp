/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/DescribeDatastoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeDatastoreRequest::DescribeDatastoreRequest() : 
    m_datastoreNameHasBeenSet(false),
    m_includeStatistics(false),
    m_includeStatisticsHasBeenSet(false)
{
}

Aws::String DescribeDatastoreRequest::SerializePayload() const
{
  return {};
}

void DescribeDatastoreRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_includeStatisticsHasBeenSet)
    {
      ss << m_includeStatistics;
      uri.AddQueryStringParameter("includeStatistics", ss.str());
      ss.str("");
    }

}



