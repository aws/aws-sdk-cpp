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
#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeRules.</p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API DescribeRulesRequest : public ElasticLoadBalancingv2Request
  {
  public:
    DescribeRulesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline const Aws::String& GetListenerArn() const{ return m_listenerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerArn(const Aws::String& value) { m_listenerArnHasBeenSet = true; m_listenerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerArn(Aws::String&& value) { m_listenerArnHasBeenSet = true; m_listenerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerArn(const char* value) { m_listenerArnHasBeenSet = true; m_listenerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline DescribeRulesRequest& WithListenerArn(const Aws::String& value) { SetListenerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline DescribeRulesRequest& WithListenerArn(Aws::String&& value) { SetListenerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline DescribeRulesRequest& WithListenerArn(const char* value) { SetListenerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the rules.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRuleArns() const{ return m_ruleArns; }

    /**
     * <p>The Amazon Resource Names (ARN) of the rules.</p>
     */
    inline void SetRuleArns(const Aws::Vector<Aws::String>& value) { m_ruleArnsHasBeenSet = true; m_ruleArns = value; }

    /**
     * <p>The Amazon Resource Names (ARN) of the rules.</p>
     */
    inline void SetRuleArns(Aws::Vector<Aws::String>&& value) { m_ruleArnsHasBeenSet = true; m_ruleArns = value; }

    /**
     * <p>The Amazon Resource Names (ARN) of the rules.</p>
     */
    inline DescribeRulesRequest& WithRuleArns(const Aws::Vector<Aws::String>& value) { SetRuleArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the rules.</p>
     */
    inline DescribeRulesRequest& WithRuleArns(Aws::Vector<Aws::String>&& value) { SetRuleArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the rules.</p>
     */
    inline DescribeRulesRequest& AddRuleArns(const Aws::String& value) { m_ruleArnsHasBeenSet = true; m_ruleArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the rules.</p>
     */
    inline DescribeRulesRequest& AddRuleArns(Aws::String&& value) { m_ruleArnsHasBeenSet = true; m_ruleArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the rules.</p>
     */
    inline DescribeRulesRequest& AddRuleArns(const char* value) { m_ruleArnsHasBeenSet = true; m_ruleArns.push_back(value); return *this; }

  private:
    Aws::String m_listenerArn;
    bool m_listenerArnHasBeenSet;
    Aws::Vector<Aws::String> m_ruleArns;
    bool m_ruleArnsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
