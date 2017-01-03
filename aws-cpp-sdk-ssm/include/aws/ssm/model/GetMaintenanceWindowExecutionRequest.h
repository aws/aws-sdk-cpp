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
  class AWS_SSM_API GetMaintenanceWindowExecutionRequest : public SSMRequest
  {
  public:
    GetMaintenanceWindowExecutionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ID of the Maintenance Window execution that includes the task.</p>
     */
    inline const Aws::String& GetWindowExecutionId() const{ return m_windowExecutionId; }

    /**
     * <p>The ID of the Maintenance Window execution that includes the task.</p>
     */
    inline void SetWindowExecutionId(const Aws::String& value) { m_windowExecutionIdHasBeenSet = true; m_windowExecutionId = value; }

    /**
     * <p>The ID of the Maintenance Window execution that includes the task.</p>
     */
    inline void SetWindowExecutionId(Aws::String&& value) { m_windowExecutionIdHasBeenSet = true; m_windowExecutionId = value; }

    /**
     * <p>The ID of the Maintenance Window execution that includes the task.</p>
     */
    inline void SetWindowExecutionId(const char* value) { m_windowExecutionIdHasBeenSet = true; m_windowExecutionId.assign(value); }

    /**
     * <p>The ID of the Maintenance Window execution that includes the task.</p>
     */
    inline GetMaintenanceWindowExecutionRequest& WithWindowExecutionId(const Aws::String& value) { SetWindowExecutionId(value); return *this;}

    /**
     * <p>The ID of the Maintenance Window execution that includes the task.</p>
     */
    inline GetMaintenanceWindowExecutionRequest& WithWindowExecutionId(Aws::String&& value) { SetWindowExecutionId(value); return *this;}

    /**
     * <p>The ID of the Maintenance Window execution that includes the task.</p>
     */
    inline GetMaintenanceWindowExecutionRequest& WithWindowExecutionId(const char* value) { SetWindowExecutionId(value); return *this;}

  private:
    Aws::String m_windowExecutionId;
    bool m_windowExecutionIdHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
