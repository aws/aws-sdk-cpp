/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/DescribeEnvironmentHealthRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

DescribeEnvironmentHealthRequest::DescribeEnvironmentHealthRequest() : 
    m_environmentNameHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_attributeNamesHasBeenSet(false)
{
}

Aws::String DescribeEnvironmentHealthRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeEnvironmentHealth&";
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
          << StringUtils::URLEncode(EnvironmentHealthAttributeMapper::GetNameForEnvironmentHealthAttribute(item).c_str()) << "&";
      attributeNamesCount++;
    }
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  DescribeEnvironmentHealthRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
