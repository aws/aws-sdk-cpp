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
  class RefreshTokenResult
  {
  public:
    AWS_AMPLIFYUIBUILDER_API RefreshTokenResult();
    AWS_AMPLIFYUIBUILDER_API RefreshTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYUIBUILDER_API RefreshTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline RefreshTokenResult& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>The access token.</p>
     */
    inline RefreshTokenResult& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p>The access token.</p>
     */
    inline RefreshTokenResult& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}


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
    inline RefreshTokenResult& WithExpiresIn(int value) { SetExpiresIn(value); return *this;}

  private:

    Aws::String m_accessToken;

    int m_expiresIn;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
