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
    AWS_CONNECT_API UserDataFilters() = default;
    AWS_CONNECT_API UserDataFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API UserDataFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of up to 100 queues or ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueues() const { return m_queues; }
    inline bool QueuesHasBeenSet() const { return m_queuesHasBeenSet; }
    template<typename QueuesT = Aws::Vector<Aws::String>>
    void SetQueues(QueuesT&& value) { m_queuesHasBeenSet = true; m_queues = std::forward<QueuesT>(value); }
    template<typename QueuesT = Aws::Vector<Aws::String>>
    UserDataFilters& WithQueues(QueuesT&& value) { SetQueues(std::forward<QueuesT>(value)); return *this;}
    template<typename QueuesT = Aws::String>
    UserDataFilters& AddQueues(QueuesT&& value) { m_queuesHasBeenSet = true; m_queues.emplace_back(std::forward<QueuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A filter for the user data based on the contact information that is
     * associated to the user. It contains a list of contact states. </p>
     */
    inline const ContactFilter& GetContactFilter() const { return m_contactFilter; }
    inline bool ContactFilterHasBeenSet() const { return m_contactFilterHasBeenSet; }
    template<typename ContactFilterT = ContactFilter>
    void SetContactFilter(ContactFilterT&& value) { m_contactFilterHasBeenSet = true; m_contactFilter = std::forward<ContactFilterT>(value); }
    template<typename ContactFilterT = ContactFilter>
    UserDataFilters& WithContactFilter(ContactFilterT&& value) { SetContactFilter(std::forward<ContactFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to 100 routing profile IDs or ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRoutingProfiles() const { return m_routingProfiles; }
    inline bool RoutingProfilesHasBeenSet() const { return m_routingProfilesHasBeenSet; }
    template<typename RoutingProfilesT = Aws::Vector<Aws::String>>
    void SetRoutingProfiles(RoutingProfilesT&& value) { m_routingProfilesHasBeenSet = true; m_routingProfiles = std::forward<RoutingProfilesT>(value); }
    template<typename RoutingProfilesT = Aws::Vector<Aws::String>>
    UserDataFilters& WithRoutingProfiles(RoutingProfilesT&& value) { SetRoutingProfiles(std::forward<RoutingProfilesT>(value)); return *this;}
    template<typename RoutingProfilesT = Aws::String>
    UserDataFilters& AddRoutingProfiles(RoutingProfilesT&& value) { m_routingProfilesHasBeenSet = true; m_routingProfiles.emplace_back(std::forward<RoutingProfilesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of up to 100 agent IDs or ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgents() const { return m_agents; }
    inline bool AgentsHasBeenSet() const { return m_agentsHasBeenSet; }
    template<typename AgentsT = Aws::Vector<Aws::String>>
    void SetAgents(AgentsT&& value) { m_agentsHasBeenSet = true; m_agents = std::forward<AgentsT>(value); }
    template<typename AgentsT = Aws::Vector<Aws::String>>
    UserDataFilters& WithAgents(AgentsT&& value) { SetAgents(std::forward<AgentsT>(value)); return *this;}
    template<typename AgentsT = Aws::String>
    UserDataFilters& AddAgents(AgentsT&& value) { m_agentsHasBeenSet = true; m_agents.emplace_back(std::forward<AgentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A UserHierarchyGroup ID or ARN.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserHierarchyGroups() const { return m_userHierarchyGroups; }
    inline bool UserHierarchyGroupsHasBeenSet() const { return m_userHierarchyGroupsHasBeenSet; }
    template<typename UserHierarchyGroupsT = Aws::Vector<Aws::String>>
    void SetUserHierarchyGroups(UserHierarchyGroupsT&& value) { m_userHierarchyGroupsHasBeenSet = true; m_userHierarchyGroups = std::forward<UserHierarchyGroupsT>(value); }
    template<typename UserHierarchyGroupsT = Aws::Vector<Aws::String>>
    UserDataFilters& WithUserHierarchyGroups(UserHierarchyGroupsT&& value) { SetUserHierarchyGroups(std::forward<UserHierarchyGroupsT>(value)); return *this;}
    template<typename UserHierarchyGroupsT = Aws::String>
    UserDataFilters& AddUserHierarchyGroups(UserHierarchyGroupsT&& value) { m_userHierarchyGroupsHasBeenSet = true; m_userHierarchyGroups.emplace_back(std::forward<UserHierarchyGroupsT>(value)); return *this; }
    ///@}
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
