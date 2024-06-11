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
   * <p>Returns the status for an organization Config rule in an
   * organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/OrganizationConfigRuleStatus">AWS
   * API Reference</a></p>
   */
  class OrganizationConfigRuleStatus
  {
  public:
    AWS_CONFIGSERVICE_API OrganizationConfigRuleStatus();
    AWS_CONFIGSERVICE_API OrganizationConfigRuleStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API OrganizationConfigRuleStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name that you assign to organization Config rule.</p>
     */
    inline const Aws::String& GetOrganizationConfigRuleName() const{ return m_organizationConfigRuleName; }
    inline bool OrganizationConfigRuleNameHasBeenSet() const { return m_organizationConfigRuleNameHasBeenSet; }
    inline void SetOrganizationConfigRuleName(const Aws::String& value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName = value; }
    inline void SetOrganizationConfigRuleName(Aws::String&& value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName = std::move(value); }
    inline void SetOrganizationConfigRuleName(const char* value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName.assign(value); }
    inline OrganizationConfigRuleStatus& WithOrganizationConfigRuleName(const Aws::String& value) { SetOrganizationConfigRuleName(value); return *this;}
    inline OrganizationConfigRuleStatus& WithOrganizationConfigRuleName(Aws::String&& value) { SetOrganizationConfigRuleName(std::move(value)); return *this;}
    inline OrganizationConfigRuleStatus& WithOrganizationConfigRuleName(const char* value) { SetOrganizationConfigRuleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates deployment status of an organization Config rule. When management
     * account calls PutOrganizationConfigRule action for the first time, Config rule
     * status is created in all the member accounts. When management account calls
     * PutOrganizationConfigRule action for the second time, Config rule status is
     * updated in all the member accounts. Additionally, Config rule status is updated
     * when one or more member accounts join or leave an organization. Config rule
     * status is deleted when the management account deletes OrganizationConfigRule in
     * all the member accounts and disables service access for
     * <code>config-multiaccountsetup.amazonaws.com</code>.</p> <p>Config sets the
     * state of the rule to:</p> <ul> <li> <p> <code>CREATE_SUCCESSFUL</code> when an
     * organization Config rule has been successfully created in all the member
     * accounts. </p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> when an
     * organization Config rule creation is in progress.</p> </li> <li> <p>
     * <code>CREATE_FAILED</code> when an organization Config rule creation failed in
     * one or more member accounts within that organization.</p> </li> <li> <p>
     * <code>DELETE_FAILED</code> when an organization Config rule deletion failed in
     * one or more member accounts within that organization.</p> </li> <li> <p>
     * <code>DELETE_IN_PROGRESS</code> when an organization Config rule deletion is in
     * progress.</p> </li> <li> <p> <code>DELETE_SUCCESSFUL</code> when an organization
     * Config rule has been successfully deleted from all the member accounts.</p>
     * </li> <li> <p> <code>UPDATE_SUCCESSFUL</code> when an organization Config rule
     * has been successfully updated in all the member accounts.</p> </li> <li> <p>
     * <code>UPDATE_IN_PROGRESS</code> when an organization Config rule update is in
     * progress.</p> </li> <li> <p> <code>UPDATE_FAILED</code> when an organization
     * Config rule update failed in one or more member accounts within that
     * organization.</p> </li> </ul>
     */
    inline const OrganizationRuleStatus& GetOrganizationRuleStatus() const{ return m_organizationRuleStatus; }
    inline bool OrganizationRuleStatusHasBeenSet() const { return m_organizationRuleStatusHasBeenSet; }
    inline void SetOrganizationRuleStatus(const OrganizationRuleStatus& value) { m_organizationRuleStatusHasBeenSet = true; m_organizationRuleStatus = value; }
    inline void SetOrganizationRuleStatus(OrganizationRuleStatus&& value) { m_organizationRuleStatusHasBeenSet = true; m_organizationRuleStatus = std::move(value); }
    inline OrganizationConfigRuleStatus& WithOrganizationRuleStatus(const OrganizationRuleStatus& value) { SetOrganizationRuleStatus(value); return *this;}
    inline OrganizationConfigRuleStatus& WithOrganizationRuleStatus(OrganizationRuleStatus&& value) { SetOrganizationRuleStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error code that is returned when organization Config rule creation or
     * deletion has failed.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }
    inline OrganizationConfigRuleStatus& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}
    inline OrganizationConfigRuleStatus& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}
    inline OrganizationConfigRuleStatus& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message indicating that organization Config rule creation or
     * deletion failed due to an error.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline OrganizationConfigRuleStatus& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline OrganizationConfigRuleStatus& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline OrganizationConfigRuleStatus& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last update.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }
    inline OrganizationConfigRuleStatus& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline OrganizationConfigRuleStatus& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationConfigRuleName;
    bool m_organizationConfigRuleNameHasBeenSet = false;

    OrganizationRuleStatus m_organizationRuleStatus;
    bool m_organizationRuleStatusHasBeenSet = false;

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
