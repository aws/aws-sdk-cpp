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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API PutRolePermissionsBoundaryRequest : public IAMRequest
  {
  public:
    PutRolePermissionsBoundaryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRolePermissionsBoundary"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name (friendly name, not ARN) of the IAM role for which you want to set
     * the permissions boundary.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The name (friendly name, not ARN) of the IAM role for which you want to set
     * the permissions boundary.</p>
     */
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }

    /**
     * <p>The name (friendly name, not ARN) of the IAM role for which you want to set
     * the permissions boundary.</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The name (friendly name, not ARN) of the IAM role for which you want to set
     * the permissions boundary.</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    /**
     * <p>The name (friendly name, not ARN) of the IAM role for which you want to set
     * the permissions boundary.</p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p>The name (friendly name, not ARN) of the IAM role for which you want to set
     * the permissions boundary.</p>
     */
    inline PutRolePermissionsBoundaryRequest& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The name (friendly name, not ARN) of the IAM role for which you want to set
     * the permissions boundary.</p>
     */
    inline PutRolePermissionsBoundaryRequest& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>The name (friendly name, not ARN) of the IAM role for which you want to set
     * the permissions boundary.</p>
     */
    inline PutRolePermissionsBoundaryRequest& WithRoleName(const char* value) { SetRoleName(value); return *this;}


    /**
     * <p>The ARN of the policy that is used to set the permissions boundary for the
     * role.</p>
     */
    inline const Aws::String& GetPermissionsBoundary() const{ return m_permissionsBoundary; }

    /**
     * <p>The ARN of the policy that is used to set the permissions boundary for the
     * role.</p>
     */
    inline bool PermissionsBoundaryHasBeenSet() const { return m_permissionsBoundaryHasBeenSet; }

    /**
     * <p>The ARN of the policy that is used to set the permissions boundary for the
     * role.</p>
     */
    inline void SetPermissionsBoundary(const Aws::String& value) { m_permissionsBoundaryHasBeenSet = true; m_permissionsBoundary = value; }

    /**
     * <p>The ARN of the policy that is used to set the permissions boundary for the
     * role.</p>
     */
    inline void SetPermissionsBoundary(Aws::String&& value) { m_permissionsBoundaryHasBeenSet = true; m_permissionsBoundary = std::move(value); }

    /**
     * <p>The ARN of the policy that is used to set the permissions boundary for the
     * role.</p>
     */
    inline void SetPermissionsBoundary(const char* value) { m_permissionsBoundaryHasBeenSet = true; m_permissionsBoundary.assign(value); }

    /**
     * <p>The ARN of the policy that is used to set the permissions boundary for the
     * role.</p>
     */
    inline PutRolePermissionsBoundaryRequest& WithPermissionsBoundary(const Aws::String& value) { SetPermissionsBoundary(value); return *this;}

    /**
     * <p>The ARN of the policy that is used to set the permissions boundary for the
     * role.</p>
     */
    inline PutRolePermissionsBoundaryRequest& WithPermissionsBoundary(Aws::String&& value) { SetPermissionsBoundary(std::move(value)); return *this;}

    /**
     * <p>The ARN of the policy that is used to set the permissions boundary for the
     * role.</p>
     */
    inline PutRolePermissionsBoundaryRequest& WithPermissionsBoundary(const char* value) { SetPermissionsBoundary(value); return *this;}

  private:

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet;

    Aws::String m_permissionsBoundary;
    bool m_permissionsBoundaryHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
