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
    AWS_CONFIGSERVICE_API MemberAccountStatus();
    AWS_CONFIGSERVICE_API MemberAccountStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API MemberAccountStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The 12-digit account ID of a member account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The 12-digit account ID of a member account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The 12-digit account ID of a member account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The 12-digit account ID of a member account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The 12-digit account ID of a member account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The 12-digit account ID of a member account.</p>
     */
    inline MemberAccountStatus& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The 12-digit account ID of a member account.</p>
     */
    inline MemberAccountStatus& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The 12-digit account ID of a member account.</p>
     */
    inline MemberAccountStatus& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The name of Config rule deployed in the member account.</p>
     */
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }

    /**
     * <p>The name of Config rule deployed in the member account.</p>
     */
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }

    /**
     * <p>The name of Config rule deployed in the member account.</p>
     */
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }

    /**
     * <p>The name of Config rule deployed in the member account.</p>
     */
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }

    /**
     * <p>The name of Config rule deployed in the member account.</p>
     */
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }

    /**
     * <p>The name of Config rule deployed in the member account.</p>
     */
    inline MemberAccountStatus& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}

    /**
     * <p>The name of Config rule deployed in the member account.</p>
     */
    inline MemberAccountStatus& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of Config rule deployed in the member account.</p>
     */
    inline MemberAccountStatus& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}


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
    inline const MemberAccountRuleStatus& GetMemberAccountRuleStatus() const{ return m_memberAccountRuleStatus; }

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
    inline bool MemberAccountRuleStatusHasBeenSet() const { return m_memberAccountRuleStatusHasBeenSet; }

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
    inline void SetMemberAccountRuleStatus(const MemberAccountRuleStatus& value) { m_memberAccountRuleStatusHasBeenSet = true; m_memberAccountRuleStatus = value; }

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
    inline void SetMemberAccountRuleStatus(MemberAccountRuleStatus&& value) { m_memberAccountRuleStatusHasBeenSet = true; m_memberAccountRuleStatus = std::move(value); }

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
    inline MemberAccountStatus& WithMemberAccountRuleStatus(const MemberAccountRuleStatus& value) { SetMemberAccountRuleStatus(value); return *this;}

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
    inline MemberAccountStatus& WithMemberAccountRuleStatus(MemberAccountRuleStatus&& value) { SetMemberAccountRuleStatus(std::move(value)); return *this;}


    /**
     * <p>An error code that is returned when Config rule creation or deletion failed
     * in the member account.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>An error code that is returned when Config rule creation or deletion failed
     * in the member account.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>An error code that is returned when Config rule creation or deletion failed
     * in the member account.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>An error code that is returned when Config rule creation or deletion failed
     * in the member account.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>An error code that is returned when Config rule creation or deletion failed
     * in the member account.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>An error code that is returned when Config rule creation or deletion failed
     * in the member account.</p>
     */
    inline MemberAccountStatus& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>An error code that is returned when Config rule creation or deletion failed
     * in the member account.</p>
     */
    inline MemberAccountStatus& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>An error code that is returned when Config rule creation or deletion failed
     * in the member account.</p>
     */
    inline MemberAccountStatus& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>An error message indicating that Config rule account creation or deletion has
     * failed due to an error in the member account.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>An error message indicating that Config rule account creation or deletion has
     * failed due to an error in the member account.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>An error message indicating that Config rule account creation or deletion has
     * failed due to an error in the member account.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>An error message indicating that Config rule account creation or deletion has
     * failed due to an error in the member account.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>An error message indicating that Config rule account creation or deletion has
     * failed due to an error in the member account.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>An error message indicating that Config rule account creation or deletion has
     * failed due to an error in the member account.</p>
     */
    inline MemberAccountStatus& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>An error message indicating that Config rule account creation or deletion has
     * failed due to an error in the member account.</p>
     */
    inline MemberAccountStatus& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>An error message indicating that Config rule account creation or deletion has
     * failed due to an error in the member account.</p>
     */
    inline MemberAccountStatus& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The timestamp of the last status update.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The timestamp of the last status update.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The timestamp of the last status update.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The timestamp of the last status update.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The timestamp of the last status update.</p>
     */
    inline MemberAccountStatus& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The timestamp of the last status update.</p>
     */
    inline MemberAccountStatus& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet = false;

    MemberAccountRuleStatus m_memberAccountRuleStatus;
    bool m_memberAccountRuleStatusHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
