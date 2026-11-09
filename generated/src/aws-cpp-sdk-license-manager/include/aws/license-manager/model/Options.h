/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/ActivationOverrideBehavior.h>
#include <aws/license-manager/model/GrantStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LicenseManager {
namespace Model {

/**
 * <p>The options you can specify when you create a grant or a new version of a
 * grant, such as activation override behavior. For more information, see <a
 * href="https://docs.aws.amazon.com/license-manager/latest/userguide/granted-licenses.html">Granted
 * licenses in License Manager</a> in the <i>License Manager User
 * Guide</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/Options">AWS
 * API Reference</a></p>
 */
class Options {
 public:
  AWS_LICENSEMANAGER_API Options() = default;
  AWS_LICENSEMANAGER_API Options(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API Options& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An activation option for your grant that determines the behavior of
   * activating a grant. Activation options can only be used with granted licenses
   * sourced from the Amazon Web Services Marketplace. Additionally, the operation
   * must activate the grant. For the <code>CreateGrantVersion</code> operation,
   * specify <code>ACTIVE</code> for the <code>Status</code> parameter. For the
   * <code>CreateGrant</code> operation, specify <code>ACTIVE</code> for the
   * <code>DesiredStatus</code> option.</p> <ul> <li> <p>As a license administrator,
   * you can optionally specify an <code>ActivationOverrideBehavior</code> when
   * activating a grant.</p> </li> <li> <p>As a grantor, you can optionally specify
   * an <code>ActivationOverrideBehavior</code> when you activate a grant for a
   * grantee account in your organization.</p> </li> <li> <p>As a grantee, if the
   * grantor creating the distributed grant doesn’t specify an
   * <code>ActivationOverrideBehavior</code>, you can optionally specify one when you
   * are activating the grant.</p> </li> </ul> <dl> <dt>DISTRIBUTED_GRANTS_ONLY</dt>
   * <dd> <p>Use this value to activate a grant without replacing any member
   * account’s active grants for the same product.</p> </dd>
   * <dt>ALL_GRANTS_PERMITTED_BY_ISSUER</dt> <dd> <p>Use this value to activate a
   * grant and disable other active grants in any member accounts for the same
   * product. This action will also replace their previously activated grants with
   * this activated grant.</p> </dd> </dl>
   */
  inline ActivationOverrideBehavior GetActivationOverrideBehavior() const { return m_activationOverrideBehavior; }
  inline bool ActivationOverrideBehaviorHasBeenSet() const { return m_activationOverrideBehaviorHasBeenSet; }
  inline void SetActivationOverrideBehavior(ActivationOverrideBehavior value) {
    m_activationOverrideBehaviorHasBeenSet = true;
    m_activationOverrideBehavior = value;
  }
  inline Options& WithActivationOverrideBehavior(ActivationOverrideBehavior value) {
    SetActivationOverrideBehavior(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the grant after License Manager creates it. The only supported
   * value is <code>ACTIVE</code>. Specify <code>ACTIVE</code> to create and activate
   * the grant in one request.</p> <p>You can specify this option only for the
   * <code>CreateGrant</code> operation, and only when the grant principal is an
   * organization or an organizational unit (OU). To change the status of an existing
   * grant, use the <code>Status</code> parameter of the
   * <code>CreateGrantVersion</code> operation.</p>
   */
  inline GrantStatus GetDesiredStatus() const { return m_desiredStatus; }
  inline bool DesiredStatusHasBeenSet() const { return m_desiredStatusHasBeenSet; }
  inline void SetDesiredStatus(GrantStatus value) {
    m_desiredStatusHasBeenSet = true;
    m_desiredStatus = value;
  }
  inline Options& WithDesiredStatus(GrantStatus value) {
    SetDesiredStatus(value);
    return *this;
  }
  ///@}
 private:
  ActivationOverrideBehavior m_activationOverrideBehavior{ActivationOverrideBehavior::NOT_SET};

  GrantStatus m_desiredStatus{GrantStatus::NOT_SET};
  bool m_activationOverrideBehaviorHasBeenSet = false;
  bool m_desiredStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
