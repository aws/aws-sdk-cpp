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
#include <aws/waf/model/Rule.h>
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
  class AWS_WAF_API GetRuleResult
  {
  public:
    GetRuleResult();
    GetRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the <a>Rule</a> that you specified in the
     * <code>GetRule</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>Rule</a>: Contains <code>MetricName</code>,
     * <code>Name</code>, an array of <code>Predicate</code> objects, and
     * <code>RuleId</code> </p> </li> <li> <p> <a>Predicate</a>: Each
     * <code>Predicate</code> object contains <code>DataId</code>,
     * <code>Negated</code>, and <code>Type</code> </p> </li> </ul>
     */
    inline const Rule& GetRule() const{ return m_rule; }

    /**
     * <p>Information about the <a>Rule</a> that you specified in the
     * <code>GetRule</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>Rule</a>: Contains <code>MetricName</code>,
     * <code>Name</code>, an array of <code>Predicate</code> objects, and
     * <code>RuleId</code> </p> </li> <li> <p> <a>Predicate</a>: Each
     * <code>Predicate</code> object contains <code>DataId</code>,
     * <code>Negated</code>, and <code>Type</code> </p> </li> </ul>
     */
    inline void SetRule(const Rule& value) { m_rule = value; }

    /**
     * <p>Information about the <a>Rule</a> that you specified in the
     * <code>GetRule</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>Rule</a>: Contains <code>MetricName</code>,
     * <code>Name</code>, an array of <code>Predicate</code> objects, and
     * <code>RuleId</code> </p> </li> <li> <p> <a>Predicate</a>: Each
     * <code>Predicate</code> object contains <code>DataId</code>,
     * <code>Negated</code>, and <code>Type</code> </p> </li> </ul>
     */
    inline void SetRule(Rule&& value) { m_rule = std::move(value); }

    /**
     * <p>Information about the <a>Rule</a> that you specified in the
     * <code>GetRule</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>Rule</a>: Contains <code>MetricName</code>,
     * <code>Name</code>, an array of <code>Predicate</code> objects, and
     * <code>RuleId</code> </p> </li> <li> <p> <a>Predicate</a>: Each
     * <code>Predicate</code> object contains <code>DataId</code>,
     * <code>Negated</code>, and <code>Type</code> </p> </li> </ul>
     */
    inline GetRuleResult& WithRule(const Rule& value) { SetRule(value); return *this;}

    /**
     * <p>Information about the <a>Rule</a> that you specified in the
     * <code>GetRule</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>Rule</a>: Contains <code>MetricName</code>,
     * <code>Name</code>, an array of <code>Predicate</code> objects, and
     * <code>RuleId</code> </p> </li> <li> <p> <a>Predicate</a>: Each
     * <code>Predicate</code> object contains <code>DataId</code>,
     * <code>Negated</code>, and <code>Type</code> </p> </li> </ul>
     */
    inline GetRuleResult& WithRule(Rule&& value) { SetRule(std::move(value)); return *this;}

  private:

    Rule m_rule;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
