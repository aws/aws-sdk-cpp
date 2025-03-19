/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeKeyPairsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String DescribeKeyPairsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeKeyPairs&";
  if(m_keyNamesHasBeenSet)
  {
    unsigned keyNamesCount = 1;
    for(auto& item : m_keyNames)
    {
      ss << "KeyName." << keyNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      keyNamesCount++;
    }
  }

  if(m_keyPairIdsHasBeenSet)
  {
    unsigned keyPairIdsCount = 1;
    for(auto& item : m_keyPairIds)
    {
      ss << "KeyPairId." << keyPairIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      keyPairIdsCount++;
    }
  }

  if(m_includePublicKeyHasBeenSet)
  {
    ss << "IncludePublicKey=" << std::boolalpha << m_includePublicKey << "&";
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

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeKeyPairsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
