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
    AWS_CONNECT_API UserData() = default;
    AWS_CONNECT_API UserData(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API UserData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the user for the data that is returned. It contains the
     * <code>resourceId</code> and ARN of the user. </p>
     */
    inline const UserReference& GetUser() const { return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    template<typename UserT = UserReference>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = UserReference>
    UserData& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the routing profile that is assigned to the user.</p>
     */
    inline const RoutingProfileReference& GetRoutingProfile() const { return m_routingProfile; }
    inline bool RoutingProfileHasBeenSet() const { return m_routingProfileHasBeenSet; }
    template<typename RoutingProfileT = RoutingProfileReference>
    void SetRoutingProfile(RoutingProfileT&& value) { m_routingProfileHasBeenSet = true; m_routingProfile = std::forward<RoutingProfileT>(value); }
    template<typename RoutingProfileT = RoutingProfileReference>
    UserData& WithRoutingProfile(RoutingProfileT&& value) { SetRoutingProfile(std::forward<RoutingProfileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the levels of a hierarchy group assigned to a
     * user.</p>
     */
    inline const HierarchyPathReference& GetHierarchyPath() const { return m_hierarchyPath; }
    inline bool HierarchyPathHasBeenSet() const { return m_hierarchyPathHasBeenSet; }
    template<typename HierarchyPathT = HierarchyPathReference>
    void SetHierarchyPath(HierarchyPathT&& value) { m_hierarchyPathHasBeenSet = true; m_hierarchyPath = std::forward<HierarchyPathT>(value); }
    template<typename HierarchyPathT = HierarchyPathReference>
    UserData& WithHierarchyPath(HierarchyPathT&& value) { SetHierarchyPath(std::forward<HierarchyPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the agent that they manually set in their Contact Control Panel
     * (CCP), or that the supervisor manually changes in the real-time metrics
     * report.</p>
     */
    inline const AgentStatusReference& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = AgentStatusReference>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = AgentStatusReference>
    UserData& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of available slots by channel. The key is a channel name. The value is
     * an integer: the available number of slots. </p>
     */
    inline const Aws::Map<Channel, int>& GetAvailableSlotsByChannel() const { return m_availableSlotsByChannel; }
    inline bool AvailableSlotsByChannelHasBeenSet() const { return m_availableSlotsByChannelHasBeenSet; }
    template<typename AvailableSlotsByChannelT = Aws::Map<Channel, int>>
    void SetAvailableSlotsByChannel(AvailableSlotsByChannelT&& value) { m_availableSlotsByChannelHasBeenSet = true; m_availableSlotsByChannel = std::forward<AvailableSlotsByChannelT>(value); }
    template<typename AvailableSlotsByChannelT = Aws::Map<Channel, int>>
    UserData& WithAvailableSlotsByChannel(AvailableSlotsByChannelT&& value) { SetAvailableSlotsByChannel(std::forward<AvailableSlotsByChannelT>(value)); return *this;}
    inline UserData& AddAvailableSlotsByChannel(Channel key, int value) {
      m_availableSlotsByChannelHasBeenSet = true; m_availableSlotsByChannel.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A map of maximum slots by channel. The key is a channel name. The value is an
     * integer: the maximum number of slots. This is calculated from <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_MediaConcurrency.html">MediaConcurrency</a>
     * of the <code>RoutingProfile</code> assigned to the agent. </p>
     */
    inline const Aws::Map<Channel, int>& GetMaxSlotsByChannel() const { return m_maxSlotsByChannel; }
    inline bool MaxSlotsByChannelHasBeenSet() const { return m_maxSlotsByChannelHasBeenSet; }
    template<typename MaxSlotsByChannelT = Aws::Map<Channel, int>>
    void SetMaxSlotsByChannel(MaxSlotsByChannelT&& value) { m_maxSlotsByChannelHasBeenSet = true; m_maxSlotsByChannel = std::forward<MaxSlotsByChannelT>(value); }
    template<typename MaxSlotsByChannelT = Aws::Map<Channel, int>>
    UserData& WithMaxSlotsByChannel(MaxSlotsByChannelT&& value) { SetMaxSlotsByChannel(std::forward<MaxSlotsByChannelT>(value)); return *this;}
    inline UserData& AddMaxSlotsByChannel(Channel key, int value) {
      m_maxSlotsByChannelHasBeenSet = true; m_maxSlotsByChannel.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> A map of active slots by channel. The key is a channel name. The value is an
     * integer: the number of active slots. </p>
     */
    inline const Aws::Map<Channel, int>& GetActiveSlotsByChannel() const { return m_activeSlotsByChannel; }
    inline bool ActiveSlotsByChannelHasBeenSet() const { return m_activeSlotsByChannelHasBeenSet; }
    template<typename ActiveSlotsByChannelT = Aws::Map<Channel, int>>
    void SetActiveSlotsByChannel(ActiveSlotsByChannelT&& value) { m_activeSlotsByChannelHasBeenSet = true; m_activeSlotsByChannel = std::forward<ActiveSlotsByChannelT>(value); }
    template<typename ActiveSlotsByChannelT = Aws::Map<Channel, int>>
    UserData& WithActiveSlotsByChannel(ActiveSlotsByChannelT&& value) { SetActiveSlotsByChannel(std::forward<ActiveSlotsByChannelT>(value)); return *this;}
    inline UserData& AddActiveSlotsByChannel(Channel key, int value) {
      m_activeSlotsByChannelHasBeenSet = true; m_activeSlotsByChannel.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of contact reference information.</p>
     */
    inline const Aws::Vector<AgentContactReference>& GetContacts() const { return m_contacts; }
    inline bool ContactsHasBeenSet() const { return m_contactsHasBeenSet; }
    template<typename ContactsT = Aws::Vector<AgentContactReference>>
    void SetContacts(ContactsT&& value) { m_contactsHasBeenSet = true; m_contacts = std::forward<ContactsT>(value); }
    template<typename ContactsT = Aws::Vector<AgentContactReference>>
    UserData& WithContacts(ContactsT&& value) { SetContacts(std::forward<ContactsT>(value)); return *this;}
    template<typename ContactsT = AgentContactReference>
    UserData& AddContacts(ContactsT&& value) { m_contactsHasBeenSet = true; m_contacts.emplace_back(std::forward<ContactsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Next status of the agent.</p>
     */
    inline const Aws::String& GetNextStatus() const { return m_nextStatus; }
    inline bool NextStatusHasBeenSet() const { return m_nextStatusHasBeenSet; }
    template<typename NextStatusT = Aws::String>
    void SetNextStatus(NextStatusT&& value) { m_nextStatusHasBeenSet = true; m_nextStatus = std::forward<NextStatusT>(value); }
    template<typename NextStatusT = Aws::String>
    UserData& WithNextStatus(NextStatusT&& value) { SetNextStatus(std::forward<NextStatusT>(value)); return *this;}
    ///@}
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
