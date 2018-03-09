﻿/*
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
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
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
  class AWS_COGNITOIDENTITYPROVIDER_API AssociateSoftwareTokenResult
  {
  public:
    AssociateSoftwareTokenResult();
    AssociateSoftwareTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AssociateSoftwareTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique generated shared secret code that is used in the TOTP algorithm to
     * generate a one time code.</p>
     */
    inline const Aws::String& GetSecretCode() const{ return m_secretCode; }

    /**
     * <p>A unique generated shared secret code that is used in the TOTP algorithm to
     * generate a one time code.</p>
     */
    inline void SetSecretCode(const Aws::String& value) { m_secretCode = value; }

    /**
     * <p>A unique generated shared secret code that is used in the TOTP algorithm to
     * generate a one time code.</p>
     */
    inline void SetSecretCode(Aws::String&& value) { m_secretCode = std::move(value); }

    /**
     * <p>A unique generated shared secret code that is used in the TOTP algorithm to
     * generate a one time code.</p>
     */
    inline void SetSecretCode(const char* value) { m_secretCode.assign(value); }

    /**
     * <p>A unique generated shared secret code that is used in the TOTP algorithm to
     * generate a one time code.</p>
     */
    inline AssociateSoftwareTokenResult& WithSecretCode(const Aws::String& value) { SetSecretCode(value); return *this;}

    /**
     * <p>A unique generated shared secret code that is used in the TOTP algorithm to
     * generate a one time code.</p>
     */
    inline AssociateSoftwareTokenResult& WithSecretCode(Aws::String&& value) { SetSecretCode(std::move(value)); return *this;}

    /**
     * <p>A unique generated shared secret code that is used in the TOTP algorithm to
     * generate a one time code.</p>
     */
    inline AssociateSoftwareTokenResult& WithSecretCode(const char* value) { SetSecretCode(value); return *this;}


    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. This allows authentication of the user as part of the MFA setup
     * process.</p>
     */
    inline const Aws::String& GetSession() const{ return m_session; }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. This allows authentication of the user as part of the MFA setup
     * process.</p>
     */
    inline void SetSession(const Aws::String& value) { m_session = value; }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. This allows authentication of the user as part of the MFA setup
     * process.</p>
     */
    inline void SetSession(Aws::String&& value) { m_session = std::move(value); }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. This allows authentication of the user as part of the MFA setup
     * process.</p>
     */
    inline void SetSession(const char* value) { m_session.assign(value); }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. This allows authentication of the user as part of the MFA setup
     * process.</p>
     */
    inline AssociateSoftwareTokenResult& WithSession(const Aws::String& value) { SetSession(value); return *this;}

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. This allows authentication of the user as part of the MFA setup
     * process.</p>
     */
    inline AssociateSoftwareTokenResult& WithSession(Aws::String&& value) { SetSession(std::move(value)); return *this;}

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. This allows authentication of the user as part of the MFA setup
     * process.</p>
     */
    inline AssociateSoftwareTokenResult& WithSession(const char* value) { SetSession(value); return *this;}

  private:

    Aws::String m_secretCode;

    Aws::String m_session;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
