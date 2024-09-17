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
    AWS_GUARDDUTY_API KubernetesUserDetails();
    AWS_GUARDDUTY_API KubernetesUserDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API KubernetesUserDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The username of the user who called the Kubernetes API.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline KubernetesUserDetails& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline KubernetesUserDetails& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline KubernetesUserDetails& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ID of the user who called the Kubernetes API.</p>
     */
    inline const Aws::String& GetUid() const{ return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    inline void SetUid(const Aws::String& value) { m_uidHasBeenSet = true; m_uid = value; }
    inline void SetUid(Aws::String&& value) { m_uidHasBeenSet = true; m_uid = std::move(value); }
    inline void SetUid(const char* value) { m_uidHasBeenSet = true; m_uid.assign(value); }
    inline KubernetesUserDetails& WithUid(const Aws::String& value) { SetUid(value); return *this;}
    inline KubernetesUserDetails& WithUid(Aws::String&& value) { SetUid(std::move(value)); return *this;}
    inline KubernetesUserDetails& WithUid(const char* value) { SetUid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The groups that include the user who called the Kubernetes API.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const{ return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    inline void SetGroups(const Aws::Vector<Aws::String>& value) { m_groupsHasBeenSet = true; m_groups = value; }
    inline void SetGroups(Aws::Vector<Aws::String>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }
    inline KubernetesUserDetails& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}
    inline KubernetesUserDetails& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(std::move(value)); return *this;}
    inline KubernetesUserDetails& AddGroups(const Aws::String& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }
    inline KubernetesUserDetails& AddGroups(Aws::String&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }
    inline KubernetesUserDetails& AddGroups(const char* value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Entity that assumes the IAM role when Kubernetes RBAC permissions are
     * assigned to that role.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSessionName() const{ return m_sessionName; }
    inline bool SessionNameHasBeenSet() const { return m_sessionNameHasBeenSet; }
    inline void SetSessionName(const Aws::Vector<Aws::String>& value) { m_sessionNameHasBeenSet = true; m_sessionName = value; }
    inline void SetSessionName(Aws::Vector<Aws::String>&& value) { m_sessionNameHasBeenSet = true; m_sessionName = std::move(value); }
    inline KubernetesUserDetails& WithSessionName(const Aws::Vector<Aws::String>& value) { SetSessionName(value); return *this;}
    inline KubernetesUserDetails& WithSessionName(Aws::Vector<Aws::String>&& value) { SetSessionName(std::move(value)); return *this;}
    inline KubernetesUserDetails& AddSessionName(const Aws::String& value) { m_sessionNameHasBeenSet = true; m_sessionName.push_back(value); return *this; }
    inline KubernetesUserDetails& AddSessionName(Aws::String&& value) { m_sessionNameHasBeenSet = true; m_sessionName.push_back(std::move(value)); return *this; }
    inline KubernetesUserDetails& AddSessionName(const char* value) { m_sessionNameHasBeenSet = true; m_sessionName.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the impersonated user.</p>
     */
    inline const ImpersonatedUser& GetImpersonatedUser() const{ return m_impersonatedUser; }
    inline bool ImpersonatedUserHasBeenSet() const { return m_impersonatedUserHasBeenSet; }
    inline void SetImpersonatedUser(const ImpersonatedUser& value) { m_impersonatedUserHasBeenSet = true; m_impersonatedUser = value; }
    inline void SetImpersonatedUser(ImpersonatedUser&& value) { m_impersonatedUserHasBeenSet = true; m_impersonatedUser = std::move(value); }
    inline KubernetesUserDetails& WithImpersonatedUser(const ImpersonatedUser& value) { SetImpersonatedUser(value); return *this;}
    inline KubernetesUserDetails& WithImpersonatedUser(ImpersonatedUser&& value) { SetImpersonatedUser(std::move(value)); return *this;}
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
