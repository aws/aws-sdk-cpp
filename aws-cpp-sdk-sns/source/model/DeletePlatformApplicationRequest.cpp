/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/DeletePlatformApplicationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

DeletePlatformApplicationRequest::DeletePlatformApplicationRequest() : 
    m_platformApplicationArnHasBeenSet(false)
{
}

Aws::String DeletePlatformApplicationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeletePlatformApplication&";
  if(m_platformApplicationArnHasBeenSet)
  {
    ss << "PlatformApplicationArn=" << StringUtils::URLEncode(m_platformApplicationArn.c_str()) << "&";
  }

  ss << "Version=2010-03-31";
  return ss.str();
}


void  DeletePlatformApplicationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
