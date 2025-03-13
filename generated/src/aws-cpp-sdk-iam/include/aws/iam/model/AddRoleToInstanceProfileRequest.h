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
  class AddRoleToInstanceProfileRequest : public IAMRequest
  {
  public:
    AWS_IAM_API AddRoleToInstanceProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddRoleToInstanceProfile"; }

    AWS_IAM_API Aws::String SerializePayload() const override;

  protected:
    AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the instance profile to update.</p> <p>This parameter allows
     * (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters:
     * _+=,.@-</p>
     */
    inline const Aws::String& GetInstanceProfileName() const { return m_instanceProfileName; }
    inline bool InstanceProfileNameHasBeenSet() const { return m_instanceProfileNameHasBeenSet; }
    template<typename InstanceProfileNameT = Aws::String>
    void SetInstanceProfileName(InstanceProfileNameT&& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = std::forward<InstanceProfileNameT>(value); }
    template<typename InstanceProfileNameT = Aws::String>
    AddRoleToInstanceProfileRequest& WithInstanceProfileName(InstanceProfileNameT&& value) { SetInstanceProfileName(std::forward<InstanceProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the role to add.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline const Aws::String& GetRoleName() const { return m_roleName; }
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }
    template<typename RoleNameT = Aws::String>
    void SetRoleName(RoleNameT&& value) { m_roleNameHasBeenSet = true; m_roleName = std::forward<RoleNameT>(value); }
    template<typename RoleNameT = Aws::String>
    AddRoleToInstanceProfileRequest& WithRoleName(RoleNameT&& value) { SetRoleName(std::forward<RoleNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceProfileName;
    bool m_instanceProfileNameHasBeenSet = false;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
