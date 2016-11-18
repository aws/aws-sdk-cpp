/*
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
#include <aws/ec2/model/DescribeReservedInstancesListingsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeReservedInstancesListingsRequest::DescribeReservedInstancesListingsRequest() : 
    m_reservedInstancesIdHasBeenSet(false),
    m_reservedInstancesListingIdHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

Aws::String DescribeReservedInstancesListingsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeReservedInstancesListings&";
  if(m_reservedInstancesIdHasBeenSet)
  {
    ss << "ReservedInstancesId=" << StringUtils::URLEncode(m_reservedInstancesId.c_str()) << "&";
  }

  if(m_reservedInstancesListingIdHasBeenSet)
  {
    ss << "ReservedInstancesListingId=" << StringUtils::URLEncode(m_reservedInstancesListingId.c_str()) << "&";
  }

  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filters.", filtersCount, "");
      filtersCount++;
    }
  }

  ss << "Version=2015-10-01";
  return ss.str();
}

