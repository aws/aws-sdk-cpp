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
    AWS_APPFABRIC_API UserAccessResultItem() = default;
    AWS_APPFABRIC_API UserAccessResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API UserAccessResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetApp() const { return m_app; }
    inline bool AppHasBeenSet() const { return m_appHasBeenSet; }
    template<typename AppT = Aws::String>
    void SetApp(AppT&& value) { m_appHasBeenSet = true; m_app = std::forward<AppT>(value); }
    template<typename AppT = Aws::String>
    UserAccessResultItem& WithApp(AppT&& value) { SetApp(std::forward<AppT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the application tenant.</p>
     */
    inline const Aws::String& GetTenantId() const { return m_tenantId; }
    inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }
    template<typename TenantIdT = Aws::String>
    void SetTenantId(TenantIdT&& value) { m_tenantIdHasBeenSet = true; m_tenantId = std::forward<TenantIdT>(value); }
    template<typename TenantIdT = Aws::String>
    UserAccessResultItem& WithTenantId(TenantIdT&& value) { SetTenantId(std::forward<TenantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the tenant.</p>
     */
    inline const Aws::String& GetTenantDisplayName() const { return m_tenantDisplayName; }
    inline bool TenantDisplayNameHasBeenSet() const { return m_tenantDisplayNameHasBeenSet; }
    template<typename TenantDisplayNameT = Aws::String>
    void SetTenantDisplayName(TenantDisplayNameT&& value) { m_tenantDisplayNameHasBeenSet = true; m_tenantDisplayName = std::forward<TenantDisplayNameT>(value); }
    template<typename TenantDisplayNameT = Aws::String>
    UserAccessResultItem& WithTenantDisplayName(TenantDisplayNameT&& value) { SetTenantDisplayName(std::forward<TenantDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the task.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    UserAccessResultItem& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
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
    inline ResultStatus GetResultStatus() const { return m_resultStatus; }
    inline bool ResultStatusHasBeenSet() const { return m_resultStatusHasBeenSet; }
    inline void SetResultStatus(ResultStatus value) { m_resultStatusHasBeenSet = true; m_resultStatus = value; }
    inline UserAccessResultItem& WithResultStatus(ResultStatus value) { SetResultStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the target user.</p>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    UserAccessResultItem& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of user.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    UserAccessResultItem& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full name of the user.</p>
     */
    inline const Aws::String& GetUserFullName() const { return m_userFullName; }
    inline bool UserFullNameHasBeenSet() const { return m_userFullNameHasBeenSet; }
    template<typename UserFullNameT = Aws::String>
    void SetUserFullName(UserFullNameT&& value) { m_userFullNameHasBeenSet = true; m_userFullName = std::forward<UserFullNameT>(value); }
    template<typename UserFullNameT = Aws::String>
    UserAccessResultItem& WithUserFullName(UserFullNameT&& value) { SetUserFullName(std::forward<UserFullNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first name of the user.</p>
     */
    inline const Aws::String& GetUserFirstName() const { return m_userFirstName; }
    inline bool UserFirstNameHasBeenSet() const { return m_userFirstNameHasBeenSet; }
    template<typename UserFirstNameT = Aws::String>
    void SetUserFirstName(UserFirstNameT&& value) { m_userFirstNameHasBeenSet = true; m_userFirstName = std::forward<UserFirstNameT>(value); }
    template<typename UserFirstNameT = Aws::String>
    UserAccessResultItem& WithUserFirstName(UserFirstNameT&& value) { SetUserFirstName(std::forward<UserFirstNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last name of the user.</p>
     */
    inline const Aws::String& GetUserLastName() const { return m_userLastName; }
    inline bool UserLastNameHasBeenSet() const { return m_userLastNameHasBeenSet; }
    template<typename UserLastNameT = Aws::String>
    void SetUserLastName(UserLastNameT&& value) { m_userLastNameHasBeenSet = true; m_userLastName = std::forward<UserLastNameT>(value); }
    template<typename UserLastNameT = Aws::String>
    UserAccessResultItem& WithUserLastName(UserLastNameT&& value) { SetUserLastName(std::forward<UserLastNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the user returned by the application.</p>
     */
    inline const Aws::String& GetUserStatus() const { return m_userStatus; }
    inline bool UserStatusHasBeenSet() const { return m_userStatusHasBeenSet; }
    template<typename UserStatusT = Aws::String>
    void SetUserStatus(UserStatusT&& value) { m_userStatusHasBeenSet = true; m_userStatus = std::forward<UserStatusT>(value); }
    template<typename UserStatusT = Aws::String>
    UserAccessResultItem& WithUserStatus(UserStatusT&& value) { SetUserStatus(std::forward<UserStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about an error returned from a user access task.</p>
     */
    inline const TaskError& GetTaskError() const { return m_taskError; }
    inline bool TaskErrorHasBeenSet() const { return m_taskErrorHasBeenSet; }
    template<typename TaskErrorT = TaskError>
    void SetTaskError(TaskErrorT&& value) { m_taskErrorHasBeenSet = true; m_taskError = std::forward<TaskErrorT>(value); }
    template<typename TaskErrorT = TaskError>
    UserAccessResultItem& WithTaskError(TaskErrorT&& value) { SetTaskError(std::forward<TaskErrorT>(value)); return *this;}
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

    ResultStatus m_resultStatus{ResultStatus::NOT_SET};
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
