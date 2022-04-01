/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/DeleteListenerRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

DeleteListenerRequest::DeleteListenerRequest() : 
    m_listenerArnHasBeenSet(false)
{
}

Aws::String DeleteListenerRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteListener&";
  if(m_listenerArnHasBeenSet)
  {
    ss << "ListenerArn=" << StringUtils::URLEncode(m_listenerArn.c_str()) << "&";
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  DeleteListenerRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
