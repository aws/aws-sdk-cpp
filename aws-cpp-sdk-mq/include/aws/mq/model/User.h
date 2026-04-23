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
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MQ
{
namespace Model
{

  /**
   * An ActiveMQ user associated with the broker.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/User">AWS API
   * Reference</a></p>
   */
  class AWS_MQ_API User
  {
  public:
    User();
    User(Aws::Utils::Json::JsonView jsonValue);
    User& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Enables access to the the ActiveMQ Web Console for the ActiveMQ user.
     */
    inline bool GetConsoleAccess() const{ return m_consoleAccess; }

    /**
     * Enables access to the the ActiveMQ Web Console for the ActiveMQ user.
     */
    inline bool ConsoleAccessHasBeenSet() const { return m_consoleAccessHasBeenSet; }

    /**
     * Enables access to the the ActiveMQ Web Console for the ActiveMQ user.
     */
    inline void SetConsoleAccess(bool value) { m_consoleAccessHasBeenSet = true; m_consoleAccess = value; }

    /**
     * Enables access to the the ActiveMQ Web Console for the ActiveMQ user.
     */
    inline User& WithConsoleAccess(bool value) { SetConsoleAccess(value); return *this;}


    /**
     * The list of groups (20 maximum) to which the ActiveMQ user belongs. This value
     * can contain only alphanumeric characters, dashes, periods, underscores, and
     * tildes (- . _ ~). This value must be 2-100 characters long.
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const{ return m_groups; }

    /**
     * The list of groups (20 maximum) to which the ActiveMQ user belongs. This value
     * can contain only alphanumeric characters, dashes, periods, underscores, and
     * tildes (- . _ ~). This value must be 2-100 characters long.
     */
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }

    /**
     * The list of groups (20 maximum) to which the ActiveMQ user belongs. This value
     * can contain only alphanumeric characters, dashes, periods, underscores, and
     * tildes (- . _ ~). This value must be 2-100 characters long.
     */
    inline void SetGroups(const Aws::Vector<Aws::String>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * The list of groups (20 maximum) to which the ActiveMQ user belongs. This value
     * can contain only alphanumeric characters, dashes, periods, underscores, and
     * tildes (- . _ ~). This value must be 2-100 characters long.
     */
    inline void SetGroups(Aws::Vector<Aws::String>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }

    /**
     * The list of groups (20 maximum) to which the ActiveMQ user belongs. This value
     * can contain only alphanumeric characters, dashes, periods, underscores, and
     * tildes (- . _ ~). This value must be 2-100 characters long.
     */
    inline User& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}

    /**
     * The list of groups (20 maximum) to which the ActiveMQ user belongs. This value
     * can contain only alphanumeric characters, dashes, periods, underscores, and
     * tildes (- . _ ~). This value must be 2-100 characters long.
     */
    inline User& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * The list of groups (20 maximum) to which the ActiveMQ user belongs. This value
     * can contain only alphanumeric characters, dashes, periods, underscores, and
     * tildes (- . _ ~). This value must be 2-100 characters long.
     */
    inline User& AddGroups(const Aws::String& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * The list of groups (20 maximum) to which the ActiveMQ user belongs. This value
     * can contain only alphanumeric characters, dashes, periods, underscores, and
     * tildes (- . _ ~). This value must be 2-100 characters long.
     */
    inline User& AddGroups(Aws::String&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }

    /**
     * The list of groups (20 maximum) to which the ActiveMQ user belongs. This value
     * can contain only alphanumeric characters, dashes, periods, underscores, and
     * tildes (- . _ ~). This value must be 2-100 characters long.
     */
    inline User& AddGroups(const char* value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }


    /**
     * Required. The password of the ActiveMQ user. This value must be at least 12
     * characters long, must contain at least 4 unique characters, and must not contain
     * commas.
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * Required. The password of the ActiveMQ user. This value must be at least 12
     * characters long, must contain at least 4 unique characters, and must not contain
     * commas.
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * Required. The password of the ActiveMQ user. This value must be at least 12
     * characters long, must contain at least 4 unique characters, and must not contain
     * commas.
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * Required. The password of the ActiveMQ user. This value must be at least 12
     * characters long, must contain at least 4 unique characters, and must not contain
     * commas.
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * Required. The password of the ActiveMQ user. This value must be at least 12
     * characters long, must contain at least 4 unique characters, and must not contain
     * commas.
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * Required. The password of the ActiveMQ user. This value must be at least 12
     * characters long, must contain at least 4 unique characters, and must not contain
     * commas.
     */
    inline User& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * Required. The password of the ActiveMQ user. This value must be at least 12
     * characters long, must contain at least 4 unique characters, and must not contain
     * commas.
     */
    inline User& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * Required. The password of the ActiveMQ user. This value must be at least 12
     * characters long, must contain at least 4 unique characters, and must not contain
     * commas.
     */
    inline User& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.
     */
    inline User& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.
     */
    inline User& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.
     */
    inline User& WithUsername(const char* value) { SetUsername(value); return *this;}

  private:

    bool m_consoleAccess;
    bool m_consoleAccessHasBeenSet;

    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet;

    Aws::String m_password;
    bool m_passwordHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
