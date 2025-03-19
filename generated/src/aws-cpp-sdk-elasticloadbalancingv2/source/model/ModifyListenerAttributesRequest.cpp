/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/ModifyListenerAttributesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

Aws::String ModifyListenerAttributesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyListenerAttributes&";
  if(m_listenerArnHasBeenSet)
  {
    ss << "ListenerArn=" << StringUtils::URLEncode(m_listenerArn.c_str()) << "&";
  }

  if(m_attributesHasBeenSet)
  {
    if (m_attributes.empty())
    {
      ss << "Attributes=&";
    }
    else
    {
      unsigned attributesCount = 1;
      for(auto& item : m_attributes)
      {
        item.OutputToStream(ss, "Attributes.member.", attributesCount, "");
        attributesCount++;
      }
    }
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  ModifyListenerAttributesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
