/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/cloud9/model/Permissions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Cloud9
{
namespace Model
{

  /**
   * <p>Information about an environment member for an Cloud9 development
   * environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/EnvironmentMember">AWS
   * API Reference</a></p>
   */
  class EnvironmentMember
  {
  public:
    AWS_CLOUD9_API EnvironmentMember();
    AWS_CLOUD9_API EnvironmentMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUD9_API EnvironmentMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUD9_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of environment member permissions associated with this environment
     * member. Available values include:</p> <ul> <li> <p> <code>owner</code>: Owns the
     * environment.</p> </li> <li> <p> <code>read-only</code>: Has read-only access to
     * the environment.</p> </li> <li> <p> <code>read-write</code>: Has read-write
     * access to the environment.</p> </li> </ul>
     */
    inline const Permissions& GetPermissions() const{ return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    inline void SetPermissions(const Permissions& value) { m_permissionsHasBeenSet = true; m_permissions = value; }
    inline void SetPermissions(Permissions&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }
    inline EnvironmentMember& WithPermissions(const Permissions& value) { SetPermissions(value); return *this;}
    inline EnvironmentMember& WithPermissions(Permissions&& value) { SetPermissions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ID in Identity and Access Management (IAM) of the environment
     * member.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline EnvironmentMember& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline EnvironmentMember& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline EnvironmentMember& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the environment member.</p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }
    inline void SetUserArn(const Aws::String& value) { m_userArnHasBeenSet = true; m_userArn = value; }
    inline void SetUserArn(Aws::String&& value) { m_userArnHasBeenSet = true; m_userArn = std::move(value); }
    inline void SetUserArn(const char* value) { m_userArnHasBeenSet = true; m_userArn.assign(value); }
    inline EnvironmentMember& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}
    inline EnvironmentMember& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}
    inline EnvironmentMember& WithUserArn(const char* value) { SetUserArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment for the environment member.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline EnvironmentMember& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline EnvironmentMember& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline EnvironmentMember& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, expressed in epoch time format, when the environment member last
     * opened the environment.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccess() const{ return m_lastAccess; }
    inline bool LastAccessHasBeenSet() const { return m_lastAccessHasBeenSet; }
    inline void SetLastAccess(const Aws::Utils::DateTime& value) { m_lastAccessHasBeenSet = true; m_lastAccess = value; }
    inline void SetLastAccess(Aws::Utils::DateTime&& value) { m_lastAccessHasBeenSet = true; m_lastAccess = std::move(value); }
    inline EnvironmentMember& WithLastAccess(const Aws::Utils::DateTime& value) { SetLastAccess(value); return *this;}
    inline EnvironmentMember& WithLastAccess(Aws::Utils::DateTime&& value) { SetLastAccess(std::move(value)); return *this;}
    ///@}
  private:

    Permissions m_permissions;
    bool m_permissionsHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_userArn;
    bool m_userArnHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastAccess;
    bool m_lastAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
