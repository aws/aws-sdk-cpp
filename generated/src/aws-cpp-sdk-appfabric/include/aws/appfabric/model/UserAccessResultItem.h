/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appfabric/model/ResultStatus.h>
#include <aws/appfabric/model/TaskError.h>
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
namespace AppFabric
{
namespace Model
{

  /**
   * <p>Contains information about a user's access to an application.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/UserAccessResultItem">AWS
   * API Reference</a></p>
   */
  class UserAccessResultItem
  {
  public:
    AWS_APPFABRIC_API UserAccessResultItem();
    AWS_APPFABRIC_API UserAccessResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API UserAccessResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetApp() const{ return m_app; }
    inline bool AppHasBeenSet() const { return m_appHasBeenSet; }
    inline void SetApp(const Aws::String& value) { m_appHasBeenSet = true; m_app = value; }
    inline void SetApp(Aws::String&& value) { m_appHasBeenSet = true; m_app = std::move(value); }
    inline void SetApp(const char* value) { m_appHasBeenSet = true; m_app.assign(value); }
    inline UserAccessResultItem& WithApp(const Aws::String& value) { SetApp(value); return *this;}
    inline UserAccessResultItem& WithApp(Aws::String&& value) { SetApp(std::move(value)); return *this;}
    inline UserAccessResultItem& WithApp(const char* value) { SetApp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the application tenant.</p>
     */
    inline const Aws::String& GetTenantId() const{ return m_tenantId; }
    inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }
    inline void SetTenantId(const Aws::String& value) { m_tenantIdHasBeenSet = true; m_tenantId = value; }
    inline void SetTenantId(Aws::String&& value) { m_tenantIdHasBeenSet = true; m_tenantId = std::move(value); }
    inline void SetTenantId(const char* value) { m_tenantIdHasBeenSet = true; m_tenantId.assign(value); }
    inline UserAccessResultItem& WithTenantId(const Aws::String& value) { SetTenantId(value); return *this;}
    inline UserAccessResultItem& WithTenantId(Aws::String&& value) { SetTenantId(std::move(value)); return *this;}
    inline UserAccessResultItem& WithTenantId(const char* value) { SetTenantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the tenant.</p>
     */
    inline const Aws::String& GetTenantDisplayName() const{ return m_tenantDisplayName; }
    inline bool TenantDisplayNameHasBeenSet() const { return m_tenantDisplayNameHasBeenSet; }
    inline void SetTenantDisplayName(const Aws::String& value) { m_tenantDisplayNameHasBeenSet = true; m_tenantDisplayName = value; }
    inline void SetTenantDisplayName(Aws::String&& value) { m_tenantDisplayNameHasBeenSet = true; m_tenantDisplayName = std::move(value); }
    inline void SetTenantDisplayName(const char* value) { m_tenantDisplayNameHasBeenSet = true; m_tenantDisplayName.assign(value); }
    inline UserAccessResultItem& WithTenantDisplayName(const Aws::String& value) { SetTenantDisplayName(value); return *this;}
    inline UserAccessResultItem& WithTenantDisplayName(Aws::String&& value) { SetTenantDisplayName(std::move(value)); return *this;}
    inline UserAccessResultItem& WithTenantDisplayName(const char* value) { SetTenantDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the task.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }
    inline UserAccessResultItem& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline UserAccessResultItem& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline UserAccessResultItem& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the user access result item.</p> <p>The following states are
     * possible:</p> <ul> <li> <p> <code>IN_PROGRESS</code>: The user access task is in
     * progress.</p> </li> <li> <p> <code>COMPLETED</code>: The user access task
     * completed successfully.</p> </li> <li> <p> <code>FAILED</code>: The user access
     * task failed.</p> </li> <li> <p> <code>EXPIRED</code>: The user access task
     * expired.</p> </li> </ul>
     */
    inline const ResultStatus& GetResultStatus() const{ return m_resultStatus; }
    inline bool ResultStatusHasBeenSet() const { return m_resultStatusHasBeenSet; }
    inline void SetResultStatus(const ResultStatus& value) { m_resultStatusHasBeenSet = true; m_resultStatus = value; }
    inline void SetResultStatus(ResultStatus&& value) { m_resultStatusHasBeenSet = true; m_resultStatus = std::move(value); }
    inline UserAccessResultItem& WithResultStatus(const ResultStatus& value) { SetResultStatus(value); return *this;}
    inline UserAccessResultItem& WithResultStatus(ResultStatus&& value) { SetResultStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the target user.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }
    inline UserAccessResultItem& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}
    inline UserAccessResultItem& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}
    inline UserAccessResultItem& WithEmail(const char* value) { SetEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline UserAccessResultItem& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline UserAccessResultItem& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline UserAccessResultItem& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full name of the user.</p>
     */
    inline const Aws::String& GetUserFullName() const{ return m_userFullName; }
    inline bool UserFullNameHasBeenSet() const { return m_userFullNameHasBeenSet; }
    inline void SetUserFullName(const Aws::String& value) { m_userFullNameHasBeenSet = true; m_userFullName = value; }
    inline void SetUserFullName(Aws::String&& value) { m_userFullNameHasBeenSet = true; m_userFullName = std::move(value); }
    inline void SetUserFullName(const char* value) { m_userFullNameHasBeenSet = true; m_userFullName.assign(value); }
    inline UserAccessResultItem& WithUserFullName(const Aws::String& value) { SetUserFullName(value); return *this;}
    inline UserAccessResultItem& WithUserFullName(Aws::String&& value) { SetUserFullName(std::move(value)); return *this;}
    inline UserAccessResultItem& WithUserFullName(const char* value) { SetUserFullName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first name of the user.</p>
     */
    inline const Aws::String& GetUserFirstName() const{ return m_userFirstName; }
    inline bool UserFirstNameHasBeenSet() const { return m_userFirstNameHasBeenSet; }
    inline void SetUserFirstName(const Aws::String& value) { m_userFirstNameHasBeenSet = true; m_userFirstName = value; }
    inline void SetUserFirstName(Aws::String&& value) { m_userFirstNameHasBeenSet = true; m_userFirstName = std::move(value); }
    inline void SetUserFirstName(const char* value) { m_userFirstNameHasBeenSet = true; m_userFirstName.assign(value); }
    inline UserAccessResultItem& WithUserFirstName(const Aws::String& value) { SetUserFirstName(value); return *this;}
    inline UserAccessResultItem& WithUserFirstName(Aws::String&& value) { SetUserFirstName(std::move(value)); return *this;}
    inline UserAccessResultItem& WithUserFirstName(const char* value) { SetUserFirstName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last name of the user.</p>
     */
    inline const Aws::String& GetUserLastName() const{ return m_userLastName; }
    inline bool UserLastNameHasBeenSet() const { return m_userLastNameHasBeenSet; }
    inline void SetUserLastName(const Aws::String& value) { m_userLastNameHasBeenSet = true; m_userLastName = value; }
    inline void SetUserLastName(Aws::String&& value) { m_userLastNameHasBeenSet = true; m_userLastName = std::move(value); }
    inline void SetUserLastName(const char* value) { m_userLastNameHasBeenSet = true; m_userLastName.assign(value); }
    inline UserAccessResultItem& WithUserLastName(const Aws::String& value) { SetUserLastName(value); return *this;}
    inline UserAccessResultItem& WithUserLastName(Aws::String&& value) { SetUserLastName(std::move(value)); return *this;}
    inline UserAccessResultItem& WithUserLastName(const char* value) { SetUserLastName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the user returned by the application.</p>
     */
    inline const Aws::String& GetUserStatus() const{ return m_userStatus; }
    inline bool UserStatusHasBeenSet() const { return m_userStatusHasBeenSet; }
    inline void SetUserStatus(const Aws::String& value) { m_userStatusHasBeenSet = true; m_userStatus = value; }
    inline void SetUserStatus(Aws::String&& value) { m_userStatusHasBeenSet = true; m_userStatus = std::move(value); }
    inline void SetUserStatus(const char* value) { m_userStatusHasBeenSet = true; m_userStatus.assign(value); }
    inline UserAccessResultItem& WithUserStatus(const Aws::String& value) { SetUserStatus(value); return *this;}
    inline UserAccessResultItem& WithUserStatus(Aws::String&& value) { SetUserStatus(std::move(value)); return *this;}
    inline UserAccessResultItem& WithUserStatus(const char* value) { SetUserStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about an error returned from a user access task.</p>
     */
    inline const TaskError& GetTaskError() const{ return m_taskError; }
    inline bool TaskErrorHasBeenSet() const { return m_taskErrorHasBeenSet; }
    inline void SetTaskError(const TaskError& value) { m_taskErrorHasBeenSet = true; m_taskError = value; }
    inline void SetTaskError(TaskError&& value) { m_taskErrorHasBeenSet = true; m_taskError = std::move(value); }
    inline UserAccessResultItem& WithTaskError(const TaskError& value) { SetTaskError(value); return *this;}
    inline UserAccessResultItem& WithTaskError(TaskError&& value) { SetTaskError(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_app;
    bool m_appHasBeenSet = false;

    Aws::String m_tenantId;
    bool m_tenantIdHasBeenSet = false;

    Aws::String m_tenantDisplayName;
    bool m_tenantDisplayNameHasBeenSet = false;

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    ResultStatus m_resultStatus;
    bool m_resultStatusHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_userFullName;
    bool m_userFullNameHasBeenSet = false;

    Aws::String m_userFirstName;
    bool m_userFirstNameHasBeenSet = false;

    Aws::String m_userLastName;
    bool m_userLastNameHasBeenSet = false;

    Aws::String m_userStatus;
    bool m_userStatusHasBeenSet = false;

    TaskError m_taskError;
    bool m_taskErrorHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
