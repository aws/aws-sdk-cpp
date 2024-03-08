/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DescribeResourceScanRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

DescribeResourceScanRequest::DescribeResourceScanRequest() : 
    m_resourceScanIdHasBeenSet(false)
{
}

Aws::String DescribeResourceScanRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeResourceScan&";
  if(m_resourceScanIdHasBeenSet)
  {
    ss << "ResourceScanId=" << StringUtils::URLEncode(m_resourceScanId.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  DescribeResourceScanRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
