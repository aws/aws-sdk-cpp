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
#include <aws/ec2/model/DescribeAddressesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeAddressesRequest::DescribeAddressesRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_publicIpsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_allocationIdsHasBeenSet(false)
{
}

Aws::String DescribeAddressesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeAddresses&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << m_dryRun << "&";
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

  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filter.", filtersCount, "");
      filtersCount++;
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

  ss << "Version=2015-10-01";
  return ss.str();
}

