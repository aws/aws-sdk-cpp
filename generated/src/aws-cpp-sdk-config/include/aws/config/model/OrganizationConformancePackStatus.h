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
    AWS_CONFIGSERVICE_API OrganizationConformancePackStatus();
    AWS_CONFIGSERVICE_API OrganizationConformancePackStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API OrganizationConformancePackStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name that you assign to organization conformance pack.</p>
     */
    inline const Aws::String& GetOrganizationConformancePackName() const{ return m_organizationConformancePackName; }

    /**
     * <p>The name that you assign to organization conformance pack.</p>
     */
    inline bool OrganizationConformancePackNameHasBeenSet() const { return m_organizationConformancePackNameHasBeenSet; }

    /**
     * <p>The name that you assign to organization conformance pack.</p>
     */
    inline void SetOrganizationConformancePackName(const Aws::String& value) { m_organizationConformancePackNameHasBeenSet = true; m_organizationConformancePackName = value; }

    /**
     * <p>The name that you assign to organization conformance pack.</p>
     */
    inline void SetOrganizationConformancePackName(Aws::String&& value) { m_organizationConformancePackNameHasBeenSet = true; m_organizationConformancePackName = std::move(value); }

    /**
     * <p>The name that you assign to organization conformance pack.</p>
     */
    inline void SetOrganizationConformancePackName(const char* value) { m_organizationConformancePackNameHasBeenSet = true; m_organizationConformancePackName.assign(value); }

    /**
     * <p>The name that you assign to organization conformance pack.</p>
     */
    inline OrganizationConformancePackStatus& WithOrganizationConformancePackName(const Aws::String& value) { SetOrganizationConformancePackName(value); return *this;}

    /**
     * <p>The name that you assign to organization conformance pack.</p>
     */
    inline OrganizationConformancePackStatus& WithOrganizationConformancePackName(Aws::String&& value) { SetOrganizationConformancePackName(std::move(value)); return *this;}

    /**
     * <p>The name that you assign to organization conformance pack.</p>
     */
    inline OrganizationConformancePackStatus& WithOrganizationConformancePackName(const char* value) { SetOrganizationConformancePackName(value); return *this;}


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
    inline const OrganizationResourceStatus& GetStatus() const{ return m_status; }

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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

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
    inline void SetStatus(const OrganizationResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

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
    inline void SetStatus(OrganizationResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

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
    inline OrganizationConformancePackStatus& WithStatus(const OrganizationResourceStatus& value) { SetStatus(value); return *this;}

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
    inline OrganizationConformancePackStatus& WithStatus(OrganizationResourceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>An error code that is returned when organization conformance pack creation or
     * deletion has failed in a member account. </p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>An error code that is returned when organization conformance pack creation or
     * deletion has failed in a member account. </p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>An error code that is returned when organization conformance pack creation or
     * deletion has failed in a member account. </p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>An error code that is returned when organization conformance pack creation or
     * deletion has failed in a member account. </p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>An error code that is returned when organization conformance pack creation or
     * deletion has failed in a member account. </p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>An error code that is returned when organization conformance pack creation or
     * deletion has failed in a member account. </p>
     */
    inline OrganizationConformancePackStatus& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>An error code that is returned when organization conformance pack creation or
     * deletion has failed in a member account. </p>
     */
    inline OrganizationConformancePackStatus& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>An error code that is returned when organization conformance pack creation or
     * deletion has failed in a member account. </p>
     */
    inline OrganizationConformancePackStatus& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>An error message indicating that organization conformance pack creation or
     * deletion failed due to an error. </p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>An error message indicating that organization conformance pack creation or
     * deletion failed due to an error. </p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>An error message indicating that organization conformance pack creation or
     * deletion failed due to an error. </p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>An error message indicating that organization conformance pack creation or
     * deletion failed due to an error. </p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>An error message indicating that organization conformance pack creation or
     * deletion failed due to an error. </p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>An error message indicating that organization conformance pack creation or
     * deletion failed due to an error. </p>
     */
    inline OrganizationConformancePackStatus& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>An error message indicating that organization conformance pack creation or
     * deletion failed due to an error. </p>
     */
    inline OrganizationConformancePackStatus& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>An error message indicating that organization conformance pack creation or
     * deletion failed due to an error. </p>
     */
    inline OrganizationConformancePackStatus& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


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
    inline OrganizationConformancePackStatus& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The timestamp of the last update.</p>
     */
    inline OrganizationConformancePackStatus& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_organizationConformancePackName;
    bool m_organizationConformancePackNameHasBeenSet = false;

    OrganizationResourceStatus m_status;
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
