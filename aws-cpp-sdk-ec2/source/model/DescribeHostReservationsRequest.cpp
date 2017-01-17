﻿/*
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
#include <aws/ec2/model/DescribeHostReservationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeHostReservationsRequest::DescribeHostReservationsRequest() : 
    m_hostReservationIdSetHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeHostReservationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeHostReservations&";
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

  if(m_filterHasBeenSet)
  {
    unsigned filterCount = 1;
    for(auto& item : m_filter)
    {
      item.OutputToStream(ss, "Filter.", filterCount, "");
      filterCount++;
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

