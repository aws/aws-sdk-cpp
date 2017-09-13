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
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_WAF_API CreateRuleResult
  {
  public:
    CreateRuleResult();
    CreateRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <a>Rule</a> returned in the <code>CreateRule</code> response.</p>
     */
    inline const Rule& GetRule() const{ return m_rule; }

    /**
     * <p>The <a>Rule</a> returned in the <code>CreateRule</code> response.</p>
     */
    inline void SetRule(const Rule& value) { m_rule = value; }

    /**
     * <p>The <a>Rule</a> returned in the <code>CreateRule</code> response.</p>
     */
    inline void SetRule(Rule&& value) { m_rule = std::move(value); }

    /**
     * <p>The <a>Rule</a> returned in the <code>CreateRule</code> response.</p>
     */
    inline CreateRuleResult& WithRule(const Rule& value) { SetRule(value); return *this;}

    /**
     * <p>The <a>Rule</a> returned in the <code>CreateRule</code> response.</p>
     */
    inline CreateRuleResult& WithRule(Rule&& value) { SetRule(std::move(value)); return *this;}


    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRule</code> request. You can also use this value to query the status
     * of the request. For more information, see <a>GetChangeTokenStatus</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRule</code> request. You can also use this value to query the status
     * of the request. For more information, see <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(const Aws::String& value) { m_changeToken = value; }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRule</code> request. You can also use this value to query the status
     * of the request. For more information, see <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(Aws::String&& value) { m_changeToken = std::move(value); }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRule</code> request. You can also use this value to query the status
     * of the request. For more information, see <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(const char* value) { m_changeToken.assign(value); }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRule</code> request. You can also use this value to query the status
     * of the request. For more information, see <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateRuleResult& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRule</code> request. You can also use this value to query the status
     * of the request. For more information, see <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateRuleResult& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRule</code> request. You can also use this value to query the status
     * of the request. For more information, see <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateRuleResult& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}

  private:

    Rule m_rule;

    Aws::String m_changeToken;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
