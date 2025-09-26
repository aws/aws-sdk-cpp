/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/NameCriteria.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/AgentHierarchyGroups.h>
#include <aws/connect/model/ContactAnalysis.h>
#include <aws/connect/model/SearchableRoutingCriteria.h>
#include <aws/connect/model/SearchContactsAdditionalTimeRange.h>
#include <aws/connect/model/SearchableContactAttributes.h>
#include <aws/connect/model/SearchableSegmentAttributes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/Channel.h>
#include <aws/connect/model/ContactInitiationMethod.h>
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
   * <p>A structure of search criteria to be used to return contacts.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchCriteria">AWS
   * API Reference</a></p>
   */
  class SearchCriteria
  {
  public:
    AWS_CONNECT_API SearchCriteria() = default;
    AWS_CONNECT_API SearchCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the contact.</p>
     */
    inline const NameCriteria& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = NameCriteria>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = NameCriteria>
    SearchCriteria& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of agents who handled the contacts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentIds() const { return m_agentIds; }
    inline bool AgentIdsHasBeenSet() const { return m_agentIdsHasBeenSet; }
    template<typename AgentIdsT = Aws::Vector<Aws::String>>
    void SetAgentIds(AgentIdsT&& value) { m_agentIdsHasBeenSet = true; m_agentIds = std::forward<AgentIdsT>(value); }
    template<typename AgentIdsT = Aws::Vector<Aws::String>>
    SearchCriteria& WithAgentIds(AgentIdsT&& value) { SetAgentIds(std::forward<AgentIdsT>(value)); return *this;}
    template<typename AgentIdsT = Aws::String>
    SearchCriteria& AddAgentIds(AgentIdsT&& value) { m_agentIdsHasBeenSet = true; m_agentIds.emplace_back(std::forward<AgentIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The agent hierarchy groups of the agent at the time of handling the
     * contact.</p>
     */
    inline const AgentHierarchyGroups& GetAgentHierarchyGroups() const { return m_agentHierarchyGroups; }
    inline bool AgentHierarchyGroupsHasBeenSet() const { return m_agentHierarchyGroupsHasBeenSet; }
    template<typename AgentHierarchyGroupsT = AgentHierarchyGroups>
    void SetAgentHierarchyGroups(AgentHierarchyGroupsT&& value) { m_agentHierarchyGroupsHasBeenSet = true; m_agentHierarchyGroups = std::forward<AgentHierarchyGroupsT>(value); }
    template<typename AgentHierarchyGroupsT = AgentHierarchyGroups>
    SearchCriteria& WithAgentHierarchyGroups(AgentHierarchyGroupsT&& value) { SetAgentHierarchyGroups(std::forward<AgentHierarchyGroupsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of channels associated with contacts.</p>
     */
    inline const Aws::Vector<Channel>& GetChannels() const { return m_channels; }
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
    template<typename ChannelsT = Aws::Vector<Channel>>
    void SetChannels(ChannelsT&& value) { m_channelsHasBeenSet = true; m_channels = std::forward<ChannelsT>(value); }
    template<typename ChannelsT = Aws::Vector<Channel>>
    SearchCriteria& WithChannels(ChannelsT&& value) { SetChannels(std::forward<ChannelsT>(value)); return *this;}
    inline SearchCriteria& AddChannels(Channel value) { m_channelsHasBeenSet = true; m_channels.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Search criteria based on analysis outputs from Amazon Connect Contact
     * Lens.</p>
     */
    inline const ContactAnalysis& GetContactAnalysis() const { return m_contactAnalysis; }
    inline bool ContactAnalysisHasBeenSet() const { return m_contactAnalysisHasBeenSet; }
    template<typename ContactAnalysisT = ContactAnalysis>
    void SetContactAnalysis(ContactAnalysisT&& value) { m_contactAnalysisHasBeenSet = true; m_contactAnalysis = std::forward<ContactAnalysisT>(value); }
    template<typename ContactAnalysisT = ContactAnalysis>
    SearchCriteria& WithContactAnalysis(ContactAnalysisT&& value) { SetContactAnalysis(std::forward<ContactAnalysisT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of initiation methods associated with contacts.</p>
     */
    inline const Aws::Vector<ContactInitiationMethod>& GetInitiationMethods() const { return m_initiationMethods; }
    inline bool InitiationMethodsHasBeenSet() const { return m_initiationMethodsHasBeenSet; }
    template<typename InitiationMethodsT = Aws::Vector<ContactInitiationMethod>>
    void SetInitiationMethods(InitiationMethodsT&& value) { m_initiationMethodsHasBeenSet = true; m_initiationMethods = std::forward<InitiationMethodsT>(value); }
    template<typename InitiationMethodsT = Aws::Vector<ContactInitiationMethod>>
    SearchCriteria& WithInitiationMethods(InitiationMethodsT&& value) { SetInitiationMethods(std::forward<InitiationMethodsT>(value)); return *this;}
    inline SearchCriteria& AddInitiationMethods(ContactInitiationMethod value) { m_initiationMethodsHasBeenSet = true; m_initiationMethods.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of queue IDs associated with contacts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueueIds() const { return m_queueIds; }
    inline bool QueueIdsHasBeenSet() const { return m_queueIdsHasBeenSet; }
    template<typename QueueIdsT = Aws::Vector<Aws::String>>
    void SetQueueIds(QueueIdsT&& value) { m_queueIdsHasBeenSet = true; m_queueIds = std::forward<QueueIdsT>(value); }
    template<typename QueueIdsT = Aws::Vector<Aws::String>>
    SearchCriteria& WithQueueIds(QueueIdsT&& value) { SetQueueIds(std::forward<QueueIdsT>(value)); return *this;}
    template<typename QueueIdsT = Aws::String>
    SearchCriteria& AddQueueIds(QueueIdsT&& value) { m_queueIdsHasBeenSet = true; m_queueIds.emplace_back(std::forward<QueueIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Routing criteria for the contact.</p>
     */
    inline const SearchableRoutingCriteria& GetRoutingCriteria() const { return m_routingCriteria; }
    inline bool RoutingCriteriaHasBeenSet() const { return m_routingCriteriaHasBeenSet; }
    template<typename RoutingCriteriaT = SearchableRoutingCriteria>
    void SetRoutingCriteria(RoutingCriteriaT&& value) { m_routingCriteriaHasBeenSet = true; m_routingCriteria = std::forward<RoutingCriteriaT>(value); }
    template<typename RoutingCriteriaT = SearchableRoutingCriteria>
    SearchCriteria& WithRoutingCriteria(RoutingCriteriaT&& value) { SetRoutingCriteria(std::forward<RoutingCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional TimeRange used to filter contacts.</p>
     */
    inline const SearchContactsAdditionalTimeRange& GetAdditionalTimeRange() const { return m_additionalTimeRange; }
    inline bool AdditionalTimeRangeHasBeenSet() const { return m_additionalTimeRangeHasBeenSet; }
    template<typename AdditionalTimeRangeT = SearchContactsAdditionalTimeRange>
    void SetAdditionalTimeRange(AdditionalTimeRangeT&& value) { m_additionalTimeRangeHasBeenSet = true; m_additionalTimeRange = std::forward<AdditionalTimeRangeT>(value); }
    template<typename AdditionalTimeRangeT = SearchContactsAdditionalTimeRange>
    SearchCriteria& WithAdditionalTimeRange(AdditionalTimeRangeT&& value) { SetAdditionalTimeRange(std::forward<AdditionalTimeRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The search criteria based on user-defined contact attributes that have been
     * configured for contact search. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/search-custom-attributes.html">Search
     * by custom contact attributes</a> in the <i>Amazon Connect Administrator
     * Guide</i>.</p>  <p>To use <code>SearchableContactAttributes</code> in
     * a search request, the <code>GetContactAttributes</code> action is required to
     * perform an API request. For more information, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazonconnect.html#amazonconnect-actions-as-permissions">https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazonconnect.html#amazonconnect-actions-as-permissions</a>Actions
     * defined by Amazon Connect.</p> 
     */
    inline const SearchableContactAttributes& GetSearchableContactAttributes() const { return m_searchableContactAttributes; }
    inline bool SearchableContactAttributesHasBeenSet() const { return m_searchableContactAttributesHasBeenSet; }
    template<typename SearchableContactAttributesT = SearchableContactAttributes>
    void SetSearchableContactAttributes(SearchableContactAttributesT&& value) { m_searchableContactAttributesHasBeenSet = true; m_searchableContactAttributes = std::forward<SearchableContactAttributesT>(value); }
    template<typename SearchableContactAttributesT = SearchableContactAttributes>
    SearchCriteria& WithSearchableContactAttributes(SearchableContactAttributesT&& value) { SetSearchableContactAttributes(std::forward<SearchableContactAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The search criteria based on searchable segment attributes of a contact.</p>
     */
    inline const SearchableSegmentAttributes& GetSearchableSegmentAttributes() const { return m_searchableSegmentAttributes; }
    inline bool SearchableSegmentAttributesHasBeenSet() const { return m_searchableSegmentAttributesHasBeenSet; }
    template<typename SearchableSegmentAttributesT = SearchableSegmentAttributes>
    void SetSearchableSegmentAttributes(SearchableSegmentAttributesT&& value) { m_searchableSegmentAttributesHasBeenSet = true; m_searchableSegmentAttributes = std::forward<SearchableSegmentAttributesT>(value); }
    template<typename SearchableSegmentAttributesT = SearchableSegmentAttributes>
    SearchCriteria& WithSearchableSegmentAttributes(SearchableSegmentAttributesT&& value) { SetSearchableSegmentAttributes(std::forward<SearchableSegmentAttributesT>(value)); return *this;}
    ///@}
  private:

    NameCriteria m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_agentIds;
    bool m_agentIdsHasBeenSet = false;

    AgentHierarchyGroups m_agentHierarchyGroups;
    bool m_agentHierarchyGroupsHasBeenSet = false;

    Aws::Vector<Channel> m_channels;
    bool m_channelsHasBeenSet = false;

    ContactAnalysis m_contactAnalysis;
    bool m_contactAnalysisHasBeenSet = false;

    Aws::Vector<ContactInitiationMethod> m_initiationMethods;
    bool m_initiationMethodsHasBeenSet = false;

    Aws::Vector<Aws::String> m_queueIds;
    bool m_queueIdsHasBeenSet = false;

    SearchableRoutingCriteria m_routingCriteria;
    bool m_routingCriteriaHasBeenSet = false;

    SearchContactsAdditionalTimeRange m_additionalTimeRange;
    bool m_additionalTimeRangeHasBeenSet = false;

    SearchableContactAttributes m_searchableContactAttributes;
    bool m_searchableContactAttributesHasBeenSet = false;

    SearchableSegmentAttributes m_searchableSegmentAttributes;
    bool m_searchableSegmentAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
