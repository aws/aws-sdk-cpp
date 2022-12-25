/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-oidc/SSOOIDC_EXPORTS.h>
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
namespace SSOOIDC
{
namespace Model
{
  class CreateTokenResult
  {
  public:
    AWS_SSOOIDC_API CreateTokenResult();
    AWS_SSOOIDC_API CreateTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOOIDC_API CreateTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An opaque token to access IAM Identity Center resources assigned to a
     * user.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>An opaque token to access IAM Identity Center resources assigned to a
     * user.</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessToken = value; }

    /**
     * <p>An opaque token to access IAM Identity Center resources assigned to a
     * user.</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessToken = std::move(value); }

    /**
     * <p>An opaque token to access IAM Identity Center resources assigned to a
     * user.</p>
     */
    inline void SetAccessToken(const char* value) { m_accessToken.assign(value); }

    /**
     * <p>An opaque token to access IAM Identity Center resources assigned to a
     * user.</p>
     */
    inline CreateTokenResult& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>An opaque token to access IAM Identity Center resources assigned to a
     * user.</p>
     */
    inline CreateTokenResult& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p>An opaque token to access IAM Identity Center resources assigned to a
     * user.</p>
     */
    inline CreateTokenResult& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}


    /**
     * <p>Used to notify the client that the returned token is an access token. The
     * supported type is <code>BearerToken</code>.</p>
     */
    inline const Aws::String& GetTokenType() const{ return m_tokenType; }

    /**
     * <p>Used to notify the client that the returned token is an access token. The
     * supported type is <code>BearerToken</code>.</p>
     */
    inline void SetTokenType(const Aws::String& value) { m_tokenType = value; }

    /**
     * <p>Used to notify the client that the returned token is an access token. The
     * supported type is <code>BearerToken</code>.</p>
     */
    inline void SetTokenType(Aws::String&& value) { m_tokenType = std::move(value); }

    /**
     * <p>Used to notify the client that the returned token is an access token. The
     * supported type is <code>BearerToken</code>.</p>
     */
    inline void SetTokenType(const char* value) { m_tokenType.assign(value); }

    /**
     * <p>Used to notify the client that the returned token is an access token. The
     * supported type is <code>BearerToken</code>.</p>
     */
    inline CreateTokenResult& WithTokenType(const Aws::String& value) { SetTokenType(value); return *this;}

    /**
     * <p>Used to notify the client that the returned token is an access token. The
     * supported type is <code>BearerToken</code>.</p>
     */
    inline CreateTokenResult& WithTokenType(Aws::String&& value) { SetTokenType(std::move(value)); return *this;}

    /**
     * <p>Used to notify the client that the returned token is an access token. The
     * supported type is <code>BearerToken</code>.</p>
     */
    inline CreateTokenResult& WithTokenType(const char* value) { SetTokenType(value); return *this;}


    /**
     * <p>Indicates the time in seconds when an access token will expire.</p>
     */
    inline int GetExpiresIn() const{ return m_expiresIn; }

    /**
     * <p>Indicates the time in seconds when an access token will expire.</p>
     */
    inline void SetExpiresIn(int value) { m_expiresIn = value; }

    /**
     * <p>Indicates the time in seconds when an access token will expire.</p>
     */
    inline CreateTokenResult& WithExpiresIn(int value) { SetExpiresIn(value); return *this;}


    /**
     * <p>Currently, <code>refreshToken</code> is not yet implemented and is not
     * supported. For more information about the features and limitations of the
     * current IAM Identity Center OIDC implementation, see <i>Considerations for Using
     * this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p> <p>A token that, if present, can be
     * used to refresh a previously issued access token that might have expired.</p>
     */
    inline const Aws::String& GetRefreshToken() const{ return m_refreshToken; }

    /**
     * <p>Currently, <code>refreshToken</code> is not yet implemented and is not
     * supported. For more information about the features and limitations of the
     * current IAM Identity Center OIDC implementation, see <i>Considerations for Using
     * this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p> <p>A token that, if present, can be
     * used to refresh a previously issued access token that might have expired.</p>
     */
    inline void SetRefreshToken(const Aws::String& value) { m_refreshToken = value; }

    /**
     * <p>Currently, <code>refreshToken</code> is not yet implemented and is not
     * supported. For more information about the features and limitations of the
     * current IAM Identity Center OIDC implementation, see <i>Considerations for Using
     * this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p> <p>A token that, if present, can be
     * used to refresh a previously issued access token that might have expired.</p>
     */
    inline void SetRefreshToken(Aws::String&& value) { m_refreshToken = std::move(value); }

    /**
     * <p>Currently, <code>refreshToken</code> is not yet implemented and is not
     * supported. For more information about the features and limitations of the
     * current IAM Identity Center OIDC implementation, see <i>Considerations for Using
     * this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p> <p>A token that, if present, can be
     * used to refresh a previously issued access token that might have expired.</p>
     */
    inline void SetRefreshToken(const char* value) { m_refreshToken.assign(value); }

    /**
     * <p>Currently, <code>refreshToken</code> is not yet implemented and is not
     * supported. For more information about the features and limitations of the
     * current IAM Identity Center OIDC implementation, see <i>Considerations for Using
     * this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p> <p>A token that, if present, can be
     * used to refresh a previously issued access token that might have expired.</p>
     */
    inline CreateTokenResult& WithRefreshToken(const Aws::String& value) { SetRefreshToken(value); return *this;}

    /**
     * <p>Currently, <code>refreshToken</code> is not yet implemented and is not
     * supported. For more information about the features and limitations of the
     * current IAM Identity Center OIDC implementation, see <i>Considerations for Using
     * this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p> <p>A token that, if present, can be
     * used to refresh a previously issued access token that might have expired.</p>
     */
    inline CreateTokenResult& WithRefreshToken(Aws::String&& value) { SetRefreshToken(std::move(value)); return *this;}

    /**
     * <p>Currently, <code>refreshToken</code> is not yet implemented and is not
     * supported. For more information about the features and limitations of the
     * current IAM Identity Center OIDC implementation, see <i>Considerations for Using
     * this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p> <p>A token that, if present, can be
     * used to refresh a previously issued access token that might have expired.</p>
     */
    inline CreateTokenResult& WithRefreshToken(const char* value) { SetRefreshToken(value); return *this;}


    /**
     * <p>Currently, <code>idToken</code> is not yet implemented and is not supported.
     * For more information about the features and limitations of the current IAM
     * Identity Center OIDC implementation, see <i>Considerations for Using this
     * Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p> <p>The identifier of the user that
     * associated with the access token, if present.</p>
     */
    inline const Aws::String& GetIdToken() const{ return m_idToken; }

    /**
     * <p>Currently, <code>idToken</code> is not yet implemented and is not supported.
     * For more information about the features and limitations of the current IAM
     * Identity Center OIDC implementation, see <i>Considerations for Using this
     * Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p> <p>The identifier of the user that
     * associated with the access token, if present.</p>
     */
    inline void SetIdToken(const Aws::String& value) { m_idToken = value; }

    /**
     * <p>Currently, <code>idToken</code> is not yet implemented and is not supported.
     * For more information about the features and limitations of the current IAM
     * Identity Center OIDC implementation, see <i>Considerations for Using this
     * Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p> <p>The identifier of the user that
     * associated with the access token, if present.</p>
     */
    inline void SetIdToken(Aws::String&& value) { m_idToken = std::move(value); }

    /**
     * <p>Currently, <code>idToken</code> is not yet implemented and is not supported.
     * For more information about the features and limitations of the current IAM
     * Identity Center OIDC implementation, see <i>Considerations for Using this
     * Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p> <p>The identifier of the user that
     * associated with the access token, if present.</p>
     */
    inline void SetIdToken(const char* value) { m_idToken.assign(value); }

    /**
     * <p>Currently, <code>idToken</code> is not yet implemented and is not supported.
     * For more information about the features and limitations of the current IAM
     * Identity Center OIDC implementation, see <i>Considerations for Using this
     * Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p> <p>The identifier of the user that
     * associated with the access token, if present.</p>
     */
    inline CreateTokenResult& WithIdToken(const Aws::String& value) { SetIdToken(value); return *this;}

    /**
     * <p>Currently, <code>idToken</code> is not yet implemented and is not supported.
     * For more information about the features and limitations of the current IAM
     * Identity Center OIDC implementation, see <i>Considerations for Using this
     * Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p> <p>The identifier of the user that
     * associated with the access token, if present.</p>
     */
    inline CreateTokenResult& WithIdToken(Aws::String&& value) { SetIdToken(std::move(value)); return *this;}

    /**
     * <p>Currently, <code>idToken</code> is not yet implemented and is not supported.
     * For more information about the features and limitations of the current IAM
     * Identity Center OIDC implementation, see <i>Considerations for Using this
     * Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p> <p>The identifier of the user that
     * associated with the access token, if present.</p>
     */
    inline CreateTokenResult& WithIdToken(const char* value) { SetIdToken(value); return *this;}

  private:

    Aws::String m_accessToken;

    Aws::String m_tokenType;

    int m_expiresIn;

    Aws::String m_refreshToken;

    Aws::String m_idToken;
  };

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
