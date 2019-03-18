/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/EntityState.h>
#include <aws/workmail/model/UserRole.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>The representation of an Amazon WorkMail user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/User">AWS API
   * Reference</a></p>
   */
  class AWS_WORKMAIL_API User
  {
  public:
    User();
    User(Aws::Utils::Json::JsonView jsonValue);
    User& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the user.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the user.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the user.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the user.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the user.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the user.</p>
     */
    inline User& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the user.</p>
     */
    inline User& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user.</p>
     */
    inline User& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The email of the user.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email of the user.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The email of the user.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The email of the user.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The email of the user.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The email of the user.</p>
     */
    inline User& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email of the user.</p>
     */
    inline User& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email of the user.</p>
     */
    inline User& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>The name of the user.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the user.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the user.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the user.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the user.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the user.</p>
     */
    inline User& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the user.</p>
     */
    inline User& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the user.</p>
     */
    inline User& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The display name of the user.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the user.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name of the user.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name of the user.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name of the user.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name of the user.</p>
     */
    inline User& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the user.</p>
     */
    inline User& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the user.</p>
     */
    inline User& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The state of the user, which can be ENABLED, DISABLED, or DELETED.</p>
     */
    inline const EntityState& GetState() const{ return m_state; }

    /**
     * <p>The state of the user, which can be ENABLED, DISABLED, or DELETED.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the user, which can be ENABLED, DISABLED, or DELETED.</p>
     */
    inline void SetState(const EntityState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the user, which can be ENABLED, DISABLED, or DELETED.</p>
     */
    inline void SetState(EntityState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the user, which can be ENABLED, DISABLED, or DELETED.</p>
     */
    inline User& WithState(const EntityState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the user, which can be ENABLED, DISABLED, or DELETED.</p>
     */
    inline User& WithState(EntityState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The role of the user.</p>
     */
    inline const UserRole& GetUserRole() const{ return m_userRole; }

    /**
     * <p>The role of the user.</p>
     */
    inline bool UserRoleHasBeenSet() const { return m_userRoleHasBeenSet; }

    /**
     * <p>The role of the user.</p>
     */
    inline void SetUserRole(const UserRole& value) { m_userRoleHasBeenSet = true; m_userRole = value; }

    /**
     * <p>The role of the user.</p>
     */
    inline void SetUserRole(UserRole&& value) { m_userRoleHasBeenSet = true; m_userRole = std::move(value); }

    /**
     * <p>The role of the user.</p>
     */
    inline User& WithUserRole(const UserRole& value) { SetUserRole(value); return *this;}

    /**
     * <p>The role of the user.</p>
     */
    inline User& WithUserRole(UserRole&& value) { SetUserRole(std::move(value)); return *this;}


    /**
     * <p>The date indicating when the user was enabled for Amazon WorkMail use.</p>
     */
    inline const Aws::Utils::DateTime& GetEnabledDate() const{ return m_enabledDate; }

    /**
     * <p>The date indicating when the user was enabled for Amazon WorkMail use.</p>
     */
    inline bool EnabledDateHasBeenSet() const { return m_enabledDateHasBeenSet; }

    /**
     * <p>The date indicating when the user was enabled for Amazon WorkMail use.</p>
     */
    inline void SetEnabledDate(const Aws::Utils::DateTime& value) { m_enabledDateHasBeenSet = true; m_enabledDate = value; }

    /**
     * <p>The date indicating when the user was enabled for Amazon WorkMail use.</p>
     */
    inline void SetEnabledDate(Aws::Utils::DateTime&& value) { m_enabledDateHasBeenSet = true; m_enabledDate = std::move(value); }

    /**
     * <p>The date indicating when the user was enabled for Amazon WorkMail use.</p>
     */
    inline User& WithEnabledDate(const Aws::Utils::DateTime& value) { SetEnabledDate(value); return *this;}

    /**
     * <p>The date indicating when the user was enabled for Amazon WorkMail use.</p>
     */
    inline User& WithEnabledDate(Aws::Utils::DateTime&& value) { SetEnabledDate(std::move(value)); return *this;}


    /**
     * <p>The date indicating when the user was disabled from Amazon WorkMail use.</p>
     */
    inline const Aws::Utils::DateTime& GetDisabledDate() const{ return m_disabledDate; }

    /**
     * <p>The date indicating when the user was disabled from Amazon WorkMail use.</p>
     */
    inline bool DisabledDateHasBeenSet() const { return m_disabledDateHasBeenSet; }

    /**
     * <p>The date indicating when the user was disabled from Amazon WorkMail use.</p>
     */
    inline void SetDisabledDate(const Aws::Utils::DateTime& value) { m_disabledDateHasBeenSet = true; m_disabledDate = value; }

    /**
     * <p>The date indicating when the user was disabled from Amazon WorkMail use.</p>
     */
    inline void SetDisabledDate(Aws::Utils::DateTime&& value) { m_disabledDateHasBeenSet = true; m_disabledDate = std::move(value); }

    /**
     * <p>The date indicating when the user was disabled from Amazon WorkMail use.</p>
     */
    inline User& WithDisabledDate(const Aws::Utils::DateTime& value) { SetDisabledDate(value); return *this;}

    /**
     * <p>The date indicating when the user was disabled from Amazon WorkMail use.</p>
     */
    inline User& WithDisabledDate(Aws::Utils::DateTime&& value) { SetDisabledDate(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_email;
    bool m_emailHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;

    EntityState m_state;
    bool m_stateHasBeenSet;

    UserRole m_userRole;
    bool m_userRoleHasBeenSet;

    Aws::Utils::DateTime m_enabledDate;
    bool m_enabledDateHasBeenSet;

    Aws::Utils::DateTime m_disabledDate;
    bool m_disabledDateHasBeenSet;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
