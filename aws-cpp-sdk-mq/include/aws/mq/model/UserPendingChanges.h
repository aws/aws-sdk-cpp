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
#include <aws/mq/model/ChangeType.h>
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
   * Returns information about the status of the changes pending for the ActiveMQ
   * user.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/UserPendingChanges">AWS
   * API Reference</a></p>
   */
  class AWS_MQ_API UserPendingChanges
  {
  public:
    UserPendingChanges();
    UserPendingChanges(Aws::Utils::Json::JsonView jsonValue);
    UserPendingChanges& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline UserPendingChanges& WithConsoleAccess(bool value) { SetConsoleAccess(value); return *this;}


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
    inline UserPendingChanges& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}

    /**
     * The list of groups (20 maximum) to which the ActiveMQ user belongs. This value
     * can contain only alphanumeric characters, dashes, periods, underscores, and
     * tildes (- . _ ~). This value must be 2-100 characters long.
     */
    inline UserPendingChanges& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * The list of groups (20 maximum) to which the ActiveMQ user belongs. This value
     * can contain only alphanumeric characters, dashes, periods, underscores, and
     * tildes (- . _ ~). This value must be 2-100 characters long.
     */
    inline UserPendingChanges& AddGroups(const Aws::String& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * The list of groups (20 maximum) to which the ActiveMQ user belongs. This value
     * can contain only alphanumeric characters, dashes, periods, underscores, and
     * tildes (- . _ ~). This value must be 2-100 characters long.
     */
    inline UserPendingChanges& AddGroups(Aws::String&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }

    /**
     * The list of groups (20 maximum) to which the ActiveMQ user belongs. This value
     * can contain only alphanumeric characters, dashes, periods, underscores, and
     * tildes (- . _ ~). This value must be 2-100 characters long.
     */
    inline UserPendingChanges& AddGroups(const char* value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }


    /**
     * Required. The type of change pending for the ActiveMQ user.
     */
    inline const ChangeType& GetPendingChange() const{ return m_pendingChange; }

    /**
     * Required. The type of change pending for the ActiveMQ user.
     */
    inline bool PendingChangeHasBeenSet() const { return m_pendingChangeHasBeenSet; }

    /**
     * Required. The type of change pending for the ActiveMQ user.
     */
    inline void SetPendingChange(const ChangeType& value) { m_pendingChangeHasBeenSet = true; m_pendingChange = value; }

    /**
     * Required. The type of change pending for the ActiveMQ user.
     */
    inline void SetPendingChange(ChangeType&& value) { m_pendingChangeHasBeenSet = true; m_pendingChange = std::move(value); }

    /**
     * Required. The type of change pending for the ActiveMQ user.
     */
    inline UserPendingChanges& WithPendingChange(const ChangeType& value) { SetPendingChange(value); return *this;}

    /**
     * Required. The type of change pending for the ActiveMQ user.
     */
    inline UserPendingChanges& WithPendingChange(ChangeType&& value) { SetPendingChange(std::move(value)); return *this;}

  private:

    bool m_consoleAccess;
    bool m_consoleAccessHasBeenSet;

    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet;

    ChangeType m_pendingChange;
    bool m_pendingChangeHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
