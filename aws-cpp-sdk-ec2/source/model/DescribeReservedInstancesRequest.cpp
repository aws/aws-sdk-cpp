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
#include <aws/ec2/model/DescribeReservedInstancesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeReservedInstancesRequest::DescribeReservedInstancesRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_reservedInstancesIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_offeringType(OfferingTypeValues::NOT_SET),
    m_offeringTypeHasBeenSet(false)
{
}

Aws::String DescribeReservedInstancesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeReservedInstances&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << m_dryRun << "&";
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
    ss << "OfferingType=" << OfferingTypeValuesMapper::GetNameForOfferingTypeValues(m_offeringType) << "&";
  }

  ss << "Version=2015-10-01";
  return ss.str();
}

