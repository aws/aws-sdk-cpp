/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/OrganizationRuleStatus.h>
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
   * <p>Returns the status for an organization config rule in an
   * organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/OrganizationConfigRuleStatus">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API OrganizationConfigRuleStatus
  {
  public:
    OrganizationConfigRuleStatus();
    OrganizationConfigRuleStatus(Aws::Utils::Json::JsonView jsonValue);
    OrganizationConfigRuleStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name that you assign to organization config rule.</p>
     */
    inline const Aws::String& GetOrganizationConfigRuleName() const{ return m_organizationConfigRuleName; }

    /**
     * <p>The name that you assign to organization config rule.</p>
     */
    inline bool OrganizationConfigRuleNameHasBeenSet() const { return m_organizationConfigRuleNameHasBeenSet; }

    /**
     * <p>The name that you assign to organization config rule.</p>
     */
    inline void SetOrganizationConfigRuleName(const Aws::String& value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName = value; }

    /**
     * <p>The name that you assign to organization config rule.</p>
     */
    inline void SetOrganizationConfigRuleName(Aws::String&& value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName = std::move(value); }

    /**
     * <p>The name that you assign to organization config rule.</p>
     */
    inline void SetOrganizationConfigRuleName(const char* value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName.assign(value); }

    /**
     * <p>The name that you assign to organization config rule.</p>
     */
    inline OrganizationConfigRuleStatus& WithOrganizationConfigRuleName(const Aws::String& value) { SetOrganizationConfigRuleName(value); return *this;}

    /**
     * <p>The name that you assign to organization config rule.</p>
     */
    inline OrganizationConfigRuleStatus& WithOrganizationConfigRuleName(Aws::String&& value) { SetOrganizationConfigRuleName(std::move(value)); return *this;}

    /**
     * <p>The name that you assign to organization config rule.</p>
     */
    inline OrganizationConfigRuleStatus& WithOrganizationConfigRuleName(const char* value) { SetOrganizationConfigRuleName(value); return *this;}


    /**
     * <p>Indicates deployment status of an organization config rule. When master
     * account calls PutOrganizationConfigRule action for the first time, config rule
     * status is created in all the member accounts. When master account calls
     * PutOrganizationConfigRule action for the second time, config rule status is
     * updated in all the member accounts. Additionally, config rule status is updated
     * when one or more member accounts join or leave an organization. Config rule
     * status is deleted when the master account deletes OrganizationConfigRule in all
     * the member accounts and disables service access for
     * <code>config-multiaccountsetup.amazonaws.com</code>.</p> <p>AWS Config sets the
     * state of the rule to:</p> <ul> <li> <p> <code>CREATE_SUCCESSFUL</code> when an
     * organization config rule has been successfully created in all the member
     * accounts. </p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> when an
     * organization config rule creation is in progress.</p> </li> <li> <p>
     * <code>CREATE_FAILED</code> when an organization config rule creation failed in
     * one or more member accounts within that organization.</p> </li> <li> <p>
     * <code>DELETE_FAILED</code> when an organization config rule deletion failed in
     * one or more member accounts within that organization.</p> </li> <li> <p>
     * <code>DELETE_IN_PROGRESS</code> when an organization config rule deletion is in
     * progress.</p> </li> <li> <p> <code>DELETE_SUCCESSFUL</code> when an organization
     * config rule has been successfully deleted from all the member accounts.</p>
     * </li> <li> <p> <code>UPDATE_SUCCESSFUL</code> when an organization config rule
     * has been successfully updated in all the member accounts.</p> </li> <li> <p>
     * <code>UPDATE_IN_PROGRESS</code> when an organization config rule update is in
     * progress.</p> </li> <li> <p> <code>UPDATE_FAILED</code> when an organization
     * config rule update failed in one or more member accounts within that
     * organization.</p> </li> </ul>
     */
    inline const OrganizationRuleStatus& GetOrganizationRuleStatus() const{ return m_organizationRuleStatus; }

    /**
     * <p>Indicates deployment status of an organization config rule. When master
     * account calls PutOrganizationConfigRule action for the first time, config rule
     * status is created in all the member accounts. When master account calls
     * PutOrganizationConfigRule action for the second time, config rule status is
     * updated in all the member accounts. Additionally, config rule status is updated
     * when one or more member accounts join or leave an organization. Config rule
     * status is deleted when the master account deletes OrganizationConfigRule in all
     * the member accounts and disables service access for
     * <code>config-multiaccountsetup.amazonaws.com</code>.</p> <p>AWS Config sets the
     * state of the rule to:</p> <ul> <li> <p> <code>CREATE_SUCCESSFUL</code> when an
     * organization config rule has been successfully created in all the member
     * accounts. </p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> when an
     * organization config rule creation is in progress.</p> </li> <li> <p>
     * <code>CREATE_FAILED</code> when an organization config rule creation failed in
     * one or more member accounts within that organization.</p> </li> <li> <p>
     * <code>DELETE_FAILED</code> when an organization config rule deletion failed in
     * one or more member accounts within that organization.</p> </li> <li> <p>
     * <code>DELETE_IN_PROGRESS</code> when an organization config rule deletion is in
     * progress.</p> </li> <li> <p> <code>DELETE_SUCCESSFUL</code> when an organization
     * config rule has been successfully deleted from all the member accounts.</p>
     * </li> <li> <p> <code>UPDATE_SUCCESSFUL</code> when an organization config rule
     * has been successfully updated in all the member accounts.</p> </li> <li> <p>
     * <code>UPDATE_IN_PROGRESS</code> when an organization config rule update is in
     * progress.</p> </li> <li> <p> <code>UPDATE_FAILED</code> when an organization
     * config rule update failed in one or more member accounts within that
     * organization.</p> </li> </ul>
     */
    inline bool OrganizationRuleStatusHasBeenSet() const { return m_organizationRuleStatusHasBeenSet; }

    /**
     * <p>Indicates deployment status of an organization config rule. When master
     * account calls PutOrganizationConfigRule action for the first time, config rule
     * status is created in all the member accounts. When master account calls
     * PutOrganizationConfigRule action for the second time, config rule status is
     * updated in all the member accounts. Additionally, config rule status is updated
     * when one or more member accounts join or leave an organization. Config rule
     * status is deleted when the master account deletes OrganizationConfigRule in all
     * the member accounts and disables service access for
     * <code>config-multiaccountsetup.amazonaws.com</code>.</p> <p>AWS Config sets the
     * state of the rule to:</p> <ul> <li> <p> <code>CREATE_SUCCESSFUL</code> when an
     * organization config rule has been successfully created in all the member
     * accounts. </p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> when an
     * organization config rule creation is in progress.</p> </li> <li> <p>
     * <code>CREATE_FAILED</code> when an organization config rule creation failed in
     * one or more member accounts within that organization.</p> </li> <li> <p>
     * <code>DELETE_FAILED</code> when an organization config rule deletion failed in
     * one or more member accounts within that organization.</p> </li> <li> <p>
     * <code>DELETE_IN_PROGRESS</code> when an organization config rule deletion is in
     * progress.</p> </li> <li> <p> <code>DELETE_SUCCESSFUL</code> when an organization
     * config rule has been successfully deleted from all the member accounts.</p>
     * </li> <li> <p> <code>UPDATE_SUCCESSFUL</code> when an organization config rule
     * has been successfully updated in all the member accounts.</p> </li> <li> <p>
     * <code>UPDATE_IN_PROGRESS</code> when an organization config rule update is in
     * progress.</p> </li> <li> <p> <code>UPDATE_FAILED</code> when an organization
     * config rule update failed in one or more member accounts within that
     * organization.</p> </li> </ul>
     */
    inline void SetOrganizationRuleStatus(const OrganizationRuleStatus& value) { m_organizationRuleStatusHasBeenSet = true; m_organizationRuleStatus = value; }

    /**
     * <p>Indicates deployment status of an organization config rule. When master
     * account calls PutOrganizationConfigRule action for the first time, config rule
     * status is created in all the member accounts. When master account calls
     * PutOrganizationConfigRule action for the second time, config rule status is
     * updated in all the member accounts. Additionally, config rule status is updated
     * when one or more member accounts join or leave an organization. Config rule
     * status is deleted when the master account deletes OrganizationConfigRule in all
     * the member accounts and disables service access for
     * <code>config-multiaccountsetup.amazonaws.com</code>.</p> <p>AWS Config sets the
     * state of the rule to:</p> <ul> <li> <p> <code>CREATE_SUCCESSFUL</code> when an
     * organization config rule has been successfully created in all the member
     * accounts. </p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> when an
     * organization config rule creation is in progress.</p> </li> <li> <p>
     * <code>CREATE_FAILED</code> when an organization config rule creation failed in
     * one or more member accounts within that organization.</p> </li> <li> <p>
     * <code>DELETE_FAILED</code> when an organization config rule deletion failed in
     * one or more member accounts within that organization.</p> </li> <li> <p>
     * <code>DELETE_IN_PROGRESS</code> when an organization config rule deletion is in
     * progress.</p> </li> <li> <p> <code>DELETE_SUCCESSFUL</code> when an organization
     * config rule has been successfully deleted from all the member accounts.</p>
     * </li> <li> <p> <code>UPDATE_SUCCESSFUL</code> when an organization config rule
     * has been successfully updated in all the member accounts.</p> </li> <li> <p>
     * <code>UPDATE_IN_PROGRESS</code> when an organization config rule update is in
     * progress.</p> </li> <li> <p> <code>UPDATE_FAILED</code> when an organization
     * config rule update failed in one or more member accounts within that
     * organization.</p> </li> </ul>
     */
    inline void SetOrganizationRuleStatus(OrganizationRuleStatus&& value) { m_organizationRuleStatusHasBeenSet = true; m_organizationRuleStatus = std::move(value); }

    /**
     * <p>Indicates deployment status of an organization config rule. When master
     * account calls PutOrganizationConfigRule action for the first time, config rule
     * status is created in all the member accounts. When master account calls
     * PutOrganizationConfigRule action for the second time, config rule status is
     * updated in all the member accounts. Additionally, config rule status is updated
     * when one or more member accounts join or leave an organization. Config rule
     * status is deleted when the master account deletes OrganizationConfigRule in all
     * the member accounts and disables service access for
     * <code>config-multiaccountsetup.amazonaws.com</code>.</p> <p>AWS Config sets the
     * state of the rule to:</p> <ul> <li> <p> <code>CREATE_SUCCESSFUL</code> when an
     * organization config rule has been successfully created in all the member
     * accounts. </p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> when an
     * organization config rule creation is in progress.</p> </li> <li> <p>
     * <code>CREATE_FAILED</code> when an organization config rule creation failed in
     * one or more member accounts within that organization.</p> </li> <li> <p>
     * <code>DELETE_FAILED</code> when an organization config rule deletion failed in
     * one or more member accounts within that organization.</p> </li> <li> <p>
     * <code>DELETE_IN_PROGRESS</code> when an organization config rule deletion is in
     * progress.</p> </li> <li> <p> <code>DELETE_SUCCESSFUL</code> when an organization
     * config rule has been successfully deleted from all the member accounts.</p>
     * </li> <li> <p> <code>UPDATE_SUCCESSFUL</code> when an organization config rule
     * has been successfully updated in all the member accounts.</p> </li> <li> <p>
     * <code>UPDATE_IN_PROGRESS</code> when an organization config rule update is in
     * progress.</p> </li> <li> <p> <code>UPDATE_FAILED</code> when an organization
     * config rule update failed in one or more member accounts within that
     * organization.</p> </li> </ul>
     */
    inline OrganizationConfigRuleStatus& WithOrganizationRuleStatus(const OrganizationRuleStatus& value) { SetOrganizationRuleStatus(value); return *this;}

    /**
     * <p>Indicates deployment status of an organization config rule. When master
     * account calls PutOrganizationConfigRule action for the first time, config rule
     * status is created in all the member accounts. When master account calls
     * PutOrganizationConfigRule action for the second time, config rule status is
     * updated in all the member accounts. Additionally, config rule status is updated
     * when one or more member accounts join or leave an organization. Config rule
     * status is deleted when the master account deletes OrganizationConfigRule in all
     * the member accounts and disables service access for
     * <code>config-multiaccountsetup.amazonaws.com</code>.</p> <p>AWS Config sets the
     * state of the rule to:</p> <ul> <li> <p> <code>CREATE_SUCCESSFUL</code> when an
     * organization config rule has been successfully created in all the member
     * accounts. </p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> when an
     * organization config rule creation is in progress.</p> </li> <li> <p>
     * <code>CREATE_FAILED</code> when an organization config rule creation failed in
     * one or more member accounts within that organization.</p> </li> <li> <p>
     * <code>DELETE_FAILED</code> when an organization config rule deletion failed in
     * one or more member accounts within that organization.</p> </li> <li> <p>
     * <code>DELETE_IN_PROGRESS</code> when an organization config rule deletion is in
     * progress.</p> </li> <li> <p> <code>DELETE_SUCCESSFUL</code> when an organization
     * config rule has been successfully deleted from all the member accounts.</p>
     * </li> <li> <p> <code>UPDATE_SUCCESSFUL</code> when an organization config rule
     * has been successfully updated in all the member accounts.</p> </li> <li> <p>
     * <code>UPDATE_IN_PROGRESS</code> when an organization config rule update is in
     * progress.</p> </li> <li> <p> <code>UPDATE_FAILED</code> when an organization
     * config rule update failed in one or more member accounts within that
     * organization.</p> </li> </ul>
     */
    inline OrganizationConfigRuleStatus& WithOrganizationRuleStatus(OrganizationRuleStatus&& value) { SetOrganizationRuleStatus(std::move(value)); return *this;}


    /**
     * <p>An error code that is returned when organization config rule creation or
     * deletion has failed.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>An error code that is returned when organization config rule creation or
     * deletion has failed.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>An error code that is returned when organization config rule creation or
     * deletion has failed.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>An error code that is returned when organization config rule creation or
     * deletion has failed.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>An error code that is returned when organization config rule creation or
     * deletion has failed.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>An error code that is returned when organization config rule creation or
     * deletion has failed.</p>
     */
    inline OrganizationConfigRuleStatus& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>An error code that is returned when organization config rule creation or
     * deletion has failed.</p>
     */
    inline OrganizationConfigRuleStatus& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>An error code that is returned when organization config rule creation or
     * deletion has failed.</p>
     */
    inline OrganizationConfigRuleStatus& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>An error message indicating that organization config rule creation or
     * deletion failed due to an error.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>An error message indicating that organization config rule creation or
     * deletion failed due to an error.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>An error message indicating that organization config rule creation or
     * deletion failed due to an error.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>An error message indicating that organization config rule creation or
     * deletion failed due to an error.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>An error message indicating that organization config rule creation or
     * deletion failed due to an error.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>An error message indicating that organization config rule creation or
     * deletion failed due to an error.</p>
     */
    inline OrganizationConfigRuleStatus& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>An error message indicating that organization config rule creation or
     * deletion failed due to an error.</p>
     */
    inline OrganizationConfigRuleStatus& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>An error message indicating that organization config rule creation or
     * deletion failed due to an error.</p>
     */
    inline OrganizationConfigRuleStatus& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The timestamp of the last update.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The timestamp of the last update.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The timestamp of the last update.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The timestamp of the last update.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The timestamp of the last update.</p>
     */
    inline OrganizationConfigRuleStatus& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The timestamp of the last update.</p>
     */
    inline OrganizationConfigRuleStatus& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_organizationConfigRuleName;
    bool m_organizationConfigRuleNameHasBeenSet;

    OrganizationRuleStatus m_organizationRuleStatus;
    bool m_organizationRuleStatusHasBeenSet;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
