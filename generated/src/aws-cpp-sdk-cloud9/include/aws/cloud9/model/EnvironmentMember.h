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
    AWS_CLOUD9_API EnvironmentMember() = default;
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
    inline Permissions GetPermissions() const { return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    inline void SetPermissions(Permissions value) { m_permissionsHasBeenSet = true; m_permissions = value; }
    inline EnvironmentMember& WithPermissions(Permissions value) { SetPermissions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ID in Identity and Access Management (IAM) of the environment
     * member.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    EnvironmentMember& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the environment member.</p>
     */
    inline const Aws::String& GetUserArn() const { return m_userArn; }
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }
    template<typename UserArnT = Aws::String>
    void SetUserArn(UserArnT&& value) { m_userArnHasBeenSet = true; m_userArn = std::forward<UserArnT>(value); }
    template<typename UserArnT = Aws::String>
    EnvironmentMember& WithUserArn(UserArnT&& value) { SetUserArn(std::forward<UserArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment for the environment member.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    EnvironmentMember& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, expressed in epoch time format, when the environment member last
     * opened the environment.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccess() const { return m_lastAccess; }
    inline bool LastAccessHasBeenSet() const { return m_lastAccessHasBeenSet; }
    template<typename LastAccessT = Aws::Utils::DateTime>
    void SetLastAccess(LastAccessT&& value) { m_lastAccessHasBeenSet = true; m_lastAccess = std::forward<LastAccessT>(value); }
    template<typename LastAccessT = Aws::Utils::DateTime>
    EnvironmentMember& WithLastAccess(LastAccessT&& value) { SetLastAccess(std::forward<LastAccessT>(value)); return *this;}
    ///@}
  private:

    Permissions m_permissions{Permissions::NOT_SET};
    bool m_permissionsHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_userArn;
    bool m_userArnHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastAccess{};
    bool m_lastAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
