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
  class AWS_SSM_API UpdateManagedInstanceRoleRequest : public SSMRequest
  {
  public:
    UpdateManagedInstanceRoleRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ID of the managed instance where you want to update the role.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the managed instance where you want to update the role.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the managed instance where you want to update the role.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the managed instance where you want to update the role.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the managed instance where you want to update the role.</p>
     */
    inline UpdateManagedInstanceRoleRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the managed instance where you want to update the role.</p>
     */
    inline UpdateManagedInstanceRoleRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the managed instance where you want to update the role.</p>
     */
    inline UpdateManagedInstanceRoleRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>The IAM role you want to assign or change.</p>
     */
    inline const Aws::String& GetIamRole() const{ return m_iamRole; }

    /**
     * <p>The IAM role you want to assign or change.</p>
     */
    inline void SetIamRole(const Aws::String& value) { m_iamRoleHasBeenSet = true; m_iamRole = value; }

    /**
     * <p>The IAM role you want to assign or change.</p>
     */
    inline void SetIamRole(Aws::String&& value) { m_iamRoleHasBeenSet = true; m_iamRole = value; }

    /**
     * <p>The IAM role you want to assign or change.</p>
     */
    inline void SetIamRole(const char* value) { m_iamRoleHasBeenSet = true; m_iamRole.assign(value); }

    /**
     * <p>The IAM role you want to assign or change.</p>
     */
    inline UpdateManagedInstanceRoleRequest& WithIamRole(const Aws::String& value) { SetIamRole(value); return *this;}

    /**
     * <p>The IAM role you want to assign or change.</p>
     */
    inline UpdateManagedInstanceRoleRequest& WithIamRole(Aws::String&& value) { SetIamRole(value); return *this;}

    /**
     * <p>The IAM role you want to assign or change.</p>
     */
    inline UpdateManagedInstanceRoleRequest& WithIamRole(const char* value) { SetIamRole(value); return *this;}

  private:
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    Aws::String m_iamRole;
    bool m_iamRoleHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
