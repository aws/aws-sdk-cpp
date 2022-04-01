﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/DescribeConfigurationOptionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

DescribeConfigurationOptionsRequest::DescribeConfigurationOptionsRequest() : 
    m_applicationNameHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_solutionStackNameHasBeenSet(false),
    m_platformArnHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
}

Aws::String DescribeConfigurationOptionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeConfigurationOptions&";
  if(m_applicationNameHasBeenSet)
  {
    ss << "ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }

  if(m_templateNameHasBeenSet)
  {
    ss << "TemplateName=" << StringUtils::URLEncode(m_templateName.c_str()) << "&";
  }

  if(m_environmentNameHasBeenSet)
  {
    ss << "EnvironmentName=" << StringUtils::URLEncode(m_environmentName.c_str()) << "&";
  }

  if(m_solutionStackNameHasBeenSet)
  {
    ss << "SolutionStackName=" << StringUtils::URLEncode(m_solutionStackName.c_str()) << "&";
  }

  if(m_platformArnHasBeenSet)
  {
    ss << "PlatformArn=" << StringUtils::URLEncode(m_platformArn.c_str()) << "&";
  }

  if(m_optionsHasBeenSet)
  {
    unsigned optionsCount = 1;
    for(auto& item : m_options)
    {
      item.OutputToStream(ss, "Options.member.", optionsCount, "");
      optionsCount++;
    }
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  DescribeConfigurationOptionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
