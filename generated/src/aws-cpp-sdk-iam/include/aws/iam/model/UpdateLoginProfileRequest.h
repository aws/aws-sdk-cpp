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
class UpdateLoginProfileRequest : public IAMRequest {
 public:
  AWS_IAM_API UpdateLoginProfileRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateLoginProfile"; }

  AWS_IAM_API Aws::String SerializePayload() const override;

 protected:
  AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The name of the user whose password you want to update.</p> <p>This parameter
   * allows (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>)
   * a string of characters consisting of upper and lowercase alphanumeric characters
   * with no spaces. You can also include any of the following characters:
   * _+=,.@-</p>
   */
  inline const Aws::String& GetUserName() const { return m_userName; }
  inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
  template <typename UserNameT = Aws::String>
  void SetUserName(UserNameT&& value) {
    m_userNameHasBeenSet = true;
    m_userName = std::forward<UserNameT>(value);
  }
  template <typename UserNameT = Aws::String>
  UpdateLoginProfileRequest& WithUserName(UserNameT&& value) {
    SetUserName(std::forward<UserNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new password for the specified IAM user.</p> <p>The <a
   * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
   * parameter is a string of characters consisting of the following:</p> <ul> <li>
   * <p>Any printable ASCII character ranging from the space character
   * (<code>\u0020</code>) through the end of the ASCII character range</p> </li>
   * <li> <p>The printable characters in the Basic Latin and Latin-1 Supplement
   * character set (through <code>\u00FF</code>)</p> </li> <li> <p>The special
   * characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
   * carriage return (<code>\u000D</code>)</p> </li> </ul> <p>However, the format can
   * be further restricted by the account administrator by setting a password policy
   * on the Amazon Web Services account. For more information, see <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_UpdateAccountPasswordPolicy.html">UpdateAccountPasswordPolicy</a>.</p>
   */
  inline const Aws::String& GetPassword() const { return m_password; }
  inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
  template <typename PasswordT = Aws::String>
  void SetPassword(PasswordT&& value) {
    m_passwordHasBeenSet = true;
    m_password = std::forward<PasswordT>(value);
  }
  template <typename PasswordT = Aws::String>
  UpdateLoginProfileRequest& WithPassword(PasswordT&& value) {
    SetPassword(std::forward<PasswordT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Allows this new password to be used only once by requiring the specified IAM
   * user to set a new password on next sign-in.</p>
   */
  inline bool GetPasswordResetRequired() const { return m_passwordResetRequired; }
  inline bool PasswordResetRequiredHasBeenSet() const { return m_passwordResetRequiredHasBeenSet; }
  inline void SetPasswordResetRequired(bool value) {
    m_passwordResetRequiredHasBeenSet = true;
    m_passwordResetRequired = value;
  }
  inline UpdateLoginProfileRequest& WithPasswordResetRequired(bool value) {
    SetPasswordResetRequired(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum duration (in seconds) of an Amazon Web Services Sign-In session
   * for the specified IAM user. This setting can have a value from 1 hour (3600
   * seconds) to 90 days (7776000 seconds), inclusive, and replaces any value
   * currently configured for the user.</p> <p>If you omit both this parameter and
   * <code>ResetMaxSigninSessionDuration</code>, the current setting is unchanged.
   * You cannot specify this parameter and set
   * <code>ResetMaxSigninSessionDuration</code> to <code>true</code> in the same
   * request. If you update only the sign-in session duration, the user's password
   * and <code>PasswordResetRequired</code> setting do not change.</p> <p>Changes to
   * this setting apply to new sign-in sessions. Sessions that are already
   * established are not affected.</p>  <p>This setting is not supported for
   * the root user.</p>
   */
  inline int GetMaxSigninSessionDuration() const { return m_maxSigninSessionDuration; }
  inline bool MaxSigninSessionDurationHasBeenSet() const { return m_maxSigninSessionDurationHasBeenSet; }
  inline void SetMaxSigninSessionDuration(int value) {
    m_maxSigninSessionDurationHasBeenSet = true;
    m_maxSigninSessionDuration = value;
  }
  inline UpdateLoginProfileRequest& WithMaxSigninSessionDuration(int value) {
    SetMaxSigninSessionDuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to clear the maximum sign-in session duration for the
   * specified IAM user. Set this value to <code>true</code> to return the setting to
   * its unset state, so that the existing sign-in session behavior applies. When the
   * setting is unset, the user's <code>MaxSigninSessionDuration</code> is omitted
   * from responses.</p> <p>If you set this value to <code>false</code> or omit it,
   * the current setting is not cleared. You cannot set this value to
   * <code>true</code> and specify <code>MaxSigninSessionDuration</code> in the same
   * request. Clearing a setting that is already unset has no effect.</p>
   */
  inline bool GetResetMaxSigninSessionDuration() const { return m_resetMaxSigninSessionDuration; }
  inline bool ResetMaxSigninSessionDurationHasBeenSet() const { return m_resetMaxSigninSessionDurationHasBeenSet; }
  inline void SetResetMaxSigninSessionDuration(bool value) {
    m_resetMaxSigninSessionDurationHasBeenSet = true;
    m_resetMaxSigninSessionDuration = value;
  }
  inline UpdateLoginProfileRequest& WithResetMaxSigninSessionDuration(bool value) {
    SetResetMaxSigninSessionDuration(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_userName;

  Aws::String m_password;

  bool m_passwordResetRequired{false};

  int m_maxSigninSessionDuration{0};

  bool m_resetMaxSigninSessionDuration{false};
  bool m_userNameHasBeenSet = false;
  bool m_passwordHasBeenSet = false;
  bool m_passwordResetRequiredHasBeenSet = false;
  bool m_maxSigninSessionDurationHasBeenSet = false;
  bool m_resetMaxSigninSessionDurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
