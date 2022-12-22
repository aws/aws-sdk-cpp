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
    AWS_CONFIGSERVICE_API OrganizationConformancePackDetailedStatus();
    AWS_CONFIGSERVICE_API OrganizationConformancePackDetailedStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API OrganizationConformancePackDetailedStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline OrganizationConformancePackDetailedStatus& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The 12-digit account ID of a member account.</p>
     */
    inline OrganizationConformancePackDetailedStatus& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The 12-digit account ID of a member account.</p>
     */
    inline OrganizationConformancePackDetailedStatus& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The name of conformance pack deployed in the member account.</p>
     */
    inline const Aws::String& GetConformancePackName() const{ return m_conformancePackName; }

    /**
     * <p>The name of conformance pack deployed in the member account.</p>
     */
    inline bool ConformancePackNameHasBeenSet() const { return m_conformancePackNameHasBeenSet; }

    /**
     * <p>The name of conformance pack deployed in the member account.</p>
     */
    inline void SetConformancePackName(const Aws::String& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = value; }

    /**
     * <p>The name of conformance pack deployed in the member account.</p>
     */
    inline void SetConformancePackName(Aws::String&& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = std::move(value); }

    /**
     * <p>The name of conformance pack deployed in the member account.</p>
     */
    inline void SetConformancePackName(const char* value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName.assign(value); }

    /**
     * <p>The name of conformance pack deployed in the member account.</p>
     */
    inline OrganizationConformancePackDetailedStatus& WithConformancePackName(const Aws::String& value) { SetConformancePackName(value); return *this;}

    /**
     * <p>The name of conformance pack deployed in the member account.</p>
     */
    inline OrganizationConformancePackDetailedStatus& WithConformancePackName(Aws::String&& value) { SetConformancePackName(std::move(value)); return *this;}

    /**
     * <p>The name of conformance pack deployed in the member account.</p>
     */
    inline OrganizationConformancePackDetailedStatus& WithConformancePackName(const char* value) { SetConformancePackName(value); return *this;}


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
    inline const OrganizationResourceDetailedStatus& GetStatus() const{ return m_status; }

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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

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
    inline void SetStatus(const OrganizationResourceDetailedStatus& value) { m_statusHasBeenSet = true; m_status = value; }

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
    inline void SetStatus(OrganizationResourceDetailedStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

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
    inline OrganizationConformancePackDetailedStatus& WithStatus(const OrganizationResourceDetailedStatus& value) { SetStatus(value); return *this;}

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
    inline OrganizationConformancePackDetailedStatus& WithStatus(OrganizationResourceDetailedStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>An error code that is returned when conformance pack creation or deletion
     * failed in the member account. </p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>An error code that is returned when conformance pack creation or deletion
     * failed in the member account. </p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>An error code that is returned when conformance pack creation or deletion
     * failed in the member account. </p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>An error code that is returned when conformance pack creation or deletion
     * failed in the member account. </p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>An error code that is returned when conformance pack creation or deletion
     * failed in the member account. </p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>An error code that is returned when conformance pack creation or deletion
     * failed in the member account. </p>
     */
    inline OrganizationConformancePackDetailedStatus& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>An error code that is returned when conformance pack creation or deletion
     * failed in the member account. </p>
     */
    inline OrganizationConformancePackDetailedStatus& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>An error code that is returned when conformance pack creation or deletion
     * failed in the member account. </p>
     */
    inline OrganizationConformancePackDetailedStatus& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>An error message indicating that conformance pack account creation or
     * deletion has failed due to an error in the member account. </p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>An error message indicating that conformance pack account creation or
     * deletion has failed due to an error in the member account. </p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>An error message indicating that conformance pack account creation or
     * deletion has failed due to an error in the member account. </p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>An error message indicating that conformance pack account creation or
     * deletion has failed due to an error in the member account. </p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>An error message indicating that conformance pack account creation or
     * deletion has failed due to an error in the member account. </p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>An error message indicating that conformance pack account creation or
     * deletion has failed due to an error in the member account. </p>
     */
    inline OrganizationConformancePackDetailedStatus& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>An error message indicating that conformance pack account creation or
     * deletion has failed due to an error in the member account. </p>
     */
    inline OrganizationConformancePackDetailedStatus& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>An error message indicating that conformance pack account creation or
     * deletion has failed due to an error in the member account. </p>
     */
    inline OrganizationConformancePackDetailedStatus& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


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
    inline OrganizationConformancePackDetailedStatus& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The timestamp of the last status update.</p>
     */
    inline OrganizationConformancePackDetailedStatus& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_conformancePackName;
    bool m_conformancePackNameHasBeenSet = false;

    OrganizationResourceDetailedStatus m_status;
    bool m_statusHasBeenSet = false;

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
