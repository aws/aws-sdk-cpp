/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks-auth/EKSAuth_EXPORTS.h>
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
namespace EKSAuth
{
namespace Model
{

  /**
   * <p>The <i>Amazon Web Services Signature Version 4</i> type of temporary
   * credentials.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-auth-2023-11-26/Credentials">AWS
   * API Reference</a></p>
   */
  class Credentials
  {
  public:
    AWS_EKSAUTH_API Credentials();
    AWS_EKSAUTH_API Credentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKSAUTH_API Credentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKSAUTH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The token that applications inside the pods must pass to any service API to
     * use the temporary credentials.</p>
     */
    inline const Aws::String& GetSessionToken() const{ return m_sessionToken; }
    inline bool SessionTokenHasBeenSet() const { return m_sessionTokenHasBeenSet; }
    inline void SetSessionToken(const Aws::String& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = value; }
    inline void SetSessionToken(Aws::String&& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = std::move(value); }
    inline void SetSessionToken(const char* value) { m_sessionTokenHasBeenSet = true; m_sessionToken.assign(value); }
    inline Credentials& WithSessionToken(const Aws::String& value) { SetSessionToken(value); return *this;}
    inline Credentials& WithSessionToken(Aws::String&& value) { SetSessionToken(std::move(value)); return *this;}
    inline Credentials& WithSessionToken(const char* value) { SetSessionToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret access key that applications inside the pods use to sign
     * requests.</p>
     */
    inline const Aws::String& GetSecretAccessKey() const{ return m_secretAccessKey; }
    inline bool SecretAccessKeyHasBeenSet() const { return m_secretAccessKeyHasBeenSet; }
    inline void SetSecretAccessKey(const Aws::String& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = value; }
    inline void SetSecretAccessKey(Aws::String&& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = std::move(value); }
    inline void SetSecretAccessKey(const char* value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey.assign(value); }
    inline Credentials& WithSecretAccessKey(const Aws::String& value) { SetSecretAccessKey(value); return *this;}
    inline Credentials& WithSecretAccessKey(Aws::String&& value) { SetSecretAccessKey(std::move(value)); return *this;}
    inline Credentials& WithSecretAccessKey(const char* value) { SetSecretAccessKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access key ID that identifies the temporary security credentials.</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }
    inline Credentials& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}
    inline Credentials& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}
    inline Credentials& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix epoch timestamp in seconds when the current credentials expire.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiration() const{ return m_expiration; }
    inline bool ExpirationHasBeenSet() const { return m_expirationHasBeenSet; }
    inline void SetExpiration(const Aws::Utils::DateTime& value) { m_expirationHasBeenSet = true; m_expiration = value; }
    inline void SetExpiration(Aws::Utils::DateTime&& value) { m_expirationHasBeenSet = true; m_expiration = std::move(value); }
    inline Credentials& WithExpiration(const Aws::Utils::DateTime& value) { SetExpiration(value); return *this;}
    inline Credentials& WithExpiration(Aws::Utils::DateTime&& value) { SetExpiration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionToken;
    bool m_sessionTokenHasBeenSet = false;

    Aws::String m_secretAccessKey;
    bool m_secretAccessKeyHasBeenSet = false;

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet = false;

    Aws::Utils::DateTime m_expiration;
    bool m_expirationHasBeenSet = false;
  };

} // namespace Model
} // namespace EKSAuth
} // namespace Aws
