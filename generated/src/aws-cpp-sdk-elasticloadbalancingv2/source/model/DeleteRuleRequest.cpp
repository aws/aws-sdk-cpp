/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/DeleteRuleRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

DeleteRuleRequest::DeleteRuleRequest() : 
    m_ruleArnHasBeenSet(false)
{
}

Aws::String DeleteRuleRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteRule&";
  if(m_ruleArnHasBeenSet)
  {
    ss << "RuleArn=" << StringUtils::URLEncode(m_ruleArn.c_str()) << "&";
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  DeleteRuleRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
