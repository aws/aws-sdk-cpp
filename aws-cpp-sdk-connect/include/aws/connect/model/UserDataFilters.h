/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/ContactFilter.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>A filter for the user data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UserDataFilters">AWS
   * API Reference</a></p>
   */
  class UserDataFilters
  {
  public:
    AWS_CONNECT_API UserDataFilters();
    AWS_CONNECT_API UserDataFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API UserDataFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of up to 100 queues or ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueues() const{ return m_queues; }

    /**
     * <p>A list of up to 100 queues or ARNs.</p>
     */
    inline bool QueuesHasBeenSet() const { return m_queuesHasBeenSet; }

    /**
     * <p>A list of up to 100 queues or ARNs.</p>
     */
    inline void SetQueues(const Aws::Vector<Aws::String>& value) { m_queuesHasBeenSet = true; m_queues = value; }

    /**
     * <p>A list of up to 100 queues or ARNs.</p>
     */
    inline void SetQueues(Aws::Vector<Aws::String>&& value) { m_queuesHasBeenSet = true; m_queues = std::move(value); }

    /**
     * <p>A list of up to 100 queues or ARNs.</p>
     */
    inline UserDataFilters& WithQueues(const Aws::Vector<Aws::String>& value) { SetQueues(value); return *this;}

    /**
     * <p>A list of up to 100 queues or ARNs.</p>
     */
    inline UserDataFilters& WithQueues(Aws::Vector<Aws::String>&& value) { SetQueues(std::move(value)); return *this;}

    /**
     * <p>A list of up to 100 queues or ARNs.</p>
     */
    inline UserDataFilters& AddQueues(const Aws::String& value) { m_queuesHasBeenSet = true; m_queues.push_back(value); return *this; }

    /**
     * <p>A list of up to 100 queues or ARNs.</p>
     */
    inline UserDataFilters& AddQueues(Aws::String&& value) { m_queuesHasBeenSet = true; m_queues.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of up to 100 queues or ARNs.</p>
     */
    inline UserDataFilters& AddQueues(const char* value) { m_queuesHasBeenSet = true; m_queues.push_back(value); return *this; }


    /**
     * <p>A filter for the user data based on the contact information that is
     * associated to the user. It contains a list of contact states. </p>
     */
    inline const ContactFilter& GetContactFilter() const{ return m_contactFilter; }

    /**
     * <p>A filter for the user data based on the contact information that is
     * associated to the user. It contains a list of contact states. </p>
     */
    inline bool ContactFilterHasBeenSet() const { return m_contactFilterHasBeenSet; }

    /**
     * <p>A filter for the user data based on the contact information that is
     * associated to the user. It contains a list of contact states. </p>
     */
    inline void SetContactFilter(const ContactFilter& value) { m_contactFilterHasBeenSet = true; m_contactFilter = value; }

    /**
     * <p>A filter for the user data based on the contact information that is
     * associated to the user. It contains a list of contact states. </p>
     */
    inline void SetContactFilter(ContactFilter&& value) { m_contactFilterHasBeenSet = true; m_contactFilter = std::move(value); }

    /**
     * <p>A filter for the user data based on the contact information that is
     * associated to the user. It contains a list of contact states. </p>
     */
    inline UserDataFilters& WithContactFilter(const ContactFilter& value) { SetContactFilter(value); return *this;}

    /**
     * <p>A filter for the user data based on the contact information that is
     * associated to the user. It contains a list of contact states. </p>
     */
    inline UserDataFilters& WithContactFilter(ContactFilter&& value) { SetContactFilter(std::move(value)); return *this;}


    /**
     * <p>A list of up to 100 routing profile IDs or ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRoutingProfiles() const{ return m_routingProfiles; }

    /**
     * <p>A list of up to 100 routing profile IDs or ARNs.</p>
     */
    inline bool RoutingProfilesHasBeenSet() const { return m_routingProfilesHasBeenSet; }

    /**
     * <p>A list of up to 100 routing profile IDs or ARNs.</p>
     */
    inline void SetRoutingProfiles(const Aws::Vector<Aws::String>& value) { m_routingProfilesHasBeenSet = true; m_routingProfiles = value; }

    /**
     * <p>A list of up to 100 routing profile IDs or ARNs.</p>
     */
    inline void SetRoutingProfiles(Aws::Vector<Aws::String>&& value) { m_routingProfilesHasBeenSet = true; m_routingProfiles = std::move(value); }

    /**
     * <p>A list of up to 100 routing profile IDs or ARNs.</p>
     */
    inline UserDataFilters& WithRoutingProfiles(const Aws::Vector<Aws::String>& value) { SetRoutingProfiles(value); return *this;}

    /**
     * <p>A list of up to 100 routing profile IDs or ARNs.</p>
     */
    inline UserDataFilters& WithRoutingProfiles(Aws::Vector<Aws::String>&& value) { SetRoutingProfiles(std::move(value)); return *this;}

    /**
     * <p>A list of up to 100 routing profile IDs or ARNs.</p>
     */
    inline UserDataFilters& AddRoutingProfiles(const Aws::String& value) { m_routingProfilesHasBeenSet = true; m_routingProfiles.push_back(value); return *this; }

    /**
     * <p>A list of up to 100 routing profile IDs or ARNs.</p>
     */
    inline UserDataFilters& AddRoutingProfiles(Aws::String&& value) { m_routingProfilesHasBeenSet = true; m_routingProfiles.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of up to 100 routing profile IDs or ARNs.</p>
     */
    inline UserDataFilters& AddRoutingProfiles(const char* value) { m_routingProfilesHasBeenSet = true; m_routingProfiles.push_back(value); return *this; }


    /**
     * <p>A list of up to 100 agent IDs or ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgents() const{ return m_agents; }

    /**
     * <p>A list of up to 100 agent IDs or ARNs.</p>
     */
    inline bool AgentsHasBeenSet() const { return m_agentsHasBeenSet; }

    /**
     * <p>A list of up to 100 agent IDs or ARNs.</p>
     */
    inline void SetAgents(const Aws::Vector<Aws::String>& value) { m_agentsHasBeenSet = true; m_agents = value; }

    /**
     * <p>A list of up to 100 agent IDs or ARNs.</p>
     */
    inline void SetAgents(Aws::Vector<Aws::String>&& value) { m_agentsHasBeenSet = true; m_agents = std::move(value); }

    /**
     * <p>A list of up to 100 agent IDs or ARNs.</p>
     */
    inline UserDataFilters& WithAgents(const Aws::Vector<Aws::String>& value) { SetAgents(value); return *this;}

    /**
     * <p>A list of up to 100 agent IDs or ARNs.</p>
     */
    inline UserDataFilters& WithAgents(Aws::Vector<Aws::String>&& value) { SetAgents(std::move(value)); return *this;}

    /**
     * <p>A list of up to 100 agent IDs or ARNs.</p>
     */
    inline UserDataFilters& AddAgents(const Aws::String& value) { m_agentsHasBeenSet = true; m_agents.push_back(value); return *this; }

    /**
     * <p>A list of up to 100 agent IDs or ARNs.</p>
     */
    inline UserDataFilters& AddAgents(Aws::String&& value) { m_agentsHasBeenSet = true; m_agents.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of up to 100 agent IDs or ARNs.</p>
     */
    inline UserDataFilters& AddAgents(const char* value) { m_agentsHasBeenSet = true; m_agents.push_back(value); return *this; }


    /**
     * <p>A UserHierarchyGroup ID or ARN.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserHierarchyGroups() const{ return m_userHierarchyGroups; }

    /**
     * <p>A UserHierarchyGroup ID or ARN.</p>
     */
    inline bool UserHierarchyGroupsHasBeenSet() const { return m_userHierarchyGroupsHasBeenSet; }

    /**
     * <p>A UserHierarchyGroup ID or ARN.</p>
     */
    inline void SetUserHierarchyGroups(const Aws::Vector<Aws::String>& value) { m_userHierarchyGroupsHasBeenSet = true; m_userHierarchyGroups = value; }

    /**
     * <p>A UserHierarchyGroup ID or ARN.</p>
     */
    inline void SetUserHierarchyGroups(Aws::Vector<Aws::String>&& value) { m_userHierarchyGroupsHasBeenSet = true; m_userHierarchyGroups = std::move(value); }

    /**
     * <p>A UserHierarchyGroup ID or ARN.</p>
     */
    inline UserDataFilters& WithUserHierarchyGroups(const Aws::Vector<Aws::String>& value) { SetUserHierarchyGroups(value); return *this;}

    /**
     * <p>A UserHierarchyGroup ID or ARN.</p>
     */
    inline UserDataFilters& WithUserHierarchyGroups(Aws::Vector<Aws::String>&& value) { SetUserHierarchyGroups(std::move(value)); return *this;}

    /**
     * <p>A UserHierarchyGroup ID or ARN.</p>
     */
    inline UserDataFilters& AddUserHierarchyGroups(const Aws::String& value) { m_userHierarchyGroupsHasBeenSet = true; m_userHierarchyGroups.push_back(value); return *this; }

    /**
     * <p>A UserHierarchyGroup ID or ARN.</p>
     */
    inline UserDataFilters& AddUserHierarchyGroups(Aws::String&& value) { m_userHierarchyGroupsHasBeenSet = true; m_userHierarchyGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>A UserHierarchyGroup ID or ARN.</p>
     */
    inline UserDataFilters& AddUserHierarchyGroups(const char* value) { m_userHierarchyGroupsHasBeenSet = true; m_userHierarchyGroups.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_queues;
    bool m_queuesHasBeenSet = false;

    ContactFilter m_contactFilter;
    bool m_contactFilterHasBeenSet = false;

    Aws::Vector<Aws::String> m_routingProfiles;
    bool m_routingProfilesHasBeenSet = false;

    Aws::Vector<Aws::String> m_agents;
    bool m_agentsHasBeenSet = false;

    Aws::Vector<Aws::String> m_userHierarchyGroups;
    bool m_userHierarchyGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
