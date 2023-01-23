/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/CreateApplicationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

CreateApplicationRequest::CreateApplicationRequest() : 
    m_applicationNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_resourceLifecycleConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateApplicationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateApplication&";
  if(m_applicationNameHasBeenSet)
  {
    ss << "ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_resourceLifecycleConfigHasBeenSet)
  {
    m_resourceLifecycleConfig.OutputToStream(ss, "ResourceLifecycleConfig");
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  CreateApplicationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
