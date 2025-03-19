/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/MemberAccountRuleStatus.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Organization Config rule creation or deletion status in each member account.
   * This includes the name of the rule, the status, error code and error message
   * when the rule creation or deletion failed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/MemberAccountStatus">AWS
   * API Reference</a></p>
   */
  class MemberAccountStatus
  {
  public:
    AWS_CONFIGSERVICE_API MemberAccountStatus() = default;
    AWS_CONFIGSERVICE_API MemberAccountStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API MemberAccountStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The 12-digit account ID of a member account.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    MemberAccountStatus& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of Config rule deployed in the member account.</p>
     */
    inline const Aws::String& GetConfigRuleName() const { return m_configRuleName; }
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }
    template<typename ConfigRuleNameT = Aws::String>
    void SetConfigRuleName(ConfigRuleNameT&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::forward<ConfigRuleNameT>(value); }
    template<typename ConfigRuleNameT = Aws::String>
    MemberAccountStatus& WithConfigRuleName(ConfigRuleNameT&& value) { SetConfigRuleName(std::forward<ConfigRuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates deployment status for Config rule in the member account. When
     * management account calls <code>PutOrganizationConfigRule</code> action for the
     * first time, Config rule status is created in the member account. When management
     * account calls <code>PutOrganizationConfigRule</code> action for the second time,
     * Config rule status is updated in the member account. Config rule status is
     * deleted when the management account deletes <code>OrganizationConfigRule</code>
     * and disables service access for
     * <code>config-multiaccountsetup.amazonaws.com</code>. </p> <p> Config sets the
     * state of the rule to:</p> <ul> <li> <p> <code>CREATE_SUCCESSFUL</code> when
     * Config rule has been created in the member account. </p> </li> <li> <p>
     * <code>CREATE_IN_PROGRESS</code> when Config rule is being created in the member
     * account.</p> </li> <li> <p> <code>CREATE_FAILED</code> when Config rule creation
     * has failed in the member account.</p> </li> <li> <p> <code>DELETE_FAILED</code>
     * when Config rule deletion has failed in the member account.</p> </li> <li> <p>
     * <code>DELETE_IN_PROGRESS</code> when Config rule is being deleted in the member
     * account.</p> </li> <li> <p> <code>DELETE_SUCCESSFUL</code> when Config rule has
     * been deleted in the member account. </p> </li> <li> <p>
     * <code>UPDATE_SUCCESSFUL</code> when Config rule has been updated in the member
     * account.</p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code> when Config rule is
     * being updated in the member account.</p> </li> <li> <p>
     * <code>UPDATE_FAILED</code> when Config rule deletion has failed in the member
     * account.</p> </li> </ul>
     */
    inline MemberAccountRuleStatus GetMemberAccountRuleStatus() const { return m_memberAccountRuleStatus; }
    inline bool MemberAccountRuleStatusHasBeenSet() const { return m_memberAccountRuleStatusHasBeenSet; }
    inline void SetMemberAccountRuleStatus(MemberAccountRuleStatus value) { m_memberAccountRuleStatusHasBeenSet = true; m_memberAccountRuleStatus = value; }
    inline MemberAccountStatus& WithMemberAccountRuleStatus(MemberAccountRuleStatus value) { SetMemberAccountRuleStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error code that is returned when Config rule creation or deletion failed
     * in the member account.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    MemberAccountStatus& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message indicating that Config rule account creation or deletion has
     * failed due to an error in the member account.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    MemberAccountStatus& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last status update.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    MemberAccountStatus& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet = false;

    MemberAccountRuleStatus m_memberAccountRuleStatus{MemberAccountRuleStatus::NOT_SET};
    bool m_memberAccountRuleStatusHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
