/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    /**
     * <p>The username of the user who called the Kubernetes API.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The username of the user who called the Kubernetes API.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The username of the user who called the Kubernetes API.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The username of the user who called the Kubernetes API.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The username of the user who called the Kubernetes API.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The username of the user who called the Kubernetes API.</p>
     */
    inline KubernetesUserDetails& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The username of the user who called the Kubernetes API.</p>
     */
    inline KubernetesUserDetails& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The username of the user who called the Kubernetes API.</p>
     */
    inline KubernetesUserDetails& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The user ID of the user who called the Kubernetes API.</p>
     */
    inline const Aws::String& GetUid() const{ return m_uid; }

    /**
     * <p>The user ID of the user who called the Kubernetes API.</p>
     */
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }

    /**
     * <p>The user ID of the user who called the Kubernetes API.</p>
     */
    inline void SetUid(const Aws::String& value) { m_uidHasBeenSet = true; m_uid = value; }

    /**
     * <p>The user ID of the user who called the Kubernetes API.</p>
     */
    inline void SetUid(Aws::String&& value) { m_uidHasBeenSet = true; m_uid = std::move(value); }

    /**
     * <p>The user ID of the user who called the Kubernetes API.</p>
     */
    inline void SetUid(const char* value) { m_uidHasBeenSet = true; m_uid.assign(value); }

    /**
     * <p>The user ID of the user who called the Kubernetes API.</p>
     */
    inline KubernetesUserDetails& WithUid(const Aws::String& value) { SetUid(value); return *this;}

    /**
     * <p>The user ID of the user who called the Kubernetes API.</p>
     */
    inline KubernetesUserDetails& WithUid(Aws::String&& value) { SetUid(std::move(value)); return *this;}

    /**
     * <p>The user ID of the user who called the Kubernetes API.</p>
     */
    inline KubernetesUserDetails& WithUid(const char* value) { SetUid(value); return *this;}


    /**
     * <p>The groups that include the user who called the Kubernetes API.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const{ return m_groups; }

    /**
     * <p>The groups that include the user who called the Kubernetes API.</p>
     */
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }

    /**
     * <p>The groups that include the user who called the Kubernetes API.</p>
     */
    inline void SetGroups(const Aws::Vector<Aws::String>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>The groups that include the user who called the Kubernetes API.</p>
     */
    inline void SetGroups(Aws::Vector<Aws::String>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }

    /**
     * <p>The groups that include the user who called the Kubernetes API.</p>
     */
    inline KubernetesUserDetails& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}

    /**
     * <p>The groups that include the user who called the Kubernetes API.</p>
     */
    inline KubernetesUserDetails& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>The groups that include the user who called the Kubernetes API.</p>
     */
    inline KubernetesUserDetails& AddGroups(const Aws::String& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>The groups that include the user who called the Kubernetes API.</p>
     */
    inline KubernetesUserDetails& AddGroups(Aws::String&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }

    /**
     * <p>The groups that include the user who called the Kubernetes API.</p>
     */
    inline KubernetesUserDetails& AddGroups(const char* value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_uid;
    bool m_uidHasBeenSet = false;

    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
