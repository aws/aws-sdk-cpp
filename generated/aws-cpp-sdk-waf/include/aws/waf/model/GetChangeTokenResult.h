﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
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
  class AWS_WAF_API GetChangeTokenResult
  {
  public:
    GetChangeTokenResult();
    GetChangeTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetChangeTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>ChangeToken</code> that you used in the request. Use this value in
     * a <code>GetChangeTokenStatus</code> request to get the current status of the
     * request. </p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }

    /**
     * <p>The <code>ChangeToken</code> that you used in the request. Use this value in
     * a <code>GetChangeTokenStatus</code> request to get the current status of the
     * request. </p>
     */
    inline void SetChangeToken(const Aws::String& value) { m_changeToken = value; }

    /**
     * <p>The <code>ChangeToken</code> that you used in the request. Use this value in
     * a <code>GetChangeTokenStatus</code> request to get the current status of the
     * request. </p>
     */
    inline void SetChangeToken(Aws::String&& value) { m_changeToken = std::move(value); }

    /**
     * <p>The <code>ChangeToken</code> that you used in the request. Use this value in
     * a <code>GetChangeTokenStatus</code> request to get the current status of the
     * request. </p>
     */
    inline void SetChangeToken(const char* value) { m_changeToken.assign(value); }

    /**
     * <p>The <code>ChangeToken</code> that you used in the request. Use this value in
     * a <code>GetChangeTokenStatus</code> request to get the current status of the
     * request. </p>
     */
    inline GetChangeTokenResult& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The <code>ChangeToken</code> that you used in the request. Use this value in
     * a <code>GetChangeTokenStatus</code> request to get the current status of the
     * request. </p>
     */
    inline GetChangeTokenResult& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The <code>ChangeToken</code> that you used in the request. Use this value in
     * a <code>GetChangeTokenStatus</code> request to get the current status of the
     * request. </p>
     */
    inline GetChangeTokenResult& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}

  private:

    Aws::String m_changeToken;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
