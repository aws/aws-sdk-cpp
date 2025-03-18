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
    AWS_CONFIGSERVICE_API OrganizationConfigRuleStatus() = default;
    AWS_CONFIGSERVICE_API OrganizationConfigRuleStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API OrganizationConfigRuleStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name that you assign to organization Config rule.</p>
     */
    inline const Aws::String& GetOrganizationConfigRuleName() const { return m_organizationConfigRuleName; }
    inline bool OrganizationConfigRuleNameHasBeenSet() const { return m_organizationConfigRuleNameHasBeenSet; }
    template<typename OrganizationConfigRuleNameT = Aws::String>
    void SetOrganizationConfigRuleName(OrganizationConfigRuleNameT&& value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName = std::forward<OrganizationConfigRuleNameT>(value); }
    template<typename OrganizationConfigRuleNameT = Aws::String>
    OrganizationConfigRuleStatus& WithOrganizationConfigRuleName(OrganizationConfigRuleNameT&& value) { SetOrganizationConfigRuleName(std::forward<OrganizationConfigRuleNameT>(value)); return *this;}
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
    inline OrganizationRuleStatus GetOrganizationRuleStatus() const { return m_organizationRuleStatus; }
    inline bool OrganizationRuleStatusHasBeenSet() const { return m_organizationRuleStatusHasBeenSet; }
    inline void SetOrganizationRuleStatus(OrganizationRuleStatus value) { m_organizationRuleStatusHasBeenSet = true; m_organizationRuleStatus = value; }
    inline OrganizationConfigRuleStatus& WithOrganizationRuleStatus(OrganizationRuleStatus value) { SetOrganizationRuleStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error code that is returned when organization Config rule creation or
     * deletion has failed.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    OrganizationConfigRuleStatus& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message indicating that organization Config rule creation or
     * deletion failed due to an error.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    OrganizationConfigRuleStatus& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last update.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    OrganizationConfigRuleStatus& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationConfigRuleName;
    bool m_organizationConfigRuleNameHasBeenSet = false;

    OrganizationRuleStatus m_organizationRuleStatus{OrganizationRuleStatus::NOT_SET};
    bool m_organizationRuleStatusHasBeenSet = false;

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
