/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/OrganizationResourceDetailedStatus.h>
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
   * <p>Organization conformance pack creation or deletion status in each member
   * account. This includes the name of the conformance pack, the status, error code
   * and error message when the conformance pack creation or deletion failed.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/OrganizationConformancePackDetailedStatus">AWS
   * API Reference</a></p>
   */
  class OrganizationConformancePackDetailedStatus
  {
  public:
    AWS_CONFIGSERVICE_API OrganizationConformancePackDetailedStatus() = default;
    AWS_CONFIGSERVICE_API OrganizationConformancePackDetailedStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API OrganizationConformancePackDetailedStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    OrganizationConformancePackDetailedStatus& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of conformance pack deployed in the member account.</p>
     */
    inline const Aws::String& GetConformancePackName() const { return m_conformancePackName; }
    inline bool ConformancePackNameHasBeenSet() const { return m_conformancePackNameHasBeenSet; }
    template<typename ConformancePackNameT = Aws::String>
    void SetConformancePackName(ConformancePackNameT&& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = std::forward<ConformancePackNameT>(value); }
    template<typename ConformancePackNameT = Aws::String>
    OrganizationConformancePackDetailedStatus& WithConformancePackName(ConformancePackNameT&& value) { SetConformancePackName(std::forward<ConformancePackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates deployment status for conformance pack in a member account. When
     * management account calls <code>PutOrganizationConformancePack</code> action for
     * the first time, conformance pack status is created in the member account. When
     * management account calls <code>PutOrganizationConformancePack</code> action for
     * the second time, conformance pack status is updated in the member account.
     * Conformance pack status is deleted when the management account deletes
     * <code>OrganizationConformancePack</code> and disables service access for
     * <code>config-multiaccountsetup.amazonaws.com</code>. </p> <p> Config sets the
     * state of the conformance pack to:</p> <ul> <li> <p>
     * <code>CREATE_SUCCESSFUL</code> when conformance pack has been created in the
     * member account. </p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> when
     * conformance pack is being created in the member account.</p> </li> <li> <p>
     * <code>CREATE_FAILED</code> when conformance pack creation has failed in the
     * member account.</p> </li> <li> <p> <code>DELETE_FAILED</code> when conformance
     * pack deletion has failed in the member account.</p> </li> <li> <p>
     * <code>DELETE_IN_PROGRESS</code> when conformance pack is being deleted in the
     * member account.</p> </li> <li> <p> <code>DELETE_SUCCESSFUL</code> when
     * conformance pack has been deleted in the member account. </p> </li> <li> <p>
     * <code>UPDATE_SUCCESSFUL</code> when conformance pack has been updated in the
     * member account.</p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code> when
     * conformance pack is being updated in the member account.</p> </li> <li> <p>
     * <code>UPDATE_FAILED</code> when conformance pack deletion has failed in the
     * member account.</p> </li> </ul>
     */
    inline OrganizationResourceDetailedStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(OrganizationResourceDetailedStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline OrganizationConformancePackDetailedStatus& WithStatus(OrganizationResourceDetailedStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error code that is returned when conformance pack creation or deletion
     * failed in the member account. </p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    OrganizationConformancePackDetailedStatus& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message indicating that conformance pack account creation or
     * deletion has failed due to an error in the member account. </p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    OrganizationConformancePackDetailedStatus& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
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
    OrganizationConformancePackDetailedStatus& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_conformancePackName;
    bool m_conformancePackNameHasBeenSet = false;

    OrganizationResourceDetailedStatus m_status{OrganizationResourceDetailedStatus::NOT_SET};
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
