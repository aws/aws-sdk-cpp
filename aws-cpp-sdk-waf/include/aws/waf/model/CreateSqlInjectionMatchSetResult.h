﻿/*
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
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/SqlInjectionMatchSet.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
  /**
   * <p>The response to a <code>CreateSqlInjectionMatchSet</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/CreateSqlInjectionMatchSetResponse">AWS
   * API Reference</a></p>
   */
  class AWS_WAF_API CreateSqlInjectionMatchSetResult
  {
  public:
    CreateSqlInjectionMatchSetResult();
    CreateSqlInjectionMatchSetResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateSqlInjectionMatchSetResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A <a>SqlInjectionMatchSet</a>.</p>
     */
    inline const SqlInjectionMatchSet& GetSqlInjectionMatchSet() const{ return m_sqlInjectionMatchSet; }

    /**
     * <p>A <a>SqlInjectionMatchSet</a>.</p>
     */
    inline void SetSqlInjectionMatchSet(const SqlInjectionMatchSet& value) { m_sqlInjectionMatchSet = value; }

    /**
     * <p>A <a>SqlInjectionMatchSet</a>.</p>
     */
    inline void SetSqlInjectionMatchSet(SqlInjectionMatchSet&& value) { m_sqlInjectionMatchSet = value; }

    /**
     * <p>A <a>SqlInjectionMatchSet</a>.</p>
     */
    inline CreateSqlInjectionMatchSetResult& WithSqlInjectionMatchSet(const SqlInjectionMatchSet& value) { SetSqlInjectionMatchSet(value); return *this;}

    /**
     * <p>A <a>SqlInjectionMatchSet</a>.</p>
     */
    inline CreateSqlInjectionMatchSetResult& WithSqlInjectionMatchSet(SqlInjectionMatchSet&& value) { SetSqlInjectionMatchSet(value); return *this;}

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateSqlInjectionMatchSet</code> request. You can also use this value to
     * query the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateSqlInjectionMatchSet</code> request. You can also use this value to
     * query the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(const Aws::String& value) { m_changeToken = value; }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateSqlInjectionMatchSet</code> request. You can also use this value to
     * query the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(Aws::String&& value) { m_changeToken = value; }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateSqlInjectionMatchSet</code> request. You can also use this value to
     * query the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(const char* value) { m_changeToken.assign(value); }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateSqlInjectionMatchSet</code> request. You can also use this value to
     * query the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateSqlInjectionMatchSetResult& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateSqlInjectionMatchSet</code> request. You can also use this value to
     * query the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateSqlInjectionMatchSetResult& WithChangeToken(Aws::String&& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateSqlInjectionMatchSet</code> request. You can also use this value to
     * query the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateSqlInjectionMatchSetResult& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}

  private:
    SqlInjectionMatchSet m_sqlInjectionMatchSet;
    Aws::String m_changeToken;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
