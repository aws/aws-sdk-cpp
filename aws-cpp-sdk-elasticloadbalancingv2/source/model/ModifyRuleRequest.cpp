/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

