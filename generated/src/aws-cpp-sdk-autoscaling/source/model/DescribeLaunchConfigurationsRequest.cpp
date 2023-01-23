/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DescribeLaunchConfigurationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

DescribeLaunchConfigurationsRequest::DescribeLaunchConfigurationsRequest() : 
    m_launchConfigurationNamesHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false)
{
}

Aws::String DescribeLaunchConfigurationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeLaunchConfigurations&";
  if(m_launchConfigurationNamesHasBeenSet)
  {
    unsigned launchConfigurationNamesCount = 1;
    for(auto& item : m_launchConfigurationNames)
    {
      ss << "LaunchConfigurationNames.member." << launchConfigurationNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      launchConfigurationNamesCount++;
    }
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  DescribeLaunchConfigurationsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
