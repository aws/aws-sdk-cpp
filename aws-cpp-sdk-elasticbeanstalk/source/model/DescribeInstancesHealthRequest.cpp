/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/DescribeInstancesHealthRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

DescribeInstancesHealthRequest::DescribeInstancesHealthRequest() : 
    m_environmentNameHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_attributeNamesHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeInstancesHealthRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeInstancesHealth&";
  if(m_environmentNameHasBeenSet)
  {
    ss << "EnvironmentName=" << StringUtils::URLEncode(m_environmentName.c_str()) << "&";
  }

  if(m_environmentIdHasBeenSet)
  {
    ss << "EnvironmentId=" << StringUtils::URLEncode(m_environmentId.c_str()) << "&";
  }

  if(m_attributeNamesHasBeenSet)
  {
    unsigned attributeNamesCount = 1;
    for(auto& item : m_attributeNames)
    {
      ss << "AttributeNames.member." << attributeNamesCount << "="
          << StringUtils::URLEncode(InstancesHealthAttributeMapper::GetNameForInstancesHealthAttribute(item).c_str()) << "&";
      attributeNamesCount++;
    }
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  DescribeInstancesHealthRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
