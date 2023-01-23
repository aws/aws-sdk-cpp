/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/DescribeTargetGroupAttributesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

DescribeTargetGroupAttributesRequest::DescribeTargetGroupAttributesRequest() : 
    m_targetGroupArnHasBeenSet(false)
{
}

Aws::String DescribeTargetGroupAttributesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeTargetGroupAttributes&";
  if(m_targetGroupArnHasBeenSet)
  {
    ss << "TargetGroupArn=" << StringUtils::URLEncode(m_targetGroupArn.c_str()) << "&";
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  DescribeTargetGroupAttributesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
