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


    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetApp() const{ return m_app; }

    /**
     * <p>The name of the application.</p>
     */
    inline bool AppHasBeenSet() const { return m_appHasBeenSet; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApp(const Aws::String& value) { m_appHasBeenSet = true; m_app = value; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApp(Aws::String&& value) { m_appHasBeenSet = true; m_app = std::move(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApp(const char* value) { m_appHasBeenSet = true; m_app.assign(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline UserAccessResultItem& WithApp(const Aws::String& value) { SetApp(value); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline UserAccessResultItem& WithApp(Aws::String&& value) { SetApp(std::move(value)); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline UserAccessResultItem& WithApp(const char* value) { SetApp(value); return *this;}


    /**
     * <p>The ID of the application tenant.</p>
     */
    inline const Aws::String& GetTenantId() const{ return m_tenantId; }

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline void SetTenantId(const Aws::String& value) { m_tenantIdHasBeenSet = true; m_tenantId = value; }

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline void SetTenantId(Aws::String&& value) { m_tenantIdHasBeenSet = true; m_tenantId = std::move(value); }

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline void SetTenantId(const char* value) { m_tenantIdHasBeenSet = true; m_tenantId.assign(value); }

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline UserAccessResultItem& WithTenantId(const Aws::String& value) { SetTenantId(value); return *this;}

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline UserAccessResultItem& WithTenantId(Aws::String&& value) { SetTenantId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline UserAccessResultItem& WithTenantId(const char* value) { SetTenantId(value); return *this;}


    /**
     * <p>The display name of the tenant.</p>
     */
    inline const Aws::String& GetTenantDisplayName() const{ return m_tenantDisplayName; }

    /**
     * <p>The display name of the tenant.</p>
     */
    inline bool TenantDisplayNameHasBeenSet() const { return m_tenantDisplayNameHasBeenSet; }

    /**
     * <p>The display name of the tenant.</p>
     */
    inline void SetTenantDisplayName(const Aws::String& value) { m_tenantDisplayNameHasBeenSet = true; m_tenantDisplayName = value; }

    /**
     * <p>The display name of the tenant.</p>
     */
    inline void SetTenantDisplayName(Aws::String&& value) { m_tenantDisplayNameHasBeenSet = true; m_tenantDisplayName = std::move(value); }

    /**
     * <p>The display name of the tenant.</p>
     */
    inline void SetTenantDisplayName(const char* value) { m_tenantDisplayNameHasBeenSet = true; m_tenantDisplayName.assign(value); }

    /**
     * <p>The display name of the tenant.</p>
     */
    inline UserAccessResultItem& WithTenantDisplayName(const Aws::String& value) { SetTenantDisplayName(value); return *this;}

    /**
     * <p>The display name of the tenant.</p>
     */
    inline UserAccessResultItem& WithTenantDisplayName(Aws::String&& value) { SetTenantDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the tenant.</p>
     */
    inline UserAccessResultItem& WithTenantDisplayName(const char* value) { SetTenantDisplayName(value); return *this;}


    /**
     * <p>The unique ID of the task.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The unique ID of the task.</p>
     */
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }

    /**
     * <p>The unique ID of the task.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p>The unique ID of the task.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }

    /**
     * <p>The unique ID of the task.</p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p>The unique ID of the task.</p>
     */
    inline UserAccessResultItem& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The unique ID of the task.</p>
     */
    inline UserAccessResultItem& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the task.</p>
     */
    inline UserAccessResultItem& WithTaskId(const char* value) { SetTaskId(value); return *this;}


    /**
     * <p>The status of the user access result item.</p> <p>The following states are
     * possible:</p> <ul> <li> <p> <code>IN_PROGRESS</code>: The user access task is in
     * progress.</p> </li> <li> <p> <code>COMPLETED</code>: The user access task
     * completed successfully.</p> </li> <li> <p> <code>FAILED</code>: The user access
     * task failed.</p> </li> <li> <p> <code>EXPIRED</code>: The user access task
     * expired.</p> </li> </ul>
     */
    inline const ResultStatus& GetResultStatus() const{ return m_resultStatus; }

    /**
     * <p>The status of the user access result item.</p> <p>The following states are
     * possible:</p> <ul> <li> <p> <code>IN_PROGRESS</code>: The user access task is in
     * progress.</p> </li> <li> <p> <code>COMPLETED</code>: The user access task
     * completed successfully.</p> </li> <li> <p> <code>FAILED</code>: The user access
     * task failed.</p> </li> <li> <p> <code>EXPIRED</code>: The user access task
     * expired.</p> </li> </ul>
     */
    inline bool ResultStatusHasBeenSet() const { return m_resultStatusHasBeenSet; }

    /**
     * <p>The status of the user access result item.</p> <p>The following states are
     * possible:</p> <ul> <li> <p> <code>IN_PROGRESS</code>: The user access task is in
     * progress.</p> </li> <li> <p> <code>COMPLETED</code>: The user access task
     * completed successfully.</p> </li> <li> <p> <code>FAILED</code>: The user access
     * task failed.</p> </li> <li> <p> <code>EXPIRED</code>: The user access task
     * expired.</p> </li> </ul>
     */
    inline void SetResultStatus(const ResultStatus& value) { m_resultStatusHasBeenSet = true; m_resultStatus = value; }

    /**
     * <p>The status of the user access result item.</p> <p>The following states are
     * possible:</p> <ul> <li> <p> <code>IN_PROGRESS</code>: The user access task is in
     * progress.</p> </li> <li> <p> <code>COMPLETED</code>: The user access task
     * completed successfully.</p> </li> <li> <p> <code>FAILED</code>: The user access
     * task failed.</p> </li> <li> <p> <code>EXPIRED</code>: The user access task
     * expired.</p> </li> </ul>
     */
    inline void SetResultStatus(ResultStatus&& value) { m_resultStatusHasBeenSet = true; m_resultStatus = std::move(value); }

    /**
     * <p>The status of the user access result item.</p> <p>The following states are
     * possible:</p> <ul> <li> <p> <code>IN_PROGRESS</code>: The user access task is in
     * progress.</p> </li> <li> <p> <code>COMPLETED</code>: The user access task
     * completed successfully.</p> </li> <li> <p> <code>FAILED</code>: The user access
     * task failed.</p> </li> <li> <p> <code>EXPIRED</code>: The user access task
     * expired.</p> </li> </ul>
     */
    inline UserAccessResultItem& WithResultStatus(const ResultStatus& value) { SetResultStatus(value); return *this;}

    /**
     * <p>The status of the user access result item.</p> <p>The following states are
     * possible:</p> <ul> <li> <p> <code>IN_PROGRESS</code>: The user access task is in
     * progress.</p> </li> <li> <p> <code>COMPLETED</code>: The user access task
     * completed successfully.</p> </li> <li> <p> <code>FAILED</code>: The user access
     * task failed.</p> </li> <li> <p> <code>EXPIRED</code>: The user access task
     * expired.</p> </li> </ul>
     */
    inline UserAccessResultItem& WithResultStatus(ResultStatus&& value) { SetResultStatus(std::move(value)); return *this;}


    /**
     * <p>The email address of the target user.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email address of the target user.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The email address of the target user.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The email address of the target user.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The email address of the target user.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The email address of the target user.</p>
     */
    inline UserAccessResultItem& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email address of the target user.</p>
     */
    inline UserAccessResultItem& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email address of the target user.</p>
     */
    inline UserAccessResultItem& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>The unique ID of user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The unique ID of user.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The unique ID of user.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The unique ID of user.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The unique ID of user.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The unique ID of user.</p>
     */
    inline UserAccessResultItem& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The unique ID of user.</p>
     */
    inline UserAccessResultItem& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of user.</p>
     */
    inline UserAccessResultItem& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The full name of the user.</p>
     */
    inline const Aws::String& GetUserFullName() const{ return m_userFullName; }

    /**
     * <p>The full name of the user.</p>
     */
    inline bool UserFullNameHasBeenSet() const { return m_userFullNameHasBeenSet; }

    /**
     * <p>The full name of the user.</p>
     */
    inline void SetUserFullName(const Aws::String& value) { m_userFullNameHasBeenSet = true; m_userFullName = value; }

    /**
     * <p>The full name of the user.</p>
     */
    inline void SetUserFullName(Aws::String&& value) { m_userFullNameHasBeenSet = true; m_userFullName = std::move(value); }

    /**
     * <p>The full name of the user.</p>
     */
    inline void SetUserFullName(const char* value) { m_userFullNameHasBeenSet = true; m_userFullName.assign(value); }

    /**
     * <p>The full name of the user.</p>
     */
    inline UserAccessResultItem& WithUserFullName(const Aws::String& value) { SetUserFullName(value); return *this;}

    /**
     * <p>The full name of the user.</p>
     */
    inline UserAccessResultItem& WithUserFullName(Aws::String&& value) { SetUserFullName(std::move(value)); return *this;}

    /**
     * <p>The full name of the user.</p>
     */
    inline UserAccessResultItem& WithUserFullName(const char* value) { SetUserFullName(value); return *this;}


    /**
     * <p>The first name of the user.</p>
     */
    inline const Aws::String& GetUserFirstName() const{ return m_userFirstName; }

    /**
     * <p>The first name of the user.</p>
     */
    inline bool UserFirstNameHasBeenSet() const { return m_userFirstNameHasBeenSet; }

    /**
     * <p>The first name of the user.</p>
     */
    inline void SetUserFirstName(const Aws::String& value) { m_userFirstNameHasBeenSet = true; m_userFirstName = value; }

    /**
     * <p>The first name of the user.</p>
     */
    inline void SetUserFirstName(Aws::String&& value) { m_userFirstNameHasBeenSet = true; m_userFirstName = std::move(value); }

    /**
     * <p>The first name of the user.</p>
     */
    inline void SetUserFirstName(const char* value) { m_userFirstNameHasBeenSet = true; m_userFirstName.assign(value); }

    /**
     * <p>The first name of the user.</p>
     */
    inline UserAccessResultItem& WithUserFirstName(const Aws::String& value) { SetUserFirstName(value); return *this;}

    /**
     * <p>The first name of the user.</p>
     */
    inline UserAccessResultItem& WithUserFirstName(Aws::String&& value) { SetUserFirstName(std::move(value)); return *this;}

    /**
     * <p>The first name of the user.</p>
     */
    inline UserAccessResultItem& WithUserFirstName(const char* value) { SetUserFirstName(value); return *this;}


    /**
     * <p>The last name of the user.</p>
     */
    inline const Aws::String& GetUserLastName() const{ return m_userLastName; }

    /**
     * <p>The last name of the user.</p>
     */
    inline bool UserLastNameHasBeenSet() const { return m_userLastNameHasBeenSet; }

    /**
     * <p>The last name of the user.</p>
     */
    inline void SetUserLastName(const Aws::String& value) { m_userLastNameHasBeenSet = true; m_userLastName = value; }

    /**
     * <p>The last name of the user.</p>
     */
    inline void SetUserLastName(Aws::String&& value) { m_userLastNameHasBeenSet = true; m_userLastName = std::move(value); }

    /**
     * <p>The last name of the user.</p>
     */
    inline void SetUserLastName(const char* value) { m_userLastNameHasBeenSet = true; m_userLastName.assign(value); }

    /**
     * <p>The last name of the user.</p>
     */
    inline UserAccessResultItem& WithUserLastName(const Aws::String& value) { SetUserLastName(value); return *this;}

    /**
     * <p>The last name of the user.</p>
     */
    inline UserAccessResultItem& WithUserLastName(Aws::String&& value) { SetUserLastName(std::move(value)); return *this;}

    /**
     * <p>The last name of the user.</p>
     */
    inline UserAccessResultItem& WithUserLastName(const char* value) { SetUserLastName(value); return *this;}


    /**
     * <p>The status of the user returned by the application.</p>
     */
    inline const Aws::String& GetUserStatus() const{ return m_userStatus; }

    /**
     * <p>The status of the user returned by the application.</p>
     */
    inline bool UserStatusHasBeenSet() const { return m_userStatusHasBeenSet; }

    /**
     * <p>The status of the user returned by the application.</p>
     */
    inline void SetUserStatus(const Aws::String& value) { m_userStatusHasBeenSet = true; m_userStatus = value; }

    /**
     * <p>The status of the user returned by the application.</p>
     */
    inline void SetUserStatus(Aws::String&& value) { m_userStatusHasBeenSet = true; m_userStatus = std::move(value); }

    /**
     * <p>The status of the user returned by the application.</p>
     */
    inline void SetUserStatus(const char* value) { m_userStatusHasBeenSet = true; m_userStatus.assign(value); }

    /**
     * <p>The status of the user returned by the application.</p>
     */
    inline UserAccessResultItem& WithUserStatus(const Aws::String& value) { SetUserStatus(value); return *this;}

    /**
     * <p>The status of the user returned by the application.</p>
     */
    inline UserAccessResultItem& WithUserStatus(Aws::String&& value) { SetUserStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the user returned by the application.</p>
     */
    inline UserAccessResultItem& WithUserStatus(const char* value) { SetUserStatus(value); return *this;}


    /**
     * <p>Contains information about an error returned from a user access task.</p>
     */
    inline const TaskError& GetTaskError() const{ return m_taskError; }

    /**
     * <p>Contains information about an error returned from a user access task.</p>
     */
    inline bool TaskErrorHasBeenSet() const { return m_taskErrorHasBeenSet; }

    /**
     * <p>Contains information about an error returned from a user access task.</p>
     */
    inline void SetTaskError(const TaskError& value) { m_taskErrorHasBeenSet = true; m_taskError = value; }

    /**
     * <p>Contains information about an error returned from a user access task.</p>
     */
    inline void SetTaskError(TaskError&& value) { m_taskErrorHasBeenSet = true; m_taskError = std::move(value); }

    /**
     * <p>Contains information about an error returned from a user access task.</p>
     */
    inline UserAccessResultItem& WithTaskError(const TaskError& value) { SetTaskError(value); return *this;}

    /**
     * <p>Contains information about an error returned from a user access task.</p>
     */
    inline UserAccessResultItem& WithTaskError(TaskError&& value) { SetTaskError(std::move(value)); return *this;}

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
