/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/DescribeApplicationVersionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

DescribeApplicationVersionsRequest::DescribeApplicationVersionsRequest() : 
    m_applicationNameHasBeenSet(false),
    m_versionLabelsHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeApplicationVersionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeApplicationVersions&";
  if(m_applicationNameHasBeenSet)
  {
    ss << "ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }

  if(m_versionLabelsHasBeenSet)
  {
    unsigned versionLabelsCount = 1;
    for(auto& item : m_versionLabels)
    {
      ss << "VersionLabels.member." << versionLabelsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      versionLabelsCount++;
    }
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  DescribeApplicationVersionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
