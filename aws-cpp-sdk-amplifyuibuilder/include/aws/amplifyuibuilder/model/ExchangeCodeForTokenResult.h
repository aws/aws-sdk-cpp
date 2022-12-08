/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{
  class ExchangeCodeForTokenResult
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ExchangeCodeForTokenResult();
    AWS_AMPLIFYUIBUILDER_API ExchangeCodeForTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYUIBUILDER_API ExchangeCodeForTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The access token.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>The access token.</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessToken = value; }

    /**
     * <p>The access token.</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessToken = std::move(value); }

    /**
     * <p>The access token.</p>
     */
    inline void SetAccessToken(const char* value) { m_accessToken.assign(value); }

    /**
     * <p>The access token.</p>
     */
    inline ExchangeCodeForTokenResult& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>The access token.</p>
     */
    inline ExchangeCodeForTokenResult& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p>The access token.</p>
     */
    inline ExchangeCodeForTokenResult& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}


    /**
     * <p>The date and time when the new access token expires.</p>
     */
    inline int GetExpiresIn() const{ return m_expiresIn; }

    /**
     * <p>The date and time when the new access token expires.</p>
     */
    inline void SetExpiresIn(int value) { m_expiresIn = value; }

    /**
     * <p>The date and time when the new access token expires.</p>
     */
    inline ExchangeCodeForTokenResult& WithExpiresIn(int value) { SetExpiresIn(value); return *this;}


    /**
     * <p>The token to use to refresh a previously issued access token that might have
     * expired.</p>
     */
    inline const Aws::String& GetRefreshToken() const{ return m_refreshToken; }

    /**
     * <p>The token to use to refresh a previously issued access token that might have
     * expired.</p>
     */
    inline void SetRefreshToken(const Aws::String& value) { m_refreshToken = value; }

    /**
     * <p>The token to use to refresh a previously issued access token that might have
     * expired.</p>
     */
    inline void SetRefreshToken(Aws::String&& value) { m_refreshToken = std::move(value); }

    /**
     * <p>The token to use to refresh a previously issued access token that might have
     * expired.</p>
     */
    inline void SetRefreshToken(const char* value) { m_refreshToken.assign(value); }

    /**
     * <p>The token to use to refresh a previously issued access token that might have
     * expired.</p>
     */
    inline ExchangeCodeForTokenResult& WithRefreshToken(const Aws::String& value) { SetRefreshToken(value); return *this;}

    /**
     * <p>The token to use to refresh a previously issued access token that might have
     * expired.</p>
     */
    inline ExchangeCodeForTokenResult& WithRefreshToken(Aws::String&& value) { SetRefreshToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to refresh a previously issued access token that might have
     * expired.</p>
     */
    inline ExchangeCodeForTokenResult& WithRefreshToken(const char* value) { SetRefreshToken(value); return *this;}

  private:

    Aws::String m_accessToken;

    int m_expiresIn;

    Aws::String m_refreshToken;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
