/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/DescribeEnvironmentsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

Aws::String DescribeEnvironmentsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeEnvironments&";
  if(m_applicationNameHasBeenSet)
  {
    ss << "ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }

  if(m_versionLabelHasBeenSet)
  {
    ss << "VersionLabel=" << StringUtils::URLEncode(m_versionLabel.c_str()) << "&";
  }

  if(m_environmentIdsHasBeenSet)
  {
    if (m_environmentIds.empty())
    {
      ss << "EnvironmentIds=&";
    }
    else
    {
      unsigned environmentIdsCount = 1;
      for(auto& item : m_environmentIds)
      {
        ss << "EnvironmentIds.member." << environmentIdsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        environmentIdsCount++;
      }
    }
  }

  if(m_environmentNamesHasBeenSet)
  {
    if (m_environmentNames.empty())
    {
      ss << "EnvironmentNames=&";
    }
    else
    {
      unsigned environmentNamesCount = 1;
      for(auto& item : m_environmentNames)
      {
        ss << "EnvironmentNames.member." << environmentNamesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        environmentNamesCount++;
      }
    }
  }

  if(m_includeDeletedHasBeenSet)
  {
    ss << "IncludeDeleted=" << std::boolalpha << m_includeDeleted << "&";
  }

  if(m_includedDeletedBackToHasBeenSet)
  {
    ss << "IncludedDeletedBackTo=" << StringUtils::URLEncode(m_includedDeletedBackTo.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
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


void  DescribeEnvironmentsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
