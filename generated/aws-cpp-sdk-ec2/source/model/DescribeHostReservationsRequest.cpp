/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeHostReservationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeHostReservationsRequest::DescribeHostReservationsRequest() : 
    m_filterHasBeenSet(false),
    m_hostReservationIdSetHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeHostReservationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeHostReservations&";
  if(m_filterHasBeenSet)
  {
    unsigned filterCount = 1;
    for(auto& item : m_filter)
    {
      item.OutputToStream(ss, "Filter.", filterCount, "");
      filterCount++;
    }
  }

  if(m_hostReservationIdSetHasBeenSet)
  {
    unsigned hostReservationIdSetCount = 1;
    for(auto& item : m_hostReservationIdSet)
    {
      ss << "HostReservationIdSet." << hostReservationIdSetCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      hostReservationIdSetCount++;
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


void  DescribeHostReservationsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
