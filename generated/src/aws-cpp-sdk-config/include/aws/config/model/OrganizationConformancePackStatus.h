/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/OrganizationResourceStatus.h>
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
   * <p>Returns the status for an organization conformance pack in an
   * organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/OrganizationConformancePackStatus">AWS
   * API Reference</a></p>
   */
  class OrganizationConformancePackStatus
  {
  public:
    AWS_CONFIGSERVICE_API OrganizationConformancePackStatus() = default;
    AWS_CONFIGSERVICE_API OrganizationConformancePackStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API OrganizationConformancePackStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name that you assign to organization conformance pack.</p>
     */
    inline const Aws::String& GetOrganizationConformancePackName() const { return m_organizationConformancePackName; }
    inline bool OrganizationConformancePackNameHasBeenSet() const { return m_organizationConformancePackNameHasBeenSet; }
    template<typename OrganizationConformancePackNameT = Aws::String>
    void SetOrganizationConformancePackName(OrganizationConformancePackNameT&& value) { m_organizationConformancePackNameHasBeenSet = true; m_organizationConformancePackName = std::forward<OrganizationConformancePackNameT>(value); }
    template<typename OrganizationConformancePackNameT = Aws::String>
    OrganizationConformancePackStatus& WithOrganizationConformancePackName(OrganizationConformancePackNameT&& value) { SetOrganizationConformancePackName(std::forward<OrganizationConformancePackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates deployment status of an organization conformance pack. When
     * management account calls PutOrganizationConformancePack for the first time,
     * conformance pack status is created in all the member accounts. When management
     * account calls PutOrganizationConformancePack for the second time, conformance
     * pack status is updated in all the member accounts. Additionally, conformance
     * pack status is updated when one or more member accounts join or leave an
     * organization. Conformance pack status is deleted when the management account
     * deletes OrganizationConformancePack in all the member accounts and disables
     * service access for <code>config-multiaccountsetup.amazonaws.com</code>.</p>
     * <p>Config sets the state of the conformance pack to:</p> <ul> <li> <p>
     * <code>CREATE_SUCCESSFUL</code> when an organization conformance pack has been
     * successfully created in all the member accounts. </p> </li> <li> <p>
     * <code>CREATE_IN_PROGRESS</code> when an organization conformance pack creation
     * is in progress.</p> </li> <li> <p> <code>CREATE_FAILED</code> when an
     * organization conformance pack creation failed in one or more member accounts
     * within that organization.</p> </li> <li> <p> <code>DELETE_FAILED</code> when an
     * organization conformance pack deletion failed in one or more member accounts
     * within that organization.</p> </li> <li> <p> <code>DELETE_IN_PROGRESS</code>
     * when an organization conformance pack deletion is in progress.</p> </li> <li>
     * <p> <code>DELETE_SUCCESSFUL</code> when an organization conformance pack has
     * been successfully deleted from all the member accounts.</p> </li> <li> <p>
     * <code>UPDATE_SUCCESSFUL</code> when an organization conformance pack has been
     * successfully updated in all the member accounts.</p> </li> <li> <p>
     * <code>UPDATE_IN_PROGRESS</code> when an organization conformance pack update is
     * in progress.</p> </li> <li> <p> <code>UPDATE_FAILED</code> when an organization
     * conformance pack update failed in one or more member accounts within that
     * organization.</p> </li> </ul>
     */
    inline OrganizationResourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(OrganizationResourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline OrganizationConformancePackStatus& WithStatus(OrganizationResourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error code that is returned when organization conformance pack creation or
     * deletion has failed in a member account. </p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    OrganizationConformancePackStatus& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message indicating that organization conformance pack creation or
     * deletion failed due to an error. </p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    OrganizationConformancePackStatus& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
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
    OrganizationConformancePackStatus& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationConformancePackName;
    bool m_organizationConformancePackNameHasBeenSet = false;

    OrganizationResourceStatus m_status{OrganizationResourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

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
