/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/ModifyRuleRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

ModifyRuleRequest::ModifyRuleRequest() : 
    m_ruleArnHasBeenSet(false),
    m_conditionsHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
}

Aws::String ModifyRuleRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyRule&";
  if(m_ruleArnHasBeenSet)
  {
    ss << "RuleArn=" << StringUtils::URLEncode(m_ruleArn.c_str()) << "&";
  }

  if(m_conditionsHasBeenSet)
  {
    unsigned conditionsCount = 1;
    for(auto& item : m_conditions)
    {
      item.OutputToStream(ss, "Conditions.member.", conditionsCount, "");
      conditionsCount++;
    }
  }

  if(m_actionsHasBeenSet)
  {
    unsigned actionsCount = 1;
    for(auto& item : m_actions)
    {
      item.OutputToStream(ss, "Actions.member.", actionsCount, "");
      actionsCount++;
    }
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  ModifyRuleRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
