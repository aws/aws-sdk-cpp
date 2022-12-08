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
  class StartDeviceAuthorizationResult
  {
  public:
    AWS_SSOOIDC_API StartDeviceAuthorizationResult();
    AWS_SSOOIDC_API StartDeviceAuthorizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOOIDC_API StartDeviceAuthorizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The short-lived code that is used by the device when polling for a session
     * token.</p>
     */
    inline const Aws::String& GetDeviceCode() const{ return m_deviceCode; }

    /**
     * <p>The short-lived code that is used by the device when polling for a session
     * token.</p>
     */
    inline void SetDeviceCode(const Aws::String& value) { m_deviceCode = value; }

    /**
     * <p>The short-lived code that is used by the device when polling for a session
     * token.</p>
     */
    inline void SetDeviceCode(Aws::String&& value) { m_deviceCode = std::move(value); }

    /**
     * <p>The short-lived code that is used by the device when polling for a session
     * token.</p>
     */
    inline void SetDeviceCode(const char* value) { m_deviceCode.assign(value); }

    /**
     * <p>The short-lived code that is used by the device when polling for a session
     * token.</p>
     */
    inline StartDeviceAuthorizationResult& WithDeviceCode(const Aws::String& value) { SetDeviceCode(value); return *this;}

    /**
     * <p>The short-lived code that is used by the device when polling for a session
     * token.</p>
     */
    inline StartDeviceAuthorizationResult& WithDeviceCode(Aws::String&& value) { SetDeviceCode(std::move(value)); return *this;}

    /**
     * <p>The short-lived code that is used by the device when polling for a session
     * token.</p>
     */
    inline StartDeviceAuthorizationResult& WithDeviceCode(const char* value) { SetDeviceCode(value); return *this;}


    /**
     * <p>A one-time user verification code. This is needed to authorize an in-use
     * device.</p>
     */
    inline const Aws::String& GetUserCode() const{ return m_userCode; }

    /**
     * <p>A one-time user verification code. This is needed to authorize an in-use
     * device.</p>
     */
    inline void SetUserCode(const Aws::String& value) { m_userCode = value; }

    /**
     * <p>A one-time user verification code. This is needed to authorize an in-use
     * device.</p>
     */
    inline void SetUserCode(Aws::String&& value) { m_userCode = std::move(value); }

    /**
     * <p>A one-time user verification code. This is needed to authorize an in-use
     * device.</p>
     */
    inline void SetUserCode(const char* value) { m_userCode.assign(value); }

    /**
     * <p>A one-time user verification code. This is needed to authorize an in-use
     * device.</p>
     */
    inline StartDeviceAuthorizationResult& WithUserCode(const Aws::String& value) { SetUserCode(value); return *this;}

    /**
     * <p>A one-time user verification code. This is needed to authorize an in-use
     * device.</p>
     */
    inline StartDeviceAuthorizationResult& WithUserCode(Aws::String&& value) { SetUserCode(std::move(value)); return *this;}

    /**
     * <p>A one-time user verification code. This is needed to authorize an in-use
     * device.</p>
     */
    inline StartDeviceAuthorizationResult& WithUserCode(const char* value) { SetUserCode(value); return *this;}


    /**
     * <p>The URI of the verification page that takes the <code>userCode</code> to
     * authorize the device.</p>
     */
    inline const Aws::String& GetVerificationUri() const{ return m_verificationUri; }

    /**
     * <p>The URI of the verification page that takes the <code>userCode</code> to
     * authorize the device.</p>
     */
    inline void SetVerificationUri(const Aws::String& value) { m_verificationUri = value; }

    /**
     * <p>The URI of the verification page that takes the <code>userCode</code> to
     * authorize the device.</p>
     */
    inline void SetVerificationUri(Aws::String&& value) { m_verificationUri = std::move(value); }

    /**
     * <p>The URI of the verification page that takes the <code>userCode</code> to
     * authorize the device.</p>
     */
    inline void SetVerificationUri(const char* value) { m_verificationUri.assign(value); }

    /**
     * <p>The URI of the verification page that takes the <code>userCode</code> to
     * authorize the device.</p>
     */
    inline StartDeviceAuthorizationResult& WithVerificationUri(const Aws::String& value) { SetVerificationUri(value); return *this;}

    /**
     * <p>The URI of the verification page that takes the <code>userCode</code> to
     * authorize the device.</p>
     */
    inline StartDeviceAuthorizationResult& WithVerificationUri(Aws::String&& value) { SetVerificationUri(std::move(value)); return *this;}

    /**
     * <p>The URI of the verification page that takes the <code>userCode</code> to
     * authorize the device.</p>
     */
    inline StartDeviceAuthorizationResult& WithVerificationUri(const char* value) { SetVerificationUri(value); return *this;}


    /**
     * <p>An alternate URL that the client can use to automatically launch a browser.
     * This process skips the manual step in which the user visits the verification
     * page and enters their code.</p>
     */
    inline const Aws::String& GetVerificationUriComplete() const{ return m_verificationUriComplete; }

    /**
     * <p>An alternate URL that the client can use to automatically launch a browser.
     * This process skips the manual step in which the user visits the verification
     * page and enters their code.</p>
     */
    inline void SetVerificationUriComplete(const Aws::String& value) { m_verificationUriComplete = value; }

    /**
     * <p>An alternate URL that the client can use to automatically launch a browser.
     * This process skips the manual step in which the user visits the verification
     * page and enters their code.</p>
     */
    inline void SetVerificationUriComplete(Aws::String&& value) { m_verificationUriComplete = std::move(value); }

    /**
     * <p>An alternate URL that the client can use to automatically launch a browser.
     * This process skips the manual step in which the user visits the verification
     * page and enters their code.</p>
     */
    inline void SetVerificationUriComplete(const char* value) { m_verificationUriComplete.assign(value); }

    /**
     * <p>An alternate URL that the client can use to automatically launch a browser.
     * This process skips the manual step in which the user visits the verification
     * page and enters their code.</p>
     */
    inline StartDeviceAuthorizationResult& WithVerificationUriComplete(const Aws::String& value) { SetVerificationUriComplete(value); return *this;}

    /**
     * <p>An alternate URL that the client can use to automatically launch a browser.
     * This process skips the manual step in which the user visits the verification
     * page and enters their code.</p>
     */
    inline StartDeviceAuthorizationResult& WithVerificationUriComplete(Aws::String&& value) { SetVerificationUriComplete(std::move(value)); return *this;}

    /**
     * <p>An alternate URL that the client can use to automatically launch a browser.
     * This process skips the manual step in which the user visits the verification
     * page and enters their code.</p>
     */
    inline StartDeviceAuthorizationResult& WithVerificationUriComplete(const char* value) { SetVerificationUriComplete(value); return *this;}


    /**
     * <p>Indicates the number of seconds in which the verification code will become
     * invalid.</p>
     */
    inline int GetExpiresIn() const{ return m_expiresIn; }

    /**
     * <p>Indicates the number of seconds in which the verification code will become
     * invalid.</p>
     */
    inline void SetExpiresIn(int value) { m_expiresIn = value; }

    /**
     * <p>Indicates the number of seconds in which the verification code will become
     * invalid.</p>
     */
    inline StartDeviceAuthorizationResult& WithExpiresIn(int value) { SetExpiresIn(value); return *this;}


    /**
     * <p>Indicates the number of seconds the client must wait between attempts when
     * polling for a session.</p>
     */
    inline int GetInterval() const{ return m_interval; }

    /**
     * <p>Indicates the number of seconds the client must wait between attempts when
     * polling for a session.</p>
     */
    inline void SetInterval(int value) { m_interval = value; }

    /**
     * <p>Indicates the number of seconds the client must wait between attempts when
     * polling for a session.</p>
     */
    inline StartDeviceAuthorizationResult& WithInterval(int value) { SetInterval(value); return *this;}

  private:

    Aws::String m_deviceCode;

    Aws::String m_userCode;

    Aws::String m_verificationUri;

    Aws::String m_verificationUriComplete;

    int m_expiresIn;

    int m_interval;
  };

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
