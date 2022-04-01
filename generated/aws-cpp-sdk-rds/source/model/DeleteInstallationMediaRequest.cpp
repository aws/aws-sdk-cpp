/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DeleteInstallationMediaRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DeleteInstallationMediaRequest::DeleteInstallationMediaRequest() : 
    m_installationMediaIdHasBeenSet(false)
{
}

Aws::String DeleteInstallationMediaRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteInstallationMedia&";
  if(m_installationMediaIdHasBeenSet)
  {
    ss << "InstallationMediaId=" << StringUtils::URLEncode(m_installationMediaId.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DeleteInstallationMediaRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
