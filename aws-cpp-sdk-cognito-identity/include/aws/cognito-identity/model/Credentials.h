/*
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
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoIdentity
{
namespace Model
{

  /**
   * <p>Credentials for the provided identity ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/Credentials">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITY_API Credentials
  {
  public:
    Credentials();
    Credentials(const Aws::Utils::Json::JsonValue& jsonValue);
    Credentials& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The Access Key portion of the credentials.</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }

    /**
     * <p>The Access Key portion of the credentials.</p>
     */
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }

    /**
     * <p>The Access Key portion of the credentials.</p>
     */
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }

    /**
     * <p>The Access Key portion of the credentials.</p>
     */
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }

    /**
     * <p>The Access Key portion of the credentials.</p>
     */
    inline Credentials& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>The Access Key portion of the credentials.</p>
     */
    inline Credentials& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}

    /**
     * <p>The Access Key portion of the credentials.</p>
     */
    inline Credentials& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>The Secret Access Key portion of the credentials</p>
     */
    inline const Aws::String& GetSecretKey() const{ return m_secretKey; }

    /**
     * <p>The Secret Access Key portion of the credentials</p>
     */
    inline void SetSecretKey(const Aws::String& value) { m_secretKeyHasBeenSet = true; m_secretKey = value; }

    /**
     * <p>The Secret Access Key portion of the credentials</p>
     */
    inline void SetSecretKey(Aws::String&& value) { m_secretKeyHasBeenSet = true; m_secretKey = std::move(value); }

    /**
     * <p>The Secret Access Key portion of the credentials</p>
     */
    inline void SetSecretKey(const char* value) { m_secretKeyHasBeenSet = true; m_secretKey.assign(value); }

    /**
     * <p>The Secret Access Key portion of the credentials</p>
     */
    inline Credentials& WithSecretKey(const Aws::String& value) { SetSecretKey(value); return *this;}

    /**
     * <p>The Secret Access Key portion of the credentials</p>
     */
    inline Credentials& WithSecretKey(Aws::String&& value) { SetSecretKey(std::move(value)); return *this;}

    /**
     * <p>The Secret Access Key portion of the credentials</p>
     */
    inline Credentials& WithSecretKey(const char* value) { SetSecretKey(value); return *this;}

    /**
     * <p>The Session Token portion of the credentials</p>
     */
    inline const Aws::String& GetSessionToken() const{ return m_sessionToken; }

    /**
     * <p>The Session Token portion of the credentials</p>
     */
    inline void SetSessionToken(const Aws::String& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = value; }

    /**
     * <p>The Session Token portion of the credentials</p>
     */
    inline void SetSessionToken(Aws::String&& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = std::move(value); }

    /**
     * <p>The Session Token portion of the credentials</p>
     */
    inline void SetSessionToken(const char* value) { m_sessionTokenHasBeenSet = true; m_sessionToken.assign(value); }

    /**
     * <p>The Session Token portion of the credentials</p>
     */
    inline Credentials& WithSessionToken(const Aws::String& value) { SetSessionToken(value); return *this;}

    /**
     * <p>The Session Token portion of the credentials</p>
     */
    inline Credentials& WithSessionToken(Aws::String&& value) { SetSessionToken(std::move(value)); return *this;}

    /**
     * <p>The Session Token portion of the credentials</p>
     */
    inline Credentials& WithSessionToken(const char* value) { SetSessionToken(value); return *this;}

    /**
     * <p>The date at which these credentials will expire.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiration() const{ return m_expiration; }

    /**
     * <p>The date at which these credentials will expire.</p>
     */
    inline void SetExpiration(const Aws::Utils::DateTime& value) { m_expirationHasBeenSet = true; m_expiration = value; }

    /**
     * <p>The date at which these credentials will expire.</p>
     */
    inline void SetExpiration(Aws::Utils::DateTime&& value) { m_expirationHasBeenSet = true; m_expiration = std::move(value); }

    /**
     * <p>The date at which these credentials will expire.</p>
     */
    inline Credentials& WithExpiration(const Aws::Utils::DateTime& value) { SetExpiration(value); return *this;}

    /**
     * <p>The date at which these credentials will expire.</p>
     */
    inline Credentials& WithExpiration(Aws::Utils::DateTime&& value) { SetExpiration(std::move(value)); return *this;}

  private:
    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet;
    Aws::String m_secretKey;
    bool m_secretKeyHasBeenSet;
    Aws::String m_sessionToken;
    bool m_sessionTokenHasBeenSet;
    Aws::Utils::DateTime m_expiration;
    bool m_expirationHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
