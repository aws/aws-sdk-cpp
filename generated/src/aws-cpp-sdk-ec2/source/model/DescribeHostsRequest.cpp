/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeHostsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeHostsRequest::DescribeHostsRequest() : 
    m_filterHasBeenSet(false),
    m_hostIdsHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeHostsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeHosts&";
  if(m_filterHasBeenSet)
  {
    unsigned filterCount = 1;
    for(auto& item : m_filter)
    {
      item.OutputToStream(ss, "Filter.", filterCount, "");
      filterCount++;
    }
  }

  if(m_hostIdsHasBeenSet)
  {
    unsigned hostIdsCount = 1;
    for(auto& item : m_hostIds)
    {
      ss << "HostId." << hostIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      hostIdsCount++;
    }
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeHostsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
