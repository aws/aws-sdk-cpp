/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/DescribeChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeChannelRequest::DescribeChannelRequest() : 
    m_channelNameHasBeenSet(false),
    m_includeStatistics(false),
    m_includeStatisticsHasBeenSet(false)
{
}

Aws::String DescribeChannelRequest::SerializePayload() const
{
  return {};
}

void DescribeChannelRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_includeStatisticsHasBeenSet)
    {
      ss << m_includeStatistics;
      uri.AddQueryStringParameter("includeStatistics", ss.str());
      ss.str("");
    }

}



