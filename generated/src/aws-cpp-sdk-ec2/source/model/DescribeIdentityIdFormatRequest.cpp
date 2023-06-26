/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeIdentityIdFormatRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeIdentityIdFormatRequest::DescribeIdentityIdFormatRequest() : 
    m_principalArnHasBeenSet(false),
    m_resourceHasBeenSet(false)
{
}

Aws::String DescribeIdentityIdFormatRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeIdentityIdFormat&";
  if(m_principalArnHasBeenSet)
  {
    ss << "PrincipalArn=" << StringUtils::URLEncode(m_principalArn.c_str()) << "&";
  }

  if(m_resourceHasBeenSet)
  {
    ss << "Resource=" << StringUtils::URLEncode(m_resource.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeIdentityIdFormatRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
