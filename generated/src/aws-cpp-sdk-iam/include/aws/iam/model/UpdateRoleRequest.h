/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAMRequest.h>
#include <aws/iam/IAM_EXPORTS.h>

#include <utility>

namespace Aws {
namespace IAM {
namespace Model {

/**
 */
class UpdateRoleRequest : public IAMRequest {
 public:
  AWS_IAM_API UpdateRoleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateRole"; }

  AWS_IAM_API Aws::String SerializePayload() const override;

 protected:
  AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The name of the role that you want to modify.</p>
   */
  inline const Aws::String& GetRoleName() const { return m_roleName; }
  inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }
  template <typename RoleNameT = Aws::String>
  void SetRoleName(RoleNameT&& value) {
    m_roleNameHasBeenSet = true;
    m_roleName = std::forward<RoleNameT>(value);
  }
  template <typename RoleNameT = Aws::String>
  UpdateRoleRequest& WithRoleName(RoleNameT&& value) {
    SetRoleName(std::forward<RoleNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new description that you want to apply to the specified role.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateRoleRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum session duration (in seconds) that you want to set for the
   * specified role. If you do not specify a value for this setting, the default
   * value of one hour is applied. This setting can have a value from 1 hour to 12
   * hours.</p> <p>Anyone who assumes the role from the CLI or API can use the
   * <code>DurationSeconds</code> API parameter or the <code>duration-seconds</code>
   * CLI parameter to request a longer session. The <code>MaxSessionDuration</code>
   * setting determines the maximum duration that can be requested using the
   * <code>DurationSeconds</code> parameter. If users don't specify a value for the
   * <code>DurationSeconds</code> parameter, their security credentials are valid for
   * one hour by default. This applies when you use the <code>AssumeRole*</code> API
   * operations or the <code>assume-role*</code> CLI operations but does not apply
   * when you use those operations to create a console URL. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use.html">Using
   * IAM roles</a> in the <i>IAM User Guide</i>.</p>  <p>IAM role credentials
   * provided by Amazon EC2 instances assigned to the role are not subject to the
   * specified maximum session duration.</p>
   */
  inline int GetMaxSessionDuration() const { return m_maxSessionDuration; }
  inline bool MaxSessionDurationHasBeenSet() const { return m_maxSessionDurationHasBeenSet; }
  inline void SetMaxSessionDuration(int value) {
    m_maxSessionDurationHasBeenSet = true;
    m_maxSessionDuration = value;
  }
  inline UpdateRoleRequest& WithMaxSessionDuration(int value) {
    SetMaxSessionDuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum duration (in seconds) of an Amazon Web Services Sign-In session
   * for users who sign in with the specified role. This setting can have a value
   * from 1 hour (3600 seconds) to 90 days (7776000 seconds), inclusive, and replaces
   * any value currently configured for the role. This setting is independent of
   * <code>MaxSessionDuration</code>.</p> <p>If you omit both this parameter and
   * <code>ResetMaxSigninSessionDuration</code>, the current setting is unchanged.
   * You cannot specify this parameter and set
   * <code>ResetMaxSigninSessionDuration</code> to <code>true</code> in the same
   * request.</p> <p>Changes to this setting apply to new sign-in sessions. Sessions
   * that are already established are not affected.</p>  <p>You cannot set this
   * value on a service-linked role.</p>
   */
  inline int GetMaxSigninSessionDuration() const { return m_maxSigninSessionDuration; }
  inline bool MaxSigninSessionDurationHasBeenSet() const { return m_maxSigninSessionDurationHasBeenSet; }
  inline void SetMaxSigninSessionDuration(int value) {
    m_maxSigninSessionDurationHasBeenSet = true;
    m_maxSigninSessionDuration = value;
  }
  inline UpdateRoleRequest& WithMaxSigninSessionDuration(int value) {
    SetMaxSigninSessionDuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to clear the role's maximum sign-in session duration. Set
   * this value to <code>true</code> to return the setting to its unset state, so
   * that the existing sign-in session behavior applies. When the setting is unset,
   * the role's <code>MaxSigninSessionDuration</code> is omitted from responses.</p>
   * <p>If you set this value to <code>false</code> or omit it, the current setting
   * is not cleared. You cannot set this value to <code>true</code> and specify
   * <code>MaxSigninSessionDuration</code> in the same request. Clearing a setting
   * that is already unset has no effect.</p>  <p>You cannot reset this value
   * on a service-linked role.</p>
   */
  inline bool GetResetMaxSigninSessionDuration() const { return m_resetMaxSigninSessionDuration; }
  inline bool ResetMaxSigninSessionDurationHasBeenSet() const { return m_resetMaxSigninSessionDurationHasBeenSet; }
  inline void SetResetMaxSigninSessionDuration(bool value) {
    m_resetMaxSigninSessionDurationHasBeenSet = true;
    m_resetMaxSigninSessionDuration = value;
  }
  inline UpdateRoleRequest& WithResetMaxSigninSessionDuration(bool value) {
    SetResetMaxSigninSessionDuration(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_roleName;

  Aws::String m_description;

  int m_maxSessionDuration{0};

  int m_maxSigninSessionDuration{0};

  bool m_resetMaxSigninSessionDuration{false};
  bool m_roleNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_maxSessionDurationHasBeenSet = false;
  bool m_maxSigninSessionDurationHasBeenSet = false;
  bool m_resetMaxSigninSessionDurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
