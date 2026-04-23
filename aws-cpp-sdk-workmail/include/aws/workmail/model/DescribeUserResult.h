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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkMail
{
namespace Model
{
  class AWS_WORKMAIL_API DescribeUserResult
  {
  public:
    DescribeUserResult();
    DescribeUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier for the described user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The identifier for the described user.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userId = value; }

    /**
     * <p>The identifier for the described user.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userId = std::move(value); }

    /**
     * <p>The identifier for the described user.</p>
     */
    inline void SetUserId(const char* value) { m_userId.assign(value); }

    /**
     * <p>The identifier for the described user.</p>
     */
    inline DescribeUserResult& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The identifier for the described user.</p>
     */
    inline DescribeUserResult& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the described user.</p>
     */
    inline DescribeUserResult& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The name for the user.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the user.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name for the user.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name for the user.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name for the user.</p>
     */
    inline DescribeUserResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the user.</p>
     */
    inline DescribeUserResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the user.</p>
     */
    inline DescribeUserResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The email of the user.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email of the user.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_email = value; }

    /**
     * <p>The email of the user.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_email = std::move(value); }

    /**
     * <p>The email of the user.</p>
     */
    inline void SetEmail(const char* value) { m_email.assign(value); }

    /**
     * <p>The email of the user.</p>
     */
    inline DescribeUserResult& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email of the user.</p>
     */
    inline DescribeUserResult& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email of the user.</p>
     */
    inline DescribeUserResult& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>The display name of the user.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the user.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }

    /**
     * <p>The display name of the user.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }

    /**
     * <p>The display name of the user.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }

    /**
     * <p>The display name of the user.</p>
     */
    inline DescribeUserResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the user.</p>
     */
    inline DescribeUserResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the user.</p>
     */
    inline DescribeUserResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The state of a user: enabled (registered to Amazon WorkMail) or disabled
     * (deregistered or never registered to WorkMail).</p>
     */
    inline const EntityState& GetState() const{ return m_state; }

    /**
     * <p>The state of a user: enabled (registered to Amazon WorkMail) or disabled
     * (deregistered or never registered to WorkMail).</p>
     */
    inline void SetState(const EntityState& value) { m_state = value; }

    /**
     * <p>The state of a user: enabled (registered to Amazon WorkMail) or disabled
     * (deregistered or never registered to WorkMail).</p>
     */
    inline void SetState(EntityState&& value) { m_state = std::move(value); }

    /**
     * <p>The state of a user: enabled (registered to Amazon WorkMail) or disabled
     * (deregistered or never registered to WorkMail).</p>
     */
    inline DescribeUserResult& WithState(const EntityState& value) { SetState(value); return *this;}

    /**
     * <p>The state of a user: enabled (registered to Amazon WorkMail) or disabled
     * (deregistered or never registered to WorkMail).</p>
     */
    inline DescribeUserResult& WithState(EntityState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>In certain cases, other entities are modeled as users. If interoperability is
     * enabled, resources are imported into Amazon WorkMail as users. Because different
     * WorkMail organizations rely on different directory types, administrators can
     * distinguish between an unregistered user (account is disabled and has a user
     * role) and the directory administrators. The values are USER, RESOURCE, and
     * SYSTEM_USER.</p>
     */
    inline const UserRole& GetUserRole() const{ return m_userRole; }

    /**
     * <p>In certain cases, other entities are modeled as users. If interoperability is
     * enabled, resources are imported into Amazon WorkMail as users. Because different
     * WorkMail organizations rely on different directory types, administrators can
     * distinguish between an unregistered user (account is disabled and has a user
     * role) and the directory administrators. The values are USER, RESOURCE, and
     * SYSTEM_USER.</p>
     */
    inline void SetUserRole(const UserRole& value) { m_userRole = value; }

    /**
     * <p>In certain cases, other entities are modeled as users. If interoperability is
     * enabled, resources are imported into Amazon WorkMail as users. Because different
     * WorkMail organizations rely on different directory types, administrators can
     * distinguish between an unregistered user (account is disabled and has a user
     * role) and the directory administrators. The values are USER, RESOURCE, and
     * SYSTEM_USER.</p>
     */
    inline void SetUserRole(UserRole&& value) { m_userRole = std::move(value); }

    /**
     * <p>In certain cases, other entities are modeled as users. If interoperability is
     * enabled, resources are imported into Amazon WorkMail as users. Because different
     * WorkMail organizations rely on different directory types, administrators can
     * distinguish between an unregistered user (account is disabled and has a user
     * role) and the directory administrators. The values are USER, RESOURCE, and
     * SYSTEM_USER.</p>
     */
    inline DescribeUserResult& WithUserRole(const UserRole& value) { SetUserRole(value); return *this;}

    /**
     * <p>In certain cases, other entities are modeled as users. If interoperability is
     * enabled, resources are imported into Amazon WorkMail as users. Because different
     * WorkMail organizations rely on different directory types, administrators can
     * distinguish between an unregistered user (account is disabled and has a user
     * role) and the directory administrators. The values are USER, RESOURCE, and
     * SYSTEM_USER.</p>
     */
    inline DescribeUserResult& WithUserRole(UserRole&& value) { SetUserRole(std::move(value)); return *this;}


    /**
     * <p>The date and time at which the user was enabled for Amazon WorkMail usage, in
     * UNIX epoch time format.</p>
     */
    inline const Aws::Utils::DateTime& GetEnabledDate() const{ return m_enabledDate; }

    /**
     * <p>The date and time at which the user was enabled for Amazon WorkMail usage, in
     * UNIX epoch time format.</p>
     */
    inline void SetEnabledDate(const Aws::Utils::DateTime& value) { m_enabledDate = value; }

    /**
     * <p>The date and time at which the user was enabled for Amazon WorkMail usage, in
     * UNIX epoch time format.</p>
     */
    inline void SetEnabledDate(Aws::Utils::DateTime&& value) { m_enabledDate = std::move(value); }

    /**
     * <p>The date and time at which the user was enabled for Amazon WorkMail usage, in
     * UNIX epoch time format.</p>
     */
    inline DescribeUserResult& WithEnabledDate(const Aws::Utils::DateTime& value) { SetEnabledDate(value); return *this;}

    /**
     * <p>The date and time at which the user was enabled for Amazon WorkMail usage, in
     * UNIX epoch time format.</p>
     */
    inline DescribeUserResult& WithEnabledDate(Aws::Utils::DateTime&& value) { SetEnabledDate(std::move(value)); return *this;}


    /**
     * <p>The date and time at which the user was disabled for Amazon WorkMail usage,
     * in UNIX epoch time format.</p>
     */
    inline const Aws::Utils::DateTime& GetDisabledDate() const{ return m_disabledDate; }

    /**
     * <p>The date and time at which the user was disabled for Amazon WorkMail usage,
     * in UNIX epoch time format.</p>
     */
    inline void SetDisabledDate(const Aws::Utils::DateTime& value) { m_disabledDate = value; }

    /**
     * <p>The date and time at which the user was disabled for Amazon WorkMail usage,
     * in UNIX epoch time format.</p>
     */
    inline void SetDisabledDate(Aws::Utils::DateTime&& value) { m_disabledDate = std::move(value); }

    /**
     * <p>The date and time at which the user was disabled for Amazon WorkMail usage,
     * in UNIX epoch time format.</p>
     */
    inline DescribeUserResult& WithDisabledDate(const Aws::Utils::DateTime& value) { SetDisabledDate(value); return *this;}

    /**
     * <p>The date and time at which the user was disabled for Amazon WorkMail usage,
     * in UNIX epoch time format.</p>
     */
    inline DescribeUserResult& WithDisabledDate(Aws::Utils::DateTime&& value) { SetDisabledDate(std::move(value)); return *this;}

  private:

    Aws::String m_userId;

    Aws::String m_name;

    Aws::String m_email;

    Aws::String m_displayName;

    EntityState m_state;

    UserRole m_userRole;

    Aws::Utils::DateTime m_enabledDate;

    Aws::Utils::DateTime m_disabledDate;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
