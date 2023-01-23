/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeFpgaImagesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeFpgaImagesRequest::DescribeFpgaImagesRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_fpgaImageIdsHasBeenSet(false),
    m_ownersHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeFpgaImagesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeFpgaImages&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_fpgaImageIdsHasBeenSet)
  {
    unsigned fpgaImageIdsCount = 1;
    for(auto& item : m_fpgaImageIds)
    {
      ss << "FpgaImageId." << fpgaImageIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      fpgaImageIdsCount++;
    }
  }

  if(m_ownersHasBeenSet)
  {
    unsigned ownersCount = 1;
    for(auto& item : m_owners)
    {
      ss << "Owner." << ownersCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      ownersCount++;
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

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeFpgaImagesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
