/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API GetMaintenanceWindowTaskRequest : public SSMRequest
  {
  public:
    GetMaintenanceWindowTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMaintenanceWindowTask"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The maintenance window ID that includes the task to retrieve.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The maintenance window ID that includes the task to retrieve.</p>
     */
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }

    /**
     * <p>The maintenance window ID that includes the task to retrieve.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The maintenance window ID that includes the task to retrieve.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = std::move(value); }

    /**
     * <p>The maintenance window ID that includes the task to retrieve.</p>
     */
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }

    /**
     * <p>The maintenance window ID that includes the task to retrieve.</p>
     */
    inline GetMaintenanceWindowTaskRequest& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The maintenance window ID that includes the task to retrieve.</p>
     */
    inline GetMaintenanceWindowTaskRequest& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}

    /**
     * <p>The maintenance window ID that includes the task to retrieve.</p>
     */
    inline GetMaintenanceWindowTaskRequest& WithWindowId(const char* value) { SetWindowId(value); return *this;}


    /**
     * <p>The maintenance window task ID to retrieve.</p>
     */
    inline const Aws::String& GetWindowTaskId() const{ return m_windowTaskId; }

    /**
     * <p>The maintenance window task ID to retrieve.</p>
     */
    inline bool WindowTaskIdHasBeenSet() const { return m_windowTaskIdHasBeenSet; }

    /**
     * <p>The maintenance window task ID to retrieve.</p>
     */
    inline void SetWindowTaskId(const Aws::String& value) { m_windowTaskIdHasBeenSet = true; m_windowTaskId = value; }

    /**
     * <p>The maintenance window task ID to retrieve.</p>
     */
    inline void SetWindowTaskId(Aws::String&& value) { m_windowTaskIdHasBeenSet = true; m_windowTaskId = std::move(value); }

    /**
     * <p>The maintenance window task ID to retrieve.</p>
     */
    inline void SetWindowTaskId(const char* value) { m_windowTaskIdHasBeenSet = true; m_windowTaskId.assign(value); }

    /**
     * <p>The maintenance window task ID to retrieve.</p>
     */
    inline GetMaintenanceWindowTaskRequest& WithWindowTaskId(const Aws::String& value) { SetWindowTaskId(value); return *this;}

    /**
     * <p>The maintenance window task ID to retrieve.</p>
     */
    inline GetMaintenanceWindowTaskRequest& WithWindowTaskId(Aws::String&& value) { SetWindowTaskId(std::move(value)); return *this;}

    /**
     * <p>The maintenance window task ID to retrieve.</p>
     */
    inline GetMaintenanceWindowTaskRequest& WithWindowTaskId(const char* value) { SetWindowTaskId(value); return *this;}

  private:

    Aws::String m_windowId;
    bool m_windowIdHasBeenSet;

    Aws::String m_windowTaskId;
    bool m_windowTaskIdHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
