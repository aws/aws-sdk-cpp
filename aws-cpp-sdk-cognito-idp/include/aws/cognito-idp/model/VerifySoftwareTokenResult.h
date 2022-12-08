/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/VerifySoftwareTokenResponseType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{
  class VerifySoftwareTokenResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API VerifySoftwareTokenResult();
    AWS_COGNITOIDENTITYPROVIDER_API VerifySoftwareTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API VerifySoftwareTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the verify software token.</p>
     */
    inline const VerifySoftwareTokenResponseType& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the verify software token.</p>
     */
    inline void SetStatus(const VerifySoftwareTokenResponseType& value) { m_status = value; }

    /**
     * <p>The status of the verify software token.</p>
     */
    inline void SetStatus(VerifySoftwareTokenResponseType&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the verify software token.</p>
     */
    inline VerifySoftwareTokenResult& WithStatus(const VerifySoftwareTokenResponseType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the verify software token.</p>
     */
    inline VerifySoftwareTokenResult& WithStatus(VerifySoftwareTokenResponseType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The session that should be passed both ways in challenge-response calls to
     * the service.</p>
     */
    inline const Aws::String& GetSession() const{ return m_session; }

    /**
     * <p>The session that should be passed both ways in challenge-response calls to
     * the service.</p>
     */
    inline void SetSession(const Aws::String& value) { m_session = value; }

    /**
     * <p>The session that should be passed both ways in challenge-response calls to
     * the service.</p>
     */
    inline void SetSession(Aws::String&& value) { m_session = std::move(value); }

    /**
     * <p>The session that should be passed both ways in challenge-response calls to
     * the service.</p>
     */
    inline void SetSession(const char* value) { m_session.assign(value); }

    /**
     * <p>The session that should be passed both ways in challenge-response calls to
     * the service.</p>
     */
    inline VerifySoftwareTokenResult& WithSession(const Aws::String& value) { SetSession(value); return *this;}

    /**
     * <p>The session that should be passed both ways in challenge-response calls to
     * the service.</p>
     */
    inline VerifySoftwareTokenResult& WithSession(Aws::String&& value) { SetSession(std::move(value)); return *this;}

    /**
     * <p>The session that should be passed both ways in challenge-response calls to
     * the service.</p>
     */
    inline VerifySoftwareTokenResult& WithSession(const char* value) { SetSession(value); return *this;}

  private:

    VerifySoftwareTokenResponseType m_status;

    Aws::String m_session;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
