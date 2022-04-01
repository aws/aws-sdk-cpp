﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/RegexPatternSet.h>
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
namespace WAFRegional
{
namespace Model
{
  class AWS_WAFREGIONAL_API CreateRegexPatternSetResult
  {
  public:
    CreateRegexPatternSetResult();
    CreateRegexPatternSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateRegexPatternSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <a>RegexPatternSet</a> that contains no objects.</p>
     */
    inline const RegexPatternSet& GetRegexPatternSet() const{ return m_regexPatternSet; }

    /**
     * <p>A <a>RegexPatternSet</a> that contains no objects.</p>
     */
    inline void SetRegexPatternSet(const RegexPatternSet& value) { m_regexPatternSet = value; }

    /**
     * <p>A <a>RegexPatternSet</a> that contains no objects.</p>
     */
    inline void SetRegexPatternSet(RegexPatternSet&& value) { m_regexPatternSet = std::move(value); }

    /**
     * <p>A <a>RegexPatternSet</a> that contains no objects.</p>
     */
    inline CreateRegexPatternSetResult& WithRegexPatternSet(const RegexPatternSet& value) { SetRegexPatternSet(value); return *this;}

    /**
     * <p>A <a>RegexPatternSet</a> that contains no objects.</p>
     */
    inline CreateRegexPatternSetResult& WithRegexPatternSet(RegexPatternSet&& value) { SetRegexPatternSet(std::move(value)); return *this;}


    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRegexPatternSet</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRegexPatternSet</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(const Aws::String& value) { m_changeToken = value; }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRegexPatternSet</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(Aws::String&& value) { m_changeToken = std::move(value); }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRegexPatternSet</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(const char* value) { m_changeToken.assign(value); }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRegexPatternSet</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateRegexPatternSetResult& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRegexPatternSet</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateRegexPatternSetResult& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRegexPatternSet</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateRegexPatternSetResult& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}

  private:

    RegexPatternSet m_regexPatternSet;

    Aws::String m_changeToken;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
