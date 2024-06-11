/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The device verifier against which it is authenticated.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeviceSecretVerifierConfigType">AWS
   * API Reference</a></p>
   */
  class DeviceSecretVerifierConfigType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API DeviceSecretVerifierConfigType();
    AWS_COGNITOIDENTITYPROVIDER_API DeviceSecretVerifierConfigType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API DeviceSecretVerifierConfigType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The password verifier.</p>
     */
    inline const Aws::String& GetPasswordVerifier() const{ return m_passwordVerifier; }
    inline bool PasswordVerifierHasBeenSet() const { return m_passwordVerifierHasBeenSet; }
    inline void SetPasswordVerifier(const Aws::String& value) { m_passwordVerifierHasBeenSet = true; m_passwordVerifier = value; }
    inline void SetPasswordVerifier(Aws::String&& value) { m_passwordVerifierHasBeenSet = true; m_passwordVerifier = std::move(value); }
    inline void SetPasswordVerifier(const char* value) { m_passwordVerifierHasBeenSet = true; m_passwordVerifier.assign(value); }
    inline DeviceSecretVerifierConfigType& WithPasswordVerifier(const Aws::String& value) { SetPasswordVerifier(value); return *this;}
    inline DeviceSecretVerifierConfigType& WithPasswordVerifier(Aws::String&& value) { SetPasswordVerifier(std::move(value)); return *this;}
    inline DeviceSecretVerifierConfigType& WithPasswordVerifier(const char* value) { SetPasswordVerifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a href="https://en.wikipedia.org/wiki/Salt_(cryptography)">salt</a> </p>
     */
    inline const Aws::String& GetSalt() const{ return m_salt; }
    inline bool SaltHasBeenSet() const { return m_saltHasBeenSet; }
    inline void SetSalt(const Aws::String& value) { m_saltHasBeenSet = true; m_salt = value; }
    inline void SetSalt(Aws::String&& value) { m_saltHasBeenSet = true; m_salt = std::move(value); }
    inline void SetSalt(const char* value) { m_saltHasBeenSet = true; m_salt.assign(value); }
    inline DeviceSecretVerifierConfigType& WithSalt(const Aws::String& value) { SetSalt(value); return *this;}
    inline DeviceSecretVerifierConfigType& WithSalt(Aws::String&& value) { SetSalt(std::move(value)); return *this;}
    inline DeviceSecretVerifierConfigType& WithSalt(const char* value) { SetSalt(value); return *this;}
    ///@}
  private:

    Aws::String m_passwordVerifier;
    bool m_passwordVerifierHasBeenSet = false;

    Aws::String m_salt;
    bool m_saltHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
