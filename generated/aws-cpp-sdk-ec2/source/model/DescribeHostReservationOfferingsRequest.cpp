/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeHostReservationOfferingsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeHostReservationOfferingsRequest::DescribeHostReservationOfferingsRequest() : 
    m_filterHasBeenSet(false),
    m_maxDuration(0),
    m_maxDurationHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_minDuration(0),
    m_minDurationHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_offeringIdHasBeenSet(false)
{
}

Aws::String DescribeHostReservationOfferingsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeHostReservationOfferings&";
  if(m_filterHasBeenSet)
  {
    unsigned filterCount = 1;
    for(auto& item : m_filter)
    {
      item.OutputToStream(ss, "Filter.", filterCount, "");
      filterCount++;
    }
  }

  if(m_maxDurationHasBeenSet)
  {
    ss << "MaxDuration=" << m_maxDuration << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if(m_minDurationHasBeenSet)
  {
    ss << "MinDuration=" << m_minDuration << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_offeringIdHasBeenSet)
  {
    ss << "OfferingId=" << StringUtils::URLEncode(m_offeringId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeHostReservationOfferingsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
