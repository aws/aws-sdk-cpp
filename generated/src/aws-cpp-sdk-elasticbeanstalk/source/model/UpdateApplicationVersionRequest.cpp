/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/UpdateApplicationVersionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

UpdateApplicationVersionRequest::UpdateApplicationVersionRequest() : 
    m_applicationNameHasBeenSet(false),
    m_versionLabelHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String UpdateApplicationVersionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateApplicationVersion&";
  if(m_applicationNameHasBeenSet)
  {
    ss << "ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }

  if(m_versionLabelHasBeenSet)
  {
    ss << "VersionLabel=" << StringUtils::URLEncode(m_versionLabel.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  UpdateApplicationVersionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
