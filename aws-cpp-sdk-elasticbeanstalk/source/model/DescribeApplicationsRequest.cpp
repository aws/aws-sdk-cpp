/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/DescribeApplicationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

DescribeApplicationsRequest::DescribeApplicationsRequest() : 
    m_applicationNamesHasBeenSet(false)
{
}

Aws::String DescribeApplicationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeApplications&";
  if(m_applicationNamesHasBeenSet)
  {
    unsigned applicationNamesCount = 1;
    for(auto& item : m_applicationNames)
    {
      ss << "ApplicationNames.member." << applicationNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      applicationNamesCount++;
    }
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  DescribeApplicationsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
