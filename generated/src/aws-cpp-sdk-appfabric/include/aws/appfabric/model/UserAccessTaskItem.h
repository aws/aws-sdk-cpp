/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains information about a user access task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/UserAccessTaskItem">AWS
   * API Reference</a></p>
   */
  class UserAccessTaskItem
  {
  public:
    AWS_APPFABRIC_API UserAccessTaskItem();
    AWS_APPFABRIC_API UserAccessTaskItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API UserAccessTaskItem& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline UserAccessTaskItem& WithApp(const Aws::String& value) { SetApp(value); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline UserAccessTaskItem& WithApp(Aws::String&& value) { SetApp(std::move(value)); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline UserAccessTaskItem& WithApp(const char* value) { SetApp(value); return *this;}


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
    inline UserAccessTaskItem& WithTenantId(const Aws::String& value) { SetTenantId(value); return *this;}

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline UserAccessTaskItem& WithTenantId(Aws::String&& value) { SetTenantId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline UserAccessTaskItem& WithTenantId(const char* value) { SetTenantId(value); return *this;}


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
    inline UserAccessTaskItem& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The unique ID of the task.</p>
     */
    inline UserAccessTaskItem& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the task.</p>
     */
    inline UserAccessTaskItem& WithTaskId(const char* value) { SetTaskId(value); return *this;}


    /**
     * <p>Error from the task, if any.</p>
     */
    inline const TaskError& GetError() const{ return m_error; }

    /**
     * <p>Error from the task, if any.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>Error from the task, if any.</p>
     */
    inline void SetError(const TaskError& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>Error from the task, if any.</p>
     */
    inline void SetError(TaskError&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>Error from the task, if any.</p>
     */
    inline UserAccessTaskItem& WithError(const TaskError& value) { SetError(value); return *this;}

    /**
     * <p>Error from the task, if any.</p>
     */
    inline UserAccessTaskItem& WithError(TaskError&& value) { SetError(std::move(value)); return *this;}

  private:

    Aws::String m_app;
    bool m_appHasBeenSet = false;

    Aws::String m_tenantId;
    bool m_tenantIdHasBeenSet = false;

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    TaskError m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
