/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/RuleGroup.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WAF
{
namespace Model
{
  class AWS_WAF_API GetRuleGroupResult
  {
  public:
    GetRuleGroupResult();
    GetRuleGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRuleGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the <a>RuleGroup</a> that you specified in the
     * <code>GetRuleGroup</code> request. </p>
     */
    inline const RuleGroup& GetRuleGroup() const{ return m_ruleGroup; }

    /**
     * <p>Information about the <a>RuleGroup</a> that you specified in the
     * <code>GetRuleGroup</code> request. </p>
     */
    inline void SetRuleGroup(const RuleGroup& value) { m_ruleGroup = value; }

    /**
     * <p>Information about the <a>RuleGroup</a> that you specified in the
     * <code>GetRuleGroup</code> request. </p>
     */
    inline void SetRuleGroup(RuleGroup&& value) { m_ruleGroup = std::move(value); }

    /**
     * <p>Information about the <a>RuleGroup</a> that you specified in the
     * <code>GetRuleGroup</code> request. </p>
     */
    inline GetRuleGroupResult& WithRuleGroup(const RuleGroup& value) { SetRuleGroup(value); return *this;}

    /**
     * <p>Information about the <a>RuleGroup</a> that you specified in the
     * <code>GetRuleGroup</code> request. </p>
     */
    inline GetRuleGroupResult& WithRuleGroup(RuleGroup&& value) { SetRuleGroup(std::move(value)); return *this;}

  private:

    RuleGroup m_ruleGroup;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
