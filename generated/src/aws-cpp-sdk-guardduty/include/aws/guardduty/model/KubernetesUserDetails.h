/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/ImpersonatedUser.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Details about the Kubernetes user involved in a Kubernetes
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/KubernetesUserDetails">AWS
   * API Reference</a></p>
   */
  class KubernetesUserDetails
  {
  public:
    AWS_GUARDDUTY_API KubernetesUserDetails() = default;
    AWS_GUARDDUTY_API KubernetesUserDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API KubernetesUserDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The username of the user who called the Kubernetes API.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    KubernetesUserDetails& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ID of the user who called the Kubernetes API.</p>
     */
    inline const Aws::String& GetUid() const { return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    template<typename UidT = Aws::String>
    void SetUid(UidT&& value) { m_uidHasBeenSet = true; m_uid = std::forward<UidT>(value); }
    template<typename UidT = Aws::String>
    KubernetesUserDetails& WithUid(UidT&& value) { SetUid(std::forward<UidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The groups that include the user who called the Kubernetes API.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const { return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    template<typename GroupsT = Aws::Vector<Aws::String>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<Aws::String>>
    KubernetesUserDetails& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = Aws::String>
    KubernetesUserDetails& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Entity that assumes the IAM role when Kubernetes RBAC permissions are
     * assigned to that role.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSessionName() const { return m_sessionName; }
    inline bool SessionNameHasBeenSet() const { return m_sessionNameHasBeenSet; }
    template<typename SessionNameT = Aws::Vector<Aws::String>>
    void SetSessionName(SessionNameT&& value) { m_sessionNameHasBeenSet = true; m_sessionName = std::forward<SessionNameT>(value); }
    template<typename SessionNameT = Aws::Vector<Aws::String>>
    KubernetesUserDetails& WithSessionName(SessionNameT&& value) { SetSessionName(std::forward<SessionNameT>(value)); return *this;}
    template<typename SessionNameT = Aws::String>
    KubernetesUserDetails& AddSessionName(SessionNameT&& value) { m_sessionNameHasBeenSet = true; m_sessionName.emplace_back(std::forward<SessionNameT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the impersonated user.</p>
     */
    inline const ImpersonatedUser& GetImpersonatedUser() const { return m_impersonatedUser; }
    inline bool ImpersonatedUserHasBeenSet() const { return m_impersonatedUserHasBeenSet; }
    template<typename ImpersonatedUserT = ImpersonatedUser>
    void SetImpersonatedUser(ImpersonatedUserT&& value) { m_impersonatedUserHasBeenSet = true; m_impersonatedUser = std::forward<ImpersonatedUserT>(value); }
    template<typename ImpersonatedUserT = ImpersonatedUser>
    KubernetesUserDetails& WithImpersonatedUser(ImpersonatedUserT&& value) { SetImpersonatedUser(std::forward<ImpersonatedUserT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_uid;
    bool m_uidHasBeenSet = false;

    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_sessionName;
    bool m_sessionNameHasBeenSet = false;

    ImpersonatedUser m_impersonatedUser;
    bool m_impersonatedUserHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
