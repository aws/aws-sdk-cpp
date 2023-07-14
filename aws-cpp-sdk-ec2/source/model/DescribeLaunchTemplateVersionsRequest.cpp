/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeLaunchTemplateVersionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeLaunchTemplateVersionsRequest::DescribeLaunchTemplateVersionsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_launchTemplateIdHasBeenSet(false),
    m_launchTemplateNameHasBeenSet(false),
    m_versionsHasBeenSet(false),
    m_minVersionHasBeenSet(false),
    m_maxVersionHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

Aws::String DescribeLaunchTemplateVersionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeLaunchTemplateVersions&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_launchTemplateIdHasBeenSet)
  {
    ss << "LaunchTemplateId=" << StringUtils::URLEncode(m_launchTemplateId.c_str()) << "&";
  }

  if(m_launchTemplateNameHasBeenSet)
  {
    ss << "LaunchTemplateName=" << StringUtils::URLEncode(m_launchTemplateName.c_str()) << "&";
  }

  if(m_versionsHasBeenSet)
  {
    unsigned versionsCount = 1;
    for(auto& item : m_versions)
    {
      ss << "LaunchTemplateVersion." << versionsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      versionsCount++;
    }
  }

  if(m_minVersionHasBeenSet)
  {
    ss << "MinVersion=" << StringUtils::URLEncode(m_minVersion.c_str()) << "&";
  }

  if(m_maxVersionHasBeenSet)
  {
    ss << "MaxVersion=" << StringUtils::URLEncode(m_maxVersion.c_str()) << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
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


void  DescribeLaunchTemplateVersionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
