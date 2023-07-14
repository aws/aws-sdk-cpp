/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeReservedInstancesListingsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeReservedInstancesListingsRequest::DescribeReservedInstancesListingsRequest() : 
    m_filtersHasBeenSet(false),
    m_reservedInstancesIdHasBeenSet(false),
    m_reservedInstancesListingIdHasBeenSet(false)
{
}

Aws::String DescribeReservedInstancesListingsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeReservedInstancesListings&";
  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filter.", filtersCount, "");
      filtersCount++;
    }
  }

  if(m_reservedInstancesIdHasBeenSet)
  {
    ss << "ReservedInstancesId=" << StringUtils::URLEncode(m_reservedInstancesId.c_str()) << "&";
  }

  if(m_reservedInstancesListingIdHasBeenSet)
  {
    ss << "ReservedInstancesListingId=" << StringUtils::URLEncode(m_reservedInstancesListingId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeReservedInstancesListingsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
