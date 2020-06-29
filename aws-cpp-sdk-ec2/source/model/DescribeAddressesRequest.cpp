/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeAddressesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeAddressesRequest::DescribeAddressesRequest() : 
    m_filtersHasBeenSet(false),
    m_publicIpsHasBeenSet(false),
    m_allocationIdsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DescribeAddressesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeAddresses&";
  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filter.", filtersCount, "");
      filtersCount++;
    }
  }

  if(m_publicIpsHasBeenSet)
  {
    unsigned publicIpsCount = 1;
    for(auto& item : m_publicIps)
    {
      ss << "PublicIp." << publicIpsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      publicIpsCount++;
    }
  }

  if(m_allocationIdsHasBeenSet)
  {
    unsigned allocationIdsCount = 1;
    for(auto& item : m_allocationIds)
    {
      ss << "AllocationId." << allocationIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      allocationIdsCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeAddressesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
