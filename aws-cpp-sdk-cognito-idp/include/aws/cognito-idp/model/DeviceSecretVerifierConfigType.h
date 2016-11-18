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
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
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

  /**
   * <p>The device verifier against which it will be authenticated.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API DeviceSecretVerifierConfigType
  {
  public:
    DeviceSecretVerifierConfigType();
    DeviceSecretVerifierConfigType(const Aws::Utils::Json::JsonValue& jsonValue);
    DeviceSecretVerifierConfigType& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The password verifier.</p>
     */
    inline const Aws::String& GetPasswordVerifier() const{ return m_passwordVerifier; }

    /**
     * <p>The password verifier.</p>
     */
    inline void SetPasswordVerifier(const Aws::String& value) { m_passwordVerifierHasBeenSet = true; m_passwordVerifier = value; }

    /**
     * <p>The password verifier.</p>
     */
    inline void SetPasswordVerifier(Aws::String&& value) { m_passwordVerifierHasBeenSet = true; m_passwordVerifier = value; }

    /**
     * <p>The password verifier.</p>
     */
    inline void SetPasswordVerifier(const char* value) { m_passwordVerifierHasBeenSet = true; m_passwordVerifier.assign(value); }

    /**
     * <p>The password verifier.</p>
     */
    inline DeviceSecretVerifierConfigType& WithPasswordVerifier(const Aws::String& value) { SetPasswordVerifier(value); return *this;}

    /**
     * <p>The password verifier.</p>
     */
    inline DeviceSecretVerifierConfigType& WithPasswordVerifier(Aws::String&& value) { SetPasswordVerifier(value); return *this;}

    /**
     * <p>The password verifier.</p>
     */
    inline DeviceSecretVerifierConfigType& WithPasswordVerifier(const char* value) { SetPasswordVerifier(value); return *this;}

    /**
     * <p>The salt.</p>
     */
    inline const Aws::String& GetSalt() const{ return m_salt; }

    /**
     * <p>The salt.</p>
     */
    inline void SetSalt(const Aws::String& value) { m_saltHasBeenSet = true; m_salt = value; }

    /**
     * <p>The salt.</p>
     */
    inline void SetSalt(Aws::String&& value) { m_saltHasBeenSet = true; m_salt = value; }

    /**
     * <p>The salt.</p>
     */
    inline void SetSalt(const char* value) { m_saltHasBeenSet = true; m_salt.assign(value); }

    /**
     * <p>The salt.</p>
     */
    inline DeviceSecretVerifierConfigType& WithSalt(const Aws::String& value) { SetSalt(value); return *this;}

    /**
     * <p>The salt.</p>
     */
    inline DeviceSecretVerifierConfigType& WithSalt(Aws::String&& value) { SetSalt(value); return *this;}

    /**
     * <p>The salt.</p>
     */
    inline DeviceSecretVerifierConfigType& WithSalt(const char* value) { SetSalt(value); return *this;}

  private:
    Aws::String m_passwordVerifier;
    bool m_passwordVerifierHasBeenSet;
    Aws::String m_salt;
    bool m_saltHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
