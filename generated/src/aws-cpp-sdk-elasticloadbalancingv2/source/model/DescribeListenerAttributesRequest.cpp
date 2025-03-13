/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/DescribeListenerAttributesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

Aws::String DescribeListenerAttributesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeListenerAttributes&";
  if(m_listenerArnHasBeenSet)
  {
    ss << "ListenerArn=" << StringUtils::URLEncode(m_listenerArn.c_str()) << "&";
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  DescribeListenerAttributesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
