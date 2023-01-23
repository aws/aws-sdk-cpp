/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/DeletePlatformVersionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

DeletePlatformVersionRequest::DeletePlatformVersionRequest() : 
    m_platformArnHasBeenSet(false)
{
}

Aws::String DeletePlatformVersionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeletePlatformVersion&";
  if(m_platformArnHasBeenSet)
  {
    ss << "PlatformArn=" << StringUtils::URLEncode(m_platformArn.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  DeletePlatformVersionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
