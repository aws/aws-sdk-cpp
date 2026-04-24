/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LakeFormation {
namespace Model {

/**
 * <p>A temporary set of credentials for an Lake Formation user. These credentials
 * are scoped down to only access the raw data sources that the user has access to.
 * </p> <p>The temporary security credentials consist of an access key and a
 * session token. The access key consists of an access key ID and a secret key.
 * When the credentials are created, they are associated with an IAM access control
 * policy that limits what the user can do when using the
 * credentials.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/TemporaryCredentials">AWS
 * API Reference</a></p>
 */
class TemporaryCredentials {
 public:
  AWS_LAKEFORMATION_API TemporaryCredentials() = default;
  AWS_LAKEFORMATION_API TemporaryCredentials(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAKEFORMATION_API TemporaryCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The access key ID for the temporary credentials.</p>
   */
  inline const Aws::String& GetAccessKeyId() const { return m_accessKeyId; }
  inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }
  template <typename AccessKeyIdT = Aws::String>
  void SetAccessKeyId(AccessKeyIdT&& value) {
    m_accessKeyIdHasBeenSet = true;
    m_accessKeyId = std::forward<AccessKeyIdT>(value);
  }
  template <typename AccessKeyIdT = Aws::String>
  TemporaryCredentials& WithAccessKeyId(AccessKeyIdT&& value) {
    SetAccessKeyId(std::forward<AccessKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The secret key for the temporary credentials.</p>
   */
  inline const Aws::String& GetSecretAccessKey() const { return m_secretAccessKey; }
  inline bool SecretAccessKeyHasBeenSet() const { return m_secretAccessKeyHasBeenSet; }
  template <typename SecretAccessKeyT = Aws::String>
  void SetSecretAccessKey(SecretAccessKeyT&& value) {
    m_secretAccessKeyHasBeenSet = true;
    m_secretAccessKey = std::forward<SecretAccessKeyT>(value);
  }
  template <typename SecretAccessKeyT = Aws::String>
  TemporaryCredentials& WithSecretAccessKey(SecretAccessKeyT&& value) {
    SetSecretAccessKey(std::forward<SecretAccessKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The session token for the temporary credentials.</p>
   */
  inline const Aws::String& GetSessionToken() const { return m_sessionToken; }
  inline bool SessionTokenHasBeenSet() const { return m_sessionTokenHasBeenSet; }
  template <typename SessionTokenT = Aws::String>
  void SetSessionToken(SessionTokenT&& value) {
    m_sessionTokenHasBeenSet = true;
    m_sessionToken = std::forward<SessionTokenT>(value);
  }
  template <typename SessionTokenT = Aws::String>
  TemporaryCredentials& WithSessionToken(SessionTokenT&& value) {
    SetSessionToken(std::forward<SessionTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the temporary credentials expire.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiration() const { return m_expiration; }
  inline bool ExpirationHasBeenSet() const { return m_expirationHasBeenSet; }
  template <typename ExpirationT = Aws::Utils::DateTime>
  void SetExpiration(ExpirationT&& value) {
    m_expirationHasBeenSet = true;
    m_expiration = std::forward<ExpirationT>(value);
  }
  template <typename ExpirationT = Aws::Utils::DateTime>
  TemporaryCredentials& WithExpiration(ExpirationT&& value) {
    SetExpiration(std::forward<ExpirationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accessKeyId;

  Aws::String m_secretAccessKey;

  Aws::String m_sessionToken;

  Aws::Utils::DateTime m_expiration{};
  bool m_accessKeyIdHasBeenSet = false;
  bool m_secretAccessKeyHasBeenSet = false;
  bool m_sessionTokenHasBeenSet = false;
  bool m_expirationHasBeenSet = false;
};

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
