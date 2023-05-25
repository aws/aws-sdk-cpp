/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/DescribePlatformVersionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

DescribePlatformVersionRequest::DescribePlatformVersionRequest() : 
    m_platformArnHasBeenSet(false)
{
}

Aws::String DescribePlatformVersionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribePlatformVersion&";
  if(m_platformArnHasBeenSet)
  {
    ss << "PlatformArn=" << StringUtils::URLEncode(m_platformArn.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  DescribePlatformVersionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
