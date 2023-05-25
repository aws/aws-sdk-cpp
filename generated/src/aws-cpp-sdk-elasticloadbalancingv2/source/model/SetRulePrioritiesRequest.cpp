/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/SetRulePrioritiesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

SetRulePrioritiesRequest::SetRulePrioritiesRequest() : 
    m_rulePrioritiesHasBeenSet(false)
{
}

Aws::String SetRulePrioritiesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SetRulePriorities&";
  if(m_rulePrioritiesHasBeenSet)
  {
    unsigned rulePrioritiesCount = 1;
    for(auto& item : m_rulePriorities)
    {
      item.OutputToStream(ss, "RulePriorities.member.", rulePrioritiesCount, "");
      rulePrioritiesCount++;
    }
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  SetRulePrioritiesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
