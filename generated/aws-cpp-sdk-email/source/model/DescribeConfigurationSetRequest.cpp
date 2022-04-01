﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/DescribeConfigurationSetRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

DescribeConfigurationSetRequest::DescribeConfigurationSetRequest() : 
    m_configurationSetNameHasBeenSet(false),
    m_configurationSetAttributeNamesHasBeenSet(false)
{
}

Aws::String DescribeConfigurationSetRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeConfigurationSet&";
  if(m_configurationSetNameHasBeenSet)
  {
    ss << "ConfigurationSetName=" << StringUtils::URLEncode(m_configurationSetName.c_str()) << "&";
  }

  if(m_configurationSetAttributeNamesHasBeenSet)
  {
    unsigned configurationSetAttributeNamesCount = 1;
    for(auto& item : m_configurationSetAttributeNames)
    {
      ss << "ConfigurationSetAttributeNames.member." << configurationSetAttributeNamesCount << "="
          << StringUtils::URLEncode(ConfigurationSetAttributeMapper::GetNameForConfigurationSetAttribute(item).c_str()) << "&";
      configurationSetAttributeNamesCount++;
    }
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  DescribeConfigurationSetRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
