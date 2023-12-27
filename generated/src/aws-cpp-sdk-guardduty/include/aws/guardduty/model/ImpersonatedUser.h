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
   * <p>Contains information about the impersonated user.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ImpersonatedUser">AWS
   * API Reference</a></p>
   */
  class ImpersonatedUser
  {
  public:
    AWS_GUARDDUTY_API ImpersonatedUser();
    AWS_GUARDDUTY_API ImpersonatedUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ImpersonatedUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the <code>username</code> that was being impersonated.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>Information about the <code>username</code> that was being impersonated.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>Information about the <code>username</code> that was being impersonated.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>Information about the <code>username</code> that was being impersonated.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>Information about the <code>username</code> that was being impersonated.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>Information about the <code>username</code> that was being impersonated.</p>
     */
    inline ImpersonatedUser& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>Information about the <code>username</code> that was being impersonated.</p>
     */
    inline ImpersonatedUser& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>Information about the <code>username</code> that was being impersonated.</p>
     */
    inline ImpersonatedUser& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The <code>group</code> to which the user name belongs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const{ return m_groups; }

    /**
     * <p>The <code>group</code> to which the user name belongs.</p>
     */
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }

    /**
     * <p>The <code>group</code> to which the user name belongs.</p>
     */
    inline void SetGroups(const Aws::Vector<Aws::String>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>The <code>group</code> to which the user name belongs.</p>
     */
    inline void SetGroups(Aws::Vector<Aws::String>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }

    /**
     * <p>The <code>group</code> to which the user name belongs.</p>
     */
    inline ImpersonatedUser& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}

    /**
     * <p>The <code>group</code> to which the user name belongs.</p>
     */
    inline ImpersonatedUser& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>The <code>group</code> to which the user name belongs.</p>
     */
    inline ImpersonatedUser& AddGroups(const Aws::String& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>The <code>group</code> to which the user name belongs.</p>
     */
    inline ImpersonatedUser& AddGroups(Aws::String&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }

    /**
     * <p>The <code>group</code> to which the user name belongs.</p>
     */
    inline ImpersonatedUser& AddGroups(const char* value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
