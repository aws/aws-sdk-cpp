/*
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
  class AWS_SSM_API DeregisterTargetFromMaintenanceWindowRequest : public SSMRequest
  {
  public:
    DeregisterTargetFromMaintenanceWindowRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Maintenance Window the target should be removed from.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The ID of the Maintenance Window the target should be removed from.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The ID of the Maintenance Window the target should be removed from.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The ID of the Maintenance Window the target should be removed from.</p>
     */
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }

    /**
     * <p>The ID of the Maintenance Window the target should be removed from.</p>
     */
    inline DeregisterTargetFromMaintenanceWindowRequest& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the Maintenance Window the target should be removed from.</p>
     */
    inline DeregisterTargetFromMaintenanceWindowRequest& WithWindowId(Aws::String&& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the Maintenance Window the target should be removed from.</p>
     */
    inline DeregisterTargetFromMaintenanceWindowRequest& WithWindowId(const char* value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the target definition to remove.</p>
     */
    inline const Aws::String& GetWindowTargetId() const{ return m_windowTargetId; }

    /**
     * <p>The ID of the target definition to remove.</p>
     */
    inline void SetWindowTargetId(const Aws::String& value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId = value; }

    /**
     * <p>The ID of the target definition to remove.</p>
     */
    inline void SetWindowTargetId(Aws::String&& value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId = value; }

    /**
     * <p>The ID of the target definition to remove.</p>
     */
    inline void SetWindowTargetId(const char* value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId.assign(value); }

    /**
     * <p>The ID of the target definition to remove.</p>
     */
    inline DeregisterTargetFromMaintenanceWindowRequest& WithWindowTargetId(const Aws::String& value) { SetWindowTargetId(value); return *this;}

    /**
     * <p>The ID of the target definition to remove.</p>
     */
    inline DeregisterTargetFromMaintenanceWindowRequest& WithWindowTargetId(Aws::String&& value) { SetWindowTargetId(value); return *this;}

    /**
     * <p>The ID of the target definition to remove.</p>
     */
    inline DeregisterTargetFromMaintenanceWindowRequest& WithWindowTargetId(const char* value) { SetWindowTargetId(value); return *this;}

  private:
    Aws::String m_windowId;
    bool m_windowIdHasBeenSet;
    Aws::String m_windowTargetId;
    bool m_windowTargetIdHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
