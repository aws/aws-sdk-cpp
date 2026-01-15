/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/VerificationStatus.h>

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
 * <p>A structure containing information about an Lake Formation
 * resource.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ResourceInfo">AWS
 * API Reference</a></p>
 */
class ResourceInfo {
 public:
  AWS_LAKEFORMATION_API ResourceInfo() = default;
  AWS_LAKEFORMATION_API ResourceInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAKEFORMATION_API ResourceInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the resource.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  ResourceInfo& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM role that registered a resource.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  ResourceInfo& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the resource was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
  inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  void SetLastModified(LastModifiedT&& value) {
    m_lastModifiedHasBeenSet = true;
    m_lastModified = std::forward<LastModifiedT>(value);
  }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  ResourceInfo& WithLastModified(LastModifiedT&& value) {
    SetLastModified(std::forward<LastModifiedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether or not the resource is a federated resource.</p>
   */
  inline bool GetWithFederation() const { return m_withFederation; }
  inline bool WithFederationHasBeenSet() const { return m_withFederationHasBeenSet; }
  inline void SetWithFederation(bool value) {
    m_withFederationHasBeenSet = true;
    m_withFederation = value;
  }
  inline ResourceInfo& WithWithFederation(bool value) {
    SetWithFederation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Indicates whether the data access of tables pointing to the location can be
   * managed by both Lake Formation permissions as well as Amazon S3 bucket policies.
   * </p>
   */
  inline bool GetHybridAccessEnabled() const { return m_hybridAccessEnabled; }
  inline bool HybridAccessEnabledHasBeenSet() const { return m_hybridAccessEnabledHasBeenSet; }
  inline void SetHybridAccessEnabled(bool value) {
    m_hybridAccessEnabledHasBeenSet = true;
    m_hybridAccessEnabled = value;
  }
  inline ResourceInfo& WithHybridAccessEnabled(bool value) {
    SetHybridAccessEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Grants the calling principal the permissions to perform all supported Lake
   * Formation operations on the registered data location. </p>
   */
  inline bool GetWithPrivilegedAccess() const { return m_withPrivilegedAccess; }
  inline bool WithPrivilegedAccessHasBeenSet() const { return m_withPrivilegedAccessHasBeenSet; }
  inline void SetWithPrivilegedAccess(bool value) {
    m_withPrivilegedAccessHasBeenSet = true;
    m_withPrivilegedAccess = value;
  }
  inline ResourceInfo& WithWithPrivilegedAccess(bool value) {
    SetWithPrivilegedAccess(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the registered role has sufficient permissions to access
   * registered Amazon S3 location. Verification Status can be one of the following:
   * </p> <ul> <li> <p>VERIFIED - Registered role has sufficient permissions to
   * access registered Amazon S3 location.</p> </li> <li> <p>NOT_VERIFIED -
   * Registered role does not have sufficient permissions to access registered Amazon
   * S3 location.</p> </li> <li> <p>VERIFICATION_FAILED - Unable to verify if the
   * registered role can access the registered Amazon S3 location.</p> </li> </ul>
   */
  inline VerificationStatus GetVerificationStatus() const { return m_verificationStatus; }
  inline bool VerificationStatusHasBeenSet() const { return m_verificationStatusHasBeenSet; }
  inline void SetVerificationStatus(VerificationStatus value) {
    m_verificationStatusHasBeenSet = true;
    m_verificationStatus = value;
  }
  inline ResourceInfo& WithVerificationStatus(VerificationStatus value) {
    SetVerificationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account that owns the Glue tables associated with
   * specific Amazon S3 locations. </p>
   */
  inline const Aws::String& GetExpectedResourceOwnerAccount() const { return m_expectedResourceOwnerAccount; }
  inline bool ExpectedResourceOwnerAccountHasBeenSet() const { return m_expectedResourceOwnerAccountHasBeenSet; }
  template <typename ExpectedResourceOwnerAccountT = Aws::String>
  void SetExpectedResourceOwnerAccount(ExpectedResourceOwnerAccountT&& value) {
    m_expectedResourceOwnerAccountHasBeenSet = true;
    m_expectedResourceOwnerAccount = std::forward<ExpectedResourceOwnerAccountT>(value);
  }
  template <typename ExpectedResourceOwnerAccountT = Aws::String>
  ResourceInfo& WithExpectedResourceOwnerAccount(ExpectedResourceOwnerAccountT&& value) {
    SetExpectedResourceOwnerAccount(std::forward<ExpectedResourceOwnerAccountT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;

  Aws::String m_roleArn;

  Aws::Utils::DateTime m_lastModified{};

  bool m_withFederation{false};

  bool m_hybridAccessEnabled{false};

  bool m_withPrivilegedAccess{false};

  VerificationStatus m_verificationStatus{VerificationStatus::NOT_SET};

  Aws::String m_expectedResourceOwnerAccount;
  bool m_resourceArnHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_lastModifiedHasBeenSet = false;
  bool m_withFederationHasBeenSet = false;
  bool m_hybridAccessEnabledHasBeenSet = false;
  bool m_withPrivilegedAccessHasBeenSet = false;
  bool m_verificationStatusHasBeenSet = false;
  bool m_expectedResourceOwnerAccountHasBeenSet = false;
};

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
