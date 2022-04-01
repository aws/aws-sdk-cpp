/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/DeleteApplicationVersionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

DeleteApplicationVersionRequest::DeleteApplicationVersionRequest() : 
    m_applicationNameHasBeenSet(false),
    m_versionLabelHasBeenSet(false),
    m_deleteSourceBundle(false),
    m_deleteSourceBundleHasBeenSet(false)
{
}

Aws::String DeleteApplicationVersionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteApplicationVersion&";
  if(m_applicationNameHasBeenSet)
  {
    ss << "ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }

  if(m_versionLabelHasBeenSet)
  {
    ss << "VersionLabel=" << StringUtils::URLEncode(m_versionLabel.c_str()) << "&";
  }

  if(m_deleteSourceBundleHasBeenSet)
  {
    ss << "DeleteSourceBundle=" << std::boolalpha << m_deleteSourceBundle << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  DeleteApplicationVersionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
