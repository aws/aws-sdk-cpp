﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API DeregisterTaskFromMaintenanceWindowRequest : public SSMRequest
  {
  public:
    DeregisterTaskFromMaintenanceWindowRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ID of the Maintenance Window the task should be removed from.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The ID of the Maintenance Window the task should be removed from.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The ID of the Maintenance Window the task should be removed from.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The ID of the Maintenance Window the task should be removed from.</p>
     */
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }

    /**
     * <p>The ID of the Maintenance Window the task should be removed from.</p>
     */
    inline DeregisterTaskFromMaintenanceWindowRequest& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the Maintenance Window the task should be removed from.</p>
     */
    inline DeregisterTaskFromMaintenanceWindowRequest& WithWindowId(Aws::String&& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the Maintenance Window the task should be removed from.</p>
     */
    inline DeregisterTaskFromMaintenanceWindowRequest& WithWindowId(const char* value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the task to remove from the Maintenance Window.</p>
     */
    inline const Aws::String& GetWindowTaskId() const{ return m_windowTaskId; }

    /**
     * <p>The ID of the task to remove from the Maintenance Window.</p>
     */
    inline void SetWindowTaskId(const Aws::String& value) { m_windowTaskIdHasBeenSet = true; m_windowTaskId = value; }

    /**
     * <p>The ID of the task to remove from the Maintenance Window.</p>
     */
    inline void SetWindowTaskId(Aws::String&& value) { m_windowTaskIdHasBeenSet = true; m_windowTaskId = value; }

    /**
     * <p>The ID of the task to remove from the Maintenance Window.</p>
     */
    inline void SetWindowTaskId(const char* value) { m_windowTaskIdHasBeenSet = true; m_windowTaskId.assign(value); }

    /**
     * <p>The ID of the task to remove from the Maintenance Window.</p>
     */
    inline DeregisterTaskFromMaintenanceWindowRequest& WithWindowTaskId(const Aws::String& value) { SetWindowTaskId(value); return *this;}

    /**
     * <p>The ID of the task to remove from the Maintenance Window.</p>
     */
    inline DeregisterTaskFromMaintenanceWindowRequest& WithWindowTaskId(Aws::String&& value) { SetWindowTaskId(value); return *this;}

    /**
     * <p>The ID of the task to remove from the Maintenance Window.</p>
     */
    inline DeregisterTaskFromMaintenanceWindowRequest& WithWindowTaskId(const char* value) { SetWindowTaskId(value); return *this;}

  private:
    Aws::String m_windowId;
    bool m_windowIdHasBeenSet;
    Aws::String m_windowTaskId;
    bool m_windowTaskIdHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
