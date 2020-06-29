/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/UpdateApplicationResourceLifecycleRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

UpdateApplicationResourceLifecycleRequest::UpdateApplicationResourceLifecycleRequest() : 
    m_applicationNameHasBeenSet(false),
    m_resourceLifecycleConfigHasBeenSet(false)
{
}

Aws::String UpdateApplicationResourceLifecycleRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateApplicationResourceLifecycle&";
  if(m_applicationNameHasBeenSet)
  {
    ss << "ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }

  if(m_resourceLifecycleConfigHasBeenSet)
  {
    m_resourceLifecycleConfig.OutputToStream(ss, "ResourceLifecycleConfig");
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  UpdateApplicationResourceLifecycleRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
