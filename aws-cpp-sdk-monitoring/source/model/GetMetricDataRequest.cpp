/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/monitoring/model/GetMetricDataRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

GetMetricDataRequest::GetMetricDataRequest() : 
    m_metricDataQueriesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_scanBy(ScanBy::NOT_SET),
    m_scanByHasBeenSet(false),
    m_maxDatapoints(0),
    m_maxDatapointsHasBeenSet(false)
{
}

Aws::String GetMetricDataRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetMetricData&";
  if(m_metricDataQueriesHasBeenSet)
  {
    unsigned metricDataQueriesCount = 1;
    for(auto& item : m_metricDataQueries)
    {
      item.OutputToStream(ss, "MetricDataQueries.member.", metricDataQueriesCount, "");
      metricDataQueriesCount++;
    }
  }

  if(m_startTimeHasBeenSet)
  {
    ss << "StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endTimeHasBeenSet)
  {
    ss << "EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_scanByHasBeenSet)
  {
    ss << "ScanBy=" << ScanByMapper::GetNameForScanBy(m_scanBy) << "&";
  }

  if(m_maxDatapointsHasBeenSet)
  {
    ss << "MaxDatapoints=" << m_maxDatapoints << "&";
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  GetMetricDataRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
