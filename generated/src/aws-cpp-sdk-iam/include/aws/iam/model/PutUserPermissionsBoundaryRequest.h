/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class PutUserPermissionsBoundaryRequest : public IAMRequest
  {
  public:
    AWS_IAM_API PutUserPermissionsBoundaryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutUserPermissionsBoundary"; }

    AWS_IAM_API Aws::String SerializePayload() const override;

  protected:
    AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name (friendly name, not ARN) of the IAM user for which you want to set
     * the permissions boundary.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name (friendly name, not ARN) of the IAM user for which you want to set
     * the permissions boundary.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The name (friendly name, not ARN) of the IAM user for which you want to set
     * the permissions boundary.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name (friendly name, not ARN) of the IAM user for which you want to set
     * the permissions boundary.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The name (friendly name, not ARN) of the IAM user for which you want to set
     * the permissions boundary.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name (friendly name, not ARN) of the IAM user for which you want to set
     * the permissions boundary.</p>
     */
    inline PutUserPermissionsBoundaryRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name (friendly name, not ARN) of the IAM user for which you want to set
     * the permissions boundary.</p>
     */
    inline PutUserPermissionsBoundaryRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The name (friendly name, not ARN) of the IAM user for which you want to set
     * the permissions boundary.</p>
     */
    inline PutUserPermissionsBoundaryRequest& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The ARN of the managed policy that is used to set the permissions boundary
     * for the user.</p> <p>A permissions boundary policy defines the maximum
     * permissions that identity-based policies can grant to an entity, but does not
     * grant permissions. Permissions boundaries do not define the maximum permissions
     * that a resource-based policy can grant to an entity. To learn more, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * boundaries for IAM entities</a> in the <i>IAM User Guide</i>.</p> <p>For more
     * information about policy types, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#access_policy-types">Policy
     * types </a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::String& GetPermissionsBoundary() const{ return m_permissionsBoundary; }

    /**
     * <p>The ARN of the managed policy that is used to set the permissions boundary
     * for the user.</p> <p>A permissions boundary policy defines the maximum
     * permissions that identity-based policies can grant to an entity, but does not
     * grant permissions. Permissions boundaries do not define the maximum permissions
     * that a resource-based policy can grant to an entity. To learn more, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * boundaries for IAM entities</a> in the <i>IAM User Guide</i>.</p> <p>For more
     * information about policy types, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#access_policy-types">Policy
     * types </a> in the <i>IAM User Guide</i>.</p>
     */
    inline bool PermissionsBoundaryHasBeenSet() const { return m_permissionsBoundaryHasBeenSet; }

    /**
     * <p>The ARN of the managed policy that is used to set the permissions boundary
     * for the user.</p> <p>A permissions boundary policy defines the maximum
     * permissions that identity-based policies can grant to an entity, but does not
     * grant permissions. Permissions boundaries do not define the maximum permissions
     * that a resource-based policy can grant to an entity. To learn more, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * boundaries for IAM entities</a> in the <i>IAM User Guide</i>.</p> <p>For more
     * information about policy types, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#access_policy-types">Policy
     * types </a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetPermissionsBoundary(const Aws::String& value) { m_permissionsBoundaryHasBeenSet = true; m_permissionsBoundary = value; }

    /**
     * <p>The ARN of the managed policy that is used to set the permissions boundary
     * for the user.</p> <p>A permissions boundary policy defines the maximum
     * permissions that identity-based policies can grant to an entity, but does not
     * grant permissions. Permissions boundaries do not define the maximum permissions
     * that a resource-based policy can grant to an entity. To learn more, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * boundaries for IAM entities</a> in the <i>IAM User Guide</i>.</p> <p>For more
     * information about policy types, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#access_policy-types">Policy
     * types </a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetPermissionsBoundary(Aws::String&& value) { m_permissionsBoundaryHasBeenSet = true; m_permissionsBoundary = std::move(value); }

    /**
     * <p>The ARN of the managed policy that is used to set the permissions boundary
     * for the user.</p> <p>A permissions boundary policy defines the maximum
     * permissions that identity-based policies can grant to an entity, but does not
     * grant permissions. Permissions boundaries do not define the maximum permissions
     * that a resource-based policy can grant to an entity. To learn more, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * boundaries for IAM entities</a> in the <i>IAM User Guide</i>.</p> <p>For more
     * information about policy types, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#access_policy-types">Policy
     * types </a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetPermissionsBoundary(const char* value) { m_permissionsBoundaryHasBeenSet = true; m_permissionsBoundary.assign(value); }

    /**
     * <p>The ARN of the managed policy that is used to set the permissions boundary
     * for the user.</p> <p>A permissions boundary policy defines the maximum
     * permissions that identity-based policies can grant to an entity, but does not
     * grant permissions. Permissions boundaries do not define the maximum permissions
     * that a resource-based policy can grant to an entity. To learn more, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * boundaries for IAM entities</a> in the <i>IAM User Guide</i>.</p> <p>For more
     * information about policy types, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#access_policy-types">Policy
     * types </a> in the <i>IAM User Guide</i>.</p>
     */
    inline PutUserPermissionsBoundaryRequest& WithPermissionsBoundary(const Aws::String& value) { SetPermissionsBoundary(value); return *this;}

    /**
     * <p>The ARN of the managed policy that is used to set the permissions boundary
     * for the user.</p> <p>A permissions boundary policy defines the maximum
     * permissions that identity-based policies can grant to an entity, but does not
     * grant permissions. Permissions boundaries do not define the maximum permissions
     * that a resource-based policy can grant to an entity. To learn more, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * boundaries for IAM entities</a> in the <i>IAM User Guide</i>.</p> <p>For more
     * information about policy types, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#access_policy-types">Policy
     * types </a> in the <i>IAM User Guide</i>.</p>
     */
    inline PutUserPermissionsBoundaryRequest& WithPermissionsBoundary(Aws::String&& value) { SetPermissionsBoundary(std::move(value)); return *this;}

    /**
     * <p>The ARN of the managed policy that is used to set the permissions boundary
     * for the user.</p> <p>A permissions boundary policy defines the maximum
     * permissions that identity-based policies can grant to an entity, but does not
     * grant permissions. Permissions boundaries do not define the maximum permissions
     * that a resource-based policy can grant to an entity. To learn more, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * boundaries for IAM entities</a> in the <i>IAM User Guide</i>.</p> <p>For more
     * information about policy types, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#access_policy-types">Policy
     * types </a> in the <i>IAM User Guide</i>.</p>
     */
    inline PutUserPermissionsBoundaryRequest& WithPermissionsBoundary(const char* value) { SetPermissionsBoundary(value); return *this;}

  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_permissionsBoundary;
    bool m_permissionsBoundaryHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
