/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JsonView;
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
  class Credentials
  {
  public:
    AWS_COGNITOIDENTITY_API Credentials() = default;
    AWS_COGNITOIDENTITY_API Credentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITY_API Credentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Access Key portion of the credentials.</p>
     */
    inline const Aws::String& GetAccessKeyId() const { return m_accessKeyId; }
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }
    template<typename AccessKeyIdT = Aws::String>
    void SetAccessKeyId(AccessKeyIdT&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::forward<AccessKeyIdT>(value); }
    template<typename AccessKeyIdT = Aws::String>
    Credentials& WithAccessKeyId(AccessKeyIdT&& value) { SetAccessKeyId(std::forward<AccessKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Secret Access Key portion of the credentials</p>
     */
    inline const Aws::String& GetSecretKey() const { return m_secretKey; }
    inline bool SecretKeyHasBeenSet() const { return m_secretKeyHasBeenSet; }
    template<typename SecretKeyT = Aws::String>
    void SetSecretKey(SecretKeyT&& value) { m_secretKeyHasBeenSet = true; m_secretKey = std::forward<SecretKeyT>(value); }
    template<typename SecretKeyT = Aws::String>
    Credentials& WithSecretKey(SecretKeyT&& value) { SetSecretKey(std::forward<SecretKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Session Token portion of the credentials</p>
     */
    inline const Aws::String& GetSessionToken() const { return m_sessionToken; }
    inline bool SessionTokenHasBeenSet() const { return m_sessionTokenHasBeenSet; }
    template<typename SessionTokenT = Aws::String>
    void SetSessionToken(SessionTokenT&& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = std::forward<SessionTokenT>(value); }
    template<typename SessionTokenT = Aws::String>
    Credentials& WithSessionToken(SessionTokenT&& value) { SetSessionToken(std::forward<SessionTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date at which these credentials will expire.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiration() const { return m_expiration; }
    inline bool ExpirationHasBeenSet() const { return m_expirationHasBeenSet; }
    template<typename ExpirationT = Aws::Utils::DateTime>
    void SetExpiration(ExpirationT&& value) { m_expirationHasBeenSet = true; m_expiration = std::forward<ExpirationT>(value); }
    template<typename ExpirationT = Aws::Utils::DateTime>
    Credentials& WithExpiration(ExpirationT&& value) { SetExpiration(std::forward<ExpirationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet = false;

    Aws::String m_secretKey;
    bool m_secretKeyHasBeenSet = false;

    Aws::String m_sessionToken;
    bool m_sessionTokenHasBeenSet = false;

    Aws::Utils::DateTime m_expiration{};
    bool m_expirationHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
