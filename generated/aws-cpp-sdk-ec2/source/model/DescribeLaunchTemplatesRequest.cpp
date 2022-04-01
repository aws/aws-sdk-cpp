/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeLaunchTemplatesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeLaunchTemplatesRequest::DescribeLaunchTemplatesRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_launchTemplateIdsHasBeenSet(false),
    m_launchTemplateNamesHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeLaunchTemplatesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeLaunchTemplates&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_launchTemplateIdsHasBeenSet)
  {
    unsigned launchTemplateIdsCount = 1;
    for(auto& item : m_launchTemplateIds)
    {
      ss << "LaunchTemplateId." << launchTemplateIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      launchTemplateIdsCount++;
    }
  }

  if(m_launchTemplateNamesHasBeenSet)
  {
    unsigned launchTemplateNamesCount = 1;
    for(auto& item : m_launchTemplateNames)
    {
      ss << "LaunchTemplateName." << launchTemplateNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      launchTemplateNamesCount++;
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


void  DescribeLaunchTemplatesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
