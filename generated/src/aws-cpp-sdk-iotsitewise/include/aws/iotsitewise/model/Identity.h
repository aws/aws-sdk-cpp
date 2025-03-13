/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/UserIdentity.h>
#include <aws/iotsitewise/model/GroupIdentity.h>
#include <aws/iotsitewise/model/IAMUserIdentity.h>
#include <aws/iotsitewise/model/IAMRoleIdentity.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains an identity that can access an IoT SiteWise Monitor resource.</p>
   *  <p>Currently, you can't use Amazon Web Services API operations to
   * retrieve IAM Identity Center identity IDs. You can find the IAM Identity Center
   * identity IDs in the URL of user and group pages in the <a
   * href="https://console.aws.amazon.com/singlesignon">IAM Identity Center
   * console</a>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Identity">AWS
   * API Reference</a></p>
   */
  class Identity
  {
  public:
    AWS_IOTSITEWISE_API Identity() = default;
    AWS_IOTSITEWISE_API Identity(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Identity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An IAM Identity Center user identity.</p>
     */
    inline const UserIdentity& GetUser() const { return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    template<typename UserT = UserIdentity>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = UserIdentity>
    Identity& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IAM Identity Center group identity.</p>
     */
    inline const GroupIdentity& GetGroup() const { return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    template<typename GroupT = GroupIdentity>
    void SetGroup(GroupT&& value) { m_groupHasBeenSet = true; m_group = std::forward<GroupT>(value); }
    template<typename GroupT = GroupIdentity>
    Identity& WithGroup(GroupT&& value) { SetGroup(std::forward<GroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IAM user identity.</p>
     */
    inline const IAMUserIdentity& GetIamUser() const { return m_iamUser; }
    inline bool IamUserHasBeenSet() const { return m_iamUserHasBeenSet; }
    template<typename IamUserT = IAMUserIdentity>
    void SetIamUser(IamUserT&& value) { m_iamUserHasBeenSet = true; m_iamUser = std::forward<IamUserT>(value); }
    template<typename IamUserT = IAMUserIdentity>
    Identity& WithIamUser(IamUserT&& value) { SetIamUser(std::forward<IamUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IAM role identity.</p>
     */
    inline const IAMRoleIdentity& GetIamRole() const { return m_iamRole; }
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }
    template<typename IamRoleT = IAMRoleIdentity>
    void SetIamRole(IamRoleT&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::forward<IamRoleT>(value); }
    template<typename IamRoleT = IAMRoleIdentity>
    Identity& WithIamRole(IamRoleT&& value) { SetIamRole(std::forward<IamRoleT>(value)); return *this;}
    ///@}
  private:

    UserIdentity m_user;
    bool m_userHasBeenSet = false;

    GroupIdentity m_group;
    bool m_groupHasBeenSet = false;

    IAMUserIdentity m_iamUser;
    bool m_iamUserHasBeenSet = false;

    IAMRoleIdentity m_iamRole;
    bool m_iamRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
