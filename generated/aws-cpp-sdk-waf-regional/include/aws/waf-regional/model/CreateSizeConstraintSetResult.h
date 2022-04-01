﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/SizeConstraintSet.h>
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
  class AWS_WAFREGIONAL_API CreateSizeConstraintSetResult
  {
  public:
    CreateSizeConstraintSetResult();
    CreateSizeConstraintSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateSizeConstraintSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <a>SizeConstraintSet</a> that contains no <code>SizeConstraint</code>
     * objects.</p>
     */
    inline const SizeConstraintSet& GetSizeConstraintSet() const{ return m_sizeConstraintSet; }

    /**
     * <p>A <a>SizeConstraintSet</a> that contains no <code>SizeConstraint</code>
     * objects.</p>
     */
    inline void SetSizeConstraintSet(const SizeConstraintSet& value) { m_sizeConstraintSet = value; }

    /**
     * <p>A <a>SizeConstraintSet</a> that contains no <code>SizeConstraint</code>
     * objects.</p>
     */
    inline void SetSizeConstraintSet(SizeConstraintSet&& value) { m_sizeConstraintSet = std::move(value); }

    /**
     * <p>A <a>SizeConstraintSet</a> that contains no <code>SizeConstraint</code>
     * objects.</p>
     */
    inline CreateSizeConstraintSetResult& WithSizeConstraintSet(const SizeConstraintSet& value) { SetSizeConstraintSet(value); return *this;}

    /**
     * <p>A <a>SizeConstraintSet</a> that contains no <code>SizeConstraint</code>
     * objects.</p>
     */
    inline CreateSizeConstraintSetResult& WithSizeConstraintSet(SizeConstraintSet&& value) { SetSizeConstraintSet(std::move(value)); return *this;}


    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateSizeConstraintSet</code> request. You can also use this value to
     * query the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateSizeConstraintSet</code> request. You can also use this value to
     * query the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(const Aws::String& value) { m_changeToken = value; }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateSizeConstraintSet</code> request. You can also use this value to
     * query the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(Aws::String&& value) { m_changeToken = std::move(value); }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateSizeConstraintSet</code> request. You can also use this value to
     * query the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(const char* value) { m_changeToken.assign(value); }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateSizeConstraintSet</code> request. You can also use this value to
     * query the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateSizeConstraintSetResult& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateSizeConstraintSet</code> request. You can also use this value to
     * query the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateSizeConstraintSetResult& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateSizeConstraintSet</code> request. You can also use this value to
     * query the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateSizeConstraintSetResult& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}

  private:

    SizeConstraintSet m_sizeConstraintSet;

    Aws::String m_changeToken;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
