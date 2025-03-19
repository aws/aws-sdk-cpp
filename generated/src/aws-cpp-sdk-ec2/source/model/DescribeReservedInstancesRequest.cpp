/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeReservedInstancesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String DescribeReservedInstancesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeReservedInstances&";
  if(m_offeringClassHasBeenSet)
  {
    ss << "OfferingClass=" << StringUtils::URLEncode(OfferingClassTypeMapper::GetNameForOfferingClassType(m_offeringClass)) << "&";
  }

  if(m_reservedInstancesIdsHasBeenSet)
  {
    unsigned reservedInstancesIdsCount = 1;
    for(auto& item : m_reservedInstancesIds)
    {
      ss << "ReservedInstancesId." << reservedInstancesIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      reservedInstancesIdsCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filter.", filtersCount, "");
      filtersCount++;
    }
  }

  if(m_offeringTypeHasBeenSet)
  {
    ss << "OfferingType=" << StringUtils::URLEncode(OfferingTypeValuesMapper::GetNameForOfferingTypeValues(m_offeringType)) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeReservedInstancesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
