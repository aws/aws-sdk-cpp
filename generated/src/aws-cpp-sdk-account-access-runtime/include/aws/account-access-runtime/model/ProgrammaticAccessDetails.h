/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access-runtime/AccountAccessRuntime_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AccountAccessRuntime {
namespace Model {

/**
 * <p>A set of temporary Amazon Web Services credentials for programmatic access.
 * Treat these values as sensitive.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-runtime-2018-05-10/ProgrammaticAccessDetails">AWS
 * API Reference</a></p>
 */
class ProgrammaticAccessDetails {
 public:
  AWS_ACCOUNTACCESSRUNTIME_API ProgrammaticAccessDetails() = default;
  AWS_ACCOUNTACCESSRUNTIME_API ProgrammaticAccessDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESSRUNTIME_API ProgrammaticAccessDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESSRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  ProgrammaticAccessDetails& WithAccessKeyId(AccessKeyIdT&& value) {
    SetAccessKeyId(std::forward<AccessKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The secret access key for the temporary credentials. Treat this value as a
   * secret.</p>
   */
  inline const Aws::String& GetSecretAccessKey() const { return m_secretAccessKey; }
  inline bool SecretAccessKeyHasBeenSet() const { return m_secretAccessKeyHasBeenSet; }
  template <typename SecretAccessKeyT = Aws::String>
  void SetSecretAccessKey(SecretAccessKeyT&& value) {
    m_secretAccessKeyHasBeenSet = true;
    m_secretAccessKey = std::forward<SecretAccessKeyT>(value);
  }
  template <typename SecretAccessKeyT = Aws::String>
  ProgrammaticAccessDetails& WithSecretAccessKey(SecretAccessKeyT&& value) {
    SetSecretAccessKey(std::forward<SecretAccessKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The session token that you must include along with the access key ID and
   * secret access key when you make requests with the temporary credentials.</p>
   */
  inline const Aws::String& GetSessionToken() const { return m_sessionToken; }
  inline bool SessionTokenHasBeenSet() const { return m_sessionTokenHasBeenSet; }
  template <typename SessionTokenT = Aws::String>
  void SetSessionToken(SessionTokenT&& value) {
    m_sessionTokenHasBeenSet = true;
    m_sessionToken = std::forward<SessionTokenT>(value);
  }
  template <typename SessionTokenT = Aws::String>
  ProgrammaticAccessDetails& WithSessionToken(SessionTokenT&& value) {
    SetSessionToken(std::forward<SessionTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the temporary credentials expire, after which they can
   * no longer be used.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  ProgrammaticAccessDetails& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accessKeyId;

  Aws::String m_secretAccessKey;

  Aws::String m_sessionToken;

  Aws::Utils::DateTime m_expiresAt{};
  bool m_accessKeyIdHasBeenSet = false;
  bool m_secretAccessKeyHasBeenSet = false;
  bool m_sessionTokenHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccountAccessRuntime
}  // namespace Aws
