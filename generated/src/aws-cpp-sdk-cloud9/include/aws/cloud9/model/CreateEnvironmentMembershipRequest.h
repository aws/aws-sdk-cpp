/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/cloud9/Cloud9Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloud9/model/MemberPermissions.h>
#include <utility>

namespace Aws
{
namespace Cloud9
{
namespace Model
{

  /**
   */
  class CreateEnvironmentMembershipRequest : public Cloud9Request
  {
  public:
    AWS_CLOUD9_API CreateEnvironmentMembershipRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEnvironmentMembership"; }

    AWS_CLOUD9_API Aws::String SerializePayload() const override;

    AWS_CLOUD9_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the environment that contains the environment member you want to
     * add.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The ID of the environment that contains the environment member you want to
     * add.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>The ID of the environment that contains the environment member you want to
     * add.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The ID of the environment that contains the environment member you want to
     * add.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>The ID of the environment that contains the environment member you want to
     * add.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The ID of the environment that contains the environment member you want to
     * add.</p>
     */
    inline CreateEnvironmentMembershipRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The ID of the environment that contains the environment member you want to
     * add.</p>
     */
    inline CreateEnvironmentMembershipRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the environment that contains the environment member you want to
     * add.</p>
     */
    inline CreateEnvironmentMembershipRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the environment member you want to add.</p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment member you want to add.</p>
     */
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment member you want to add.</p>
     */
    inline void SetUserArn(const Aws::String& value) { m_userArnHasBeenSet = true; m_userArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment member you want to add.</p>
     */
    inline void SetUserArn(Aws::String&& value) { m_userArnHasBeenSet = true; m_userArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment member you want to add.</p>
     */
    inline void SetUserArn(const char* value) { m_userArnHasBeenSet = true; m_userArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment member you want to add.</p>
     */
    inline CreateEnvironmentMembershipRequest& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment member you want to add.</p>
     */
    inline CreateEnvironmentMembershipRequest& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment member you want to add.</p>
     */
    inline CreateEnvironmentMembershipRequest& WithUserArn(const char* value) { SetUserArn(value); return *this;}


    /**
     * <p>The type of environment member permissions you want to associate with this
     * environment member. Available values include:</p> <ul> <li> <p>
     * <code>read-only</code>: Has read-only access to the environment.</p> </li> <li>
     * <p> <code>read-write</code>: Has read-write access to the environment.</p> </li>
     * </ul>
     */
    inline const MemberPermissions& GetPermissions() const{ return m_permissions; }

    /**
     * <p>The type of environment member permissions you want to associate with this
     * environment member. Available values include:</p> <ul> <li> <p>
     * <code>read-only</code>: Has read-only access to the environment.</p> </li> <li>
     * <p> <code>read-write</code>: Has read-write access to the environment.</p> </li>
     * </ul>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>The type of environment member permissions you want to associate with this
     * environment member. Available values include:</p> <ul> <li> <p>
     * <code>read-only</code>: Has read-only access to the environment.</p> </li> <li>
     * <p> <code>read-write</code>: Has read-write access to the environment.</p> </li>
     * </ul>
     */
    inline void SetPermissions(const MemberPermissions& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>The type of environment member permissions you want to associate with this
     * environment member. Available values include:</p> <ul> <li> <p>
     * <code>read-only</code>: Has read-only access to the environment.</p> </li> <li>
     * <p> <code>read-write</code>: Has read-write access to the environment.</p> </li>
     * </ul>
     */
    inline void SetPermissions(MemberPermissions&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>The type of environment member permissions you want to associate with this
     * environment member. Available values include:</p> <ul> <li> <p>
     * <code>read-only</code>: Has read-only access to the environment.</p> </li> <li>
     * <p> <code>read-write</code>: Has read-write access to the environment.</p> </li>
     * </ul>
     */
    inline CreateEnvironmentMembershipRequest& WithPermissions(const MemberPermissions& value) { SetPermissions(value); return *this;}

    /**
     * <p>The type of environment member permissions you want to associate with this
     * environment member. Available values include:</p> <ul> <li> <p>
     * <code>read-only</code>: Has read-only access to the environment.</p> </li> <li>
     * <p> <code>read-write</code>: Has read-write access to the environment.</p> </li>
     * </ul>
     */
    inline CreateEnvironmentMembershipRequest& WithPermissions(MemberPermissions&& value) { SetPermissions(std::move(value)); return *this;}

  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_userArn;
    bool m_userArnHasBeenSet = false;

    MemberPermissions m_permissions;
    bool m_permissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
