/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeReservedInstancesModificationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeReservedInstancesModificationsRequest::DescribeReservedInstancesModificationsRequest() : 
    m_filtersHasBeenSet(false),
    m_reservedInstancesModificationIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeReservedInstancesModificationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeReservedInstancesModifications&";
  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filter.", filtersCount, "");
      filtersCount++;
    }
  }

  if(m_reservedInstancesModificationIdsHasBeenSet)
  {
    unsigned reservedInstancesModificationIdsCount = 1;
    for(auto& item : m_reservedInstancesModificationIds)
    {
      ss << "ReservedInstancesModificationId." << reservedInstancesModificationIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      reservedInstancesModificationIdsCount++;
    }
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeReservedInstancesModificationsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
