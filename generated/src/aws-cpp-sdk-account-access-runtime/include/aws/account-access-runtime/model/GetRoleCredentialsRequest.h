/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access-runtime/AccountAccessRuntimeRequest.h>
#include <aws/account-access-runtime/AccountAccessRuntime_EXPORTS.h>
#include <aws/account-access-runtime/model/AccessType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace AccountAccessRuntime {
namespace Model {

/**
 */
class GetRoleCredentialsRequest : public AccountAccessRuntimeRequest {
 public:
  AWS_ACCOUNTACCESSRUNTIME_API GetRoleCredentialsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetRoleCredentials"; }

  AWS_ACCOUNTACCESSRUNTIME_API Aws::String SerializePayload() const override;

  AWS_ACCOUNTACCESSRUNTIME_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The identifier of the tenant that the request applies to. A tenant ID begins
   * with <code>aa-</code> and is 3 to 24 characters long. It can contain lowercase
   * letters, numbers, and hyphens.</p>
   */
  inline const Aws::String& GetTenantId() const { return m_tenantId; }
  inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }
  template <typename TenantIdT = Aws::String>
  void SetTenantId(TenantIdT&& value) {
    m_tenantIdHasBeenSet = true;
    m_tenantId = std::forward<TenantIdT>(value);
  }
  template <typename TenantIdT = Aws::String>
  GetRoleCredentialsRequest& WithTenantId(TenantIdT&& value) {
    SetTenantId(std::forward<TenantIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the role to retrieve credentials for. You
   * must be entitled to assume this role.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  GetRoleCredentialsRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of access to request for the role. Specify
   * <code>PROGRAMMATIC_ACCESS</code> to receive access key credentials for use with
   * the CLI or an Amazon Web Services SDK.</p>
   */
  inline AccessType GetAccessType() const { return m_accessType; }
  inline bool AccessTypeHasBeenSet() const { return m_accessTypeHasBeenSet; }
  inline void SetAccessType(AccessType value) {
    m_accessTypeHasBeenSet = true;
    m_accessType = value;
  }
  inline GetRoleCredentialsRequest& WithAccessType(AccessType value) {
    SetAccessType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional name for the role session. The name can be 2 to 64 characters and
   * can contain alphanumeric characters and the following symbols: plus (+), equal
   * (=), comma (,), period (.), at (@), and hyphen (-). The session name appears in
   * CloudTrail logs for the assumed role session.</p>
   */
  inline const Aws::String& GetSessionName() const { return m_sessionName; }
  inline bool SessionNameHasBeenSet() const { return m_sessionNameHasBeenSet; }
  template <typename SessionNameT = Aws::String>
  void SetSessionName(SessionNameT&& value) {
    m_sessionNameHasBeenSet = true;
    m_sessionName = std::forward<SessionNameT>(value);
  }
  template <typename SessionNameT = Aws::String>
  GetRoleCredentialsRequest& WithSessionName(SessionNameT&& value) {
    SetSessionName(std::forward<SessionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration, in seconds, that the returned credentials remain valid. If you
   * don't specify a value, the service uses the default session duration. The
   * maximum value can't exceed the maximum session duration configured for the
   * role.</p>
   */
  inline int GetSessionDuration() const { return m_sessionDuration; }
  inline bool SessionDurationHasBeenSet() const { return m_sessionDurationHasBeenSet; }
  inline void SetSessionDuration(int value) {
    m_sessionDurationHasBeenSet = true;
    m_sessionDuration = value;
  }
  inline GetRoleCredentialsRequest& WithSessionDuration(int value) {
    SetSessionDuration(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_tenantId;

  Aws::String m_roleArn;

  AccessType m_accessType{AccessType::NOT_SET};

  Aws::String m_sessionName;

  int m_sessionDuration{0};
  bool m_tenantIdHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_accessTypeHasBeenSet = false;
  bool m_sessionNameHasBeenSet = false;
  bool m_sessionDurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccountAccessRuntime
}  // namespace Aws
