/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/UserReference.h>
#include <aws/connect/model/RoutingProfileReference.h>
#include <aws/connect/model/HierarchyPathReference.h>
#include <aws/connect/model/AgentStatusReference.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/Channel.h>
#include <aws/connect/model/AgentContactReference.h>
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
   * <p>Data for a user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UserData">AWS
   * API Reference</a></p>
   */
  class UserData
  {
  public:
    AWS_CONNECT_API UserData();
    AWS_CONNECT_API UserData(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API UserData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the user for the data that is returned. It contains the
     * <code>resourceId</code> and ARN of the user. </p>
     */
    inline const UserReference& GetUser() const{ return m_user; }

    /**
     * <p>Information about the user for the data that is returned. It contains the
     * <code>resourceId</code> and ARN of the user. </p>
     */
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }

    /**
     * <p>Information about the user for the data that is returned. It contains the
     * <code>resourceId</code> and ARN of the user. </p>
     */
    inline void SetUser(const UserReference& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>Information about the user for the data that is returned. It contains the
     * <code>resourceId</code> and ARN of the user. </p>
     */
    inline void SetUser(UserReference&& value) { m_userHasBeenSet = true; m_user = std::move(value); }

    /**
     * <p>Information about the user for the data that is returned. It contains the
     * <code>resourceId</code> and ARN of the user. </p>
     */
    inline UserData& WithUser(const UserReference& value) { SetUser(value); return *this;}

    /**
     * <p>Information about the user for the data that is returned. It contains the
     * <code>resourceId</code> and ARN of the user. </p>
     */
    inline UserData& WithUser(UserReference&& value) { SetUser(std::move(value)); return *this;}


    /**
     * <p>Information about the routing profile that is assigned to the user.</p>
     */
    inline const RoutingProfileReference& GetRoutingProfile() const{ return m_routingProfile; }

    /**
     * <p>Information about the routing profile that is assigned to the user.</p>
     */
    inline bool RoutingProfileHasBeenSet() const { return m_routingProfileHasBeenSet; }

    /**
     * <p>Information about the routing profile that is assigned to the user.</p>
     */
    inline void SetRoutingProfile(const RoutingProfileReference& value) { m_routingProfileHasBeenSet = true; m_routingProfile = value; }

    /**
     * <p>Information about the routing profile that is assigned to the user.</p>
     */
    inline void SetRoutingProfile(RoutingProfileReference&& value) { m_routingProfileHasBeenSet = true; m_routingProfile = std::move(value); }

    /**
     * <p>Information about the routing profile that is assigned to the user.</p>
     */
    inline UserData& WithRoutingProfile(const RoutingProfileReference& value) { SetRoutingProfile(value); return *this;}

    /**
     * <p>Information about the routing profile that is assigned to the user.</p>
     */
    inline UserData& WithRoutingProfile(RoutingProfileReference&& value) { SetRoutingProfile(std::move(value)); return *this;}


    /**
     * <p>Contains information about the levels of a hierarchy group assigned to a
     * user.</p>
     */
    inline const HierarchyPathReference& GetHierarchyPath() const{ return m_hierarchyPath; }

    /**
     * <p>Contains information about the levels of a hierarchy group assigned to a
     * user.</p>
     */
    inline bool HierarchyPathHasBeenSet() const { return m_hierarchyPathHasBeenSet; }

    /**
     * <p>Contains information about the levels of a hierarchy group assigned to a
     * user.</p>
     */
    inline void SetHierarchyPath(const HierarchyPathReference& value) { m_hierarchyPathHasBeenSet = true; m_hierarchyPath = value; }

    /**
     * <p>Contains information about the levels of a hierarchy group assigned to a
     * user.</p>
     */
    inline void SetHierarchyPath(HierarchyPathReference&& value) { m_hierarchyPathHasBeenSet = true; m_hierarchyPath = std::move(value); }

    /**
     * <p>Contains information about the levels of a hierarchy group assigned to a
     * user.</p>
     */
    inline UserData& WithHierarchyPath(const HierarchyPathReference& value) { SetHierarchyPath(value); return *this;}

    /**
     * <p>Contains information about the levels of a hierarchy group assigned to a
     * user.</p>
     */
    inline UserData& WithHierarchyPath(HierarchyPathReference&& value) { SetHierarchyPath(std::move(value)); return *this;}


    /**
     * <p>The status of the agent that they manually set in their Contact Control Panel
     * (CCP), or that the supervisor manually changes in the real-time metrics
     * report.</p>
     */
    inline const AgentStatusReference& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the agent that they manually set in their Contact Control Panel
     * (CCP), or that the supervisor manually changes in the real-time metrics
     * report.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the agent that they manually set in their Contact Control Panel
     * (CCP), or that the supervisor manually changes in the real-time metrics
     * report.</p>
     */
    inline void SetStatus(const AgentStatusReference& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the agent that they manually set in their Contact Control Panel
     * (CCP), or that the supervisor manually changes in the real-time metrics
     * report.</p>
     */
    inline void SetStatus(AgentStatusReference&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the agent that they manually set in their Contact Control Panel
     * (CCP), or that the supervisor manually changes in the real-time metrics
     * report.</p>
     */
    inline UserData& WithStatus(const AgentStatusReference& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the agent that they manually set in their Contact Control Panel
     * (CCP), or that the supervisor manually changes in the real-time metrics
     * report.</p>
     */
    inline UserData& WithStatus(AgentStatusReference&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A map of available slots by channel. The key is a channel name. The value is
     * an integer: the available number of slots. </p>
     */
    inline const Aws::Map<Channel, int>& GetAvailableSlotsByChannel() const{ return m_availableSlotsByChannel; }

    /**
     * <p>A map of available slots by channel. The key is a channel name. The value is
     * an integer: the available number of slots. </p>
     */
    inline bool AvailableSlotsByChannelHasBeenSet() const { return m_availableSlotsByChannelHasBeenSet; }

    /**
     * <p>A map of available slots by channel. The key is a channel name. The value is
     * an integer: the available number of slots. </p>
     */
    inline void SetAvailableSlotsByChannel(const Aws::Map<Channel, int>& value) { m_availableSlotsByChannelHasBeenSet = true; m_availableSlotsByChannel = value; }

    /**
     * <p>A map of available slots by channel. The key is a channel name. The value is
     * an integer: the available number of slots. </p>
     */
    inline void SetAvailableSlotsByChannel(Aws::Map<Channel, int>&& value) { m_availableSlotsByChannelHasBeenSet = true; m_availableSlotsByChannel = std::move(value); }

    /**
     * <p>A map of available slots by channel. The key is a channel name. The value is
     * an integer: the available number of slots. </p>
     */
    inline UserData& WithAvailableSlotsByChannel(const Aws::Map<Channel, int>& value) { SetAvailableSlotsByChannel(value); return *this;}

    /**
     * <p>A map of available slots by channel. The key is a channel name. The value is
     * an integer: the available number of slots. </p>
     */
    inline UserData& WithAvailableSlotsByChannel(Aws::Map<Channel, int>&& value) { SetAvailableSlotsByChannel(std::move(value)); return *this;}

    /**
     * <p>A map of available slots by channel. The key is a channel name. The value is
     * an integer: the available number of slots. </p>
     */
    inline UserData& AddAvailableSlotsByChannel(const Channel& key, int value) { m_availableSlotsByChannelHasBeenSet = true; m_availableSlotsByChannel.emplace(key, value); return *this; }

    /**
     * <p>A map of available slots by channel. The key is a channel name. The value is
     * an integer: the available number of slots. </p>
     */
    inline UserData& AddAvailableSlotsByChannel(Channel&& key, int value) { m_availableSlotsByChannelHasBeenSet = true; m_availableSlotsByChannel.emplace(std::move(key), value); return *this; }


    /**
     * <p>A map of maximum slots by channel. The key is a channel name. The value is an
     * integer: the maximum number of slots. This is calculated from <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_MediaConcurrency.html">MediaConcurrency</a>
     * of the <code>RoutingProfile</code> assigned to the agent. </p>
     */
    inline const Aws::Map<Channel, int>& GetMaxSlotsByChannel() const{ return m_maxSlotsByChannel; }

    /**
     * <p>A map of maximum slots by channel. The key is a channel name. The value is an
     * integer: the maximum number of slots. This is calculated from <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_MediaConcurrency.html">MediaConcurrency</a>
     * of the <code>RoutingProfile</code> assigned to the agent. </p>
     */
    inline bool MaxSlotsByChannelHasBeenSet() const { return m_maxSlotsByChannelHasBeenSet; }

    /**
     * <p>A map of maximum slots by channel. The key is a channel name. The value is an
     * integer: the maximum number of slots. This is calculated from <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_MediaConcurrency.html">MediaConcurrency</a>
     * of the <code>RoutingProfile</code> assigned to the agent. </p>
     */
    inline void SetMaxSlotsByChannel(const Aws::Map<Channel, int>& value) { m_maxSlotsByChannelHasBeenSet = true; m_maxSlotsByChannel = value; }

    /**
     * <p>A map of maximum slots by channel. The key is a channel name. The value is an
     * integer: the maximum number of slots. This is calculated from <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_MediaConcurrency.html">MediaConcurrency</a>
     * of the <code>RoutingProfile</code> assigned to the agent. </p>
     */
    inline void SetMaxSlotsByChannel(Aws::Map<Channel, int>&& value) { m_maxSlotsByChannelHasBeenSet = true; m_maxSlotsByChannel = std::move(value); }

    /**
     * <p>A map of maximum slots by channel. The key is a channel name. The value is an
     * integer: the maximum number of slots. This is calculated from <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_MediaConcurrency.html">MediaConcurrency</a>
     * of the <code>RoutingProfile</code> assigned to the agent. </p>
     */
    inline UserData& WithMaxSlotsByChannel(const Aws::Map<Channel, int>& value) { SetMaxSlotsByChannel(value); return *this;}

    /**
     * <p>A map of maximum slots by channel. The key is a channel name. The value is an
     * integer: the maximum number of slots. This is calculated from <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_MediaConcurrency.html">MediaConcurrency</a>
     * of the <code>RoutingProfile</code> assigned to the agent. </p>
     */
    inline UserData& WithMaxSlotsByChannel(Aws::Map<Channel, int>&& value) { SetMaxSlotsByChannel(std::move(value)); return *this;}

    /**
     * <p>A map of maximum slots by channel. The key is a channel name. The value is an
     * integer: the maximum number of slots. This is calculated from <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_MediaConcurrency.html">MediaConcurrency</a>
     * of the <code>RoutingProfile</code> assigned to the agent. </p>
     */
    inline UserData& AddMaxSlotsByChannel(const Channel& key, int value) { m_maxSlotsByChannelHasBeenSet = true; m_maxSlotsByChannel.emplace(key, value); return *this; }

    /**
     * <p>A map of maximum slots by channel. The key is a channel name. The value is an
     * integer: the maximum number of slots. This is calculated from <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_MediaConcurrency.html">MediaConcurrency</a>
     * of the <code>RoutingProfile</code> assigned to the agent. </p>
     */
    inline UserData& AddMaxSlotsByChannel(Channel&& key, int value) { m_maxSlotsByChannelHasBeenSet = true; m_maxSlotsByChannel.emplace(std::move(key), value); return *this; }


    /**
     * <p> A map of active slots by channel. The key is a channel name. The value is an
     * integer: the number of active slots. </p>
     */
    inline const Aws::Map<Channel, int>& GetActiveSlotsByChannel() const{ return m_activeSlotsByChannel; }

    /**
     * <p> A map of active slots by channel. The key is a channel name. The value is an
     * integer: the number of active slots. </p>
     */
    inline bool ActiveSlotsByChannelHasBeenSet() const { return m_activeSlotsByChannelHasBeenSet; }

    /**
     * <p> A map of active slots by channel. The key is a channel name. The value is an
     * integer: the number of active slots. </p>
     */
    inline void SetActiveSlotsByChannel(const Aws::Map<Channel, int>& value) { m_activeSlotsByChannelHasBeenSet = true; m_activeSlotsByChannel = value; }

    /**
     * <p> A map of active slots by channel. The key is a channel name. The value is an
     * integer: the number of active slots. </p>
     */
    inline void SetActiveSlotsByChannel(Aws::Map<Channel, int>&& value) { m_activeSlotsByChannelHasBeenSet = true; m_activeSlotsByChannel = std::move(value); }

    /**
     * <p> A map of active slots by channel. The key is a channel name. The value is an
     * integer: the number of active slots. </p>
     */
    inline UserData& WithActiveSlotsByChannel(const Aws::Map<Channel, int>& value) { SetActiveSlotsByChannel(value); return *this;}

    /**
     * <p> A map of active slots by channel. The key is a channel name. The value is an
     * integer: the number of active slots. </p>
     */
    inline UserData& WithActiveSlotsByChannel(Aws::Map<Channel, int>&& value) { SetActiveSlotsByChannel(std::move(value)); return *this;}

    /**
     * <p> A map of active slots by channel. The key is a channel name. The value is an
     * integer: the number of active slots. </p>
     */
    inline UserData& AddActiveSlotsByChannel(const Channel& key, int value) { m_activeSlotsByChannelHasBeenSet = true; m_activeSlotsByChannel.emplace(key, value); return *this; }

    /**
     * <p> A map of active slots by channel. The key is a channel name. The value is an
     * integer: the number of active slots. </p>
     */
    inline UserData& AddActiveSlotsByChannel(Channel&& key, int value) { m_activeSlotsByChannelHasBeenSet = true; m_activeSlotsByChannel.emplace(std::move(key), value); return *this; }


    /**
     * <p>A list of contact reference information.</p>
     */
    inline const Aws::Vector<AgentContactReference>& GetContacts() const{ return m_contacts; }

    /**
     * <p>A list of contact reference information.</p>
     */
    inline bool ContactsHasBeenSet() const { return m_contactsHasBeenSet; }

    /**
     * <p>A list of contact reference information.</p>
     */
    inline void SetContacts(const Aws::Vector<AgentContactReference>& value) { m_contactsHasBeenSet = true; m_contacts = value; }

    /**
     * <p>A list of contact reference information.</p>
     */
    inline void SetContacts(Aws::Vector<AgentContactReference>&& value) { m_contactsHasBeenSet = true; m_contacts = std::move(value); }

    /**
     * <p>A list of contact reference information.</p>
     */
    inline UserData& WithContacts(const Aws::Vector<AgentContactReference>& value) { SetContacts(value); return *this;}

    /**
     * <p>A list of contact reference information.</p>
     */
    inline UserData& WithContacts(Aws::Vector<AgentContactReference>&& value) { SetContacts(std::move(value)); return *this;}

    /**
     * <p>A list of contact reference information.</p>
     */
    inline UserData& AddContacts(const AgentContactReference& value) { m_contactsHasBeenSet = true; m_contacts.push_back(value); return *this; }

    /**
     * <p>A list of contact reference information.</p>
     */
    inline UserData& AddContacts(AgentContactReference&& value) { m_contactsHasBeenSet = true; m_contacts.push_back(std::move(value)); return *this; }


    /**
     * <p>The Next status of the agent.</p>
     */
    inline const Aws::String& GetNextStatus() const{ return m_nextStatus; }

    /**
     * <p>The Next status of the agent.</p>
     */
    inline bool NextStatusHasBeenSet() const { return m_nextStatusHasBeenSet; }

    /**
     * <p>The Next status of the agent.</p>
     */
    inline void SetNextStatus(const Aws::String& value) { m_nextStatusHasBeenSet = true; m_nextStatus = value; }

    /**
     * <p>The Next status of the agent.</p>
     */
    inline void SetNextStatus(Aws::String&& value) { m_nextStatusHasBeenSet = true; m_nextStatus = std::move(value); }

    /**
     * <p>The Next status of the agent.</p>
     */
    inline void SetNextStatus(const char* value) { m_nextStatusHasBeenSet = true; m_nextStatus.assign(value); }

    /**
     * <p>The Next status of the agent.</p>
     */
    inline UserData& WithNextStatus(const Aws::String& value) { SetNextStatus(value); return *this;}

    /**
     * <p>The Next status of the agent.</p>
     */
    inline UserData& WithNextStatus(Aws::String&& value) { SetNextStatus(std::move(value)); return *this;}

    /**
     * <p>The Next status of the agent.</p>
     */
    inline UserData& WithNextStatus(const char* value) { SetNextStatus(value); return *this;}

  private:

    UserReference m_user;
    bool m_userHasBeenSet = false;

    RoutingProfileReference m_routingProfile;
    bool m_routingProfileHasBeenSet = false;

    HierarchyPathReference m_hierarchyPath;
    bool m_hierarchyPathHasBeenSet = false;

    AgentStatusReference m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Channel, int> m_availableSlotsByChannel;
    bool m_availableSlotsByChannelHasBeenSet = false;

    Aws::Map<Channel, int> m_maxSlotsByChannel;
    bool m_maxSlotsByChannelHasBeenSet = false;

    Aws::Map<Channel, int> m_activeSlotsByChannel;
    bool m_activeSlotsByChannelHasBeenSet = false;

    Aws::Vector<AgentContactReference> m_contacts;
    bool m_contactsHasBeenSet = false;

    Aws::String m_nextStatus;
    bool m_nextStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
