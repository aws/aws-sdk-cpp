/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/AgentHierarchyGroups.h>
#include <aws/connect/model/ContactAnalysis.h>
#include <aws/connect/model/SearchableContactAttributes.h>
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
    AWS_CONNECT_API SearchCriteria();
    AWS_CONNECT_API SearchCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifiers of agents who handled the contacts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentIds() const{ return m_agentIds; }

    /**
     * <p>The identifiers of agents who handled the contacts.</p>
     */
    inline bool AgentIdsHasBeenSet() const { return m_agentIdsHasBeenSet; }

    /**
     * <p>The identifiers of agents who handled the contacts.</p>
     */
    inline void SetAgentIds(const Aws::Vector<Aws::String>& value) { m_agentIdsHasBeenSet = true; m_agentIds = value; }

    /**
     * <p>The identifiers of agents who handled the contacts.</p>
     */
    inline void SetAgentIds(Aws::Vector<Aws::String>&& value) { m_agentIdsHasBeenSet = true; m_agentIds = std::move(value); }

    /**
     * <p>The identifiers of agents who handled the contacts.</p>
     */
    inline SearchCriteria& WithAgentIds(const Aws::Vector<Aws::String>& value) { SetAgentIds(value); return *this;}

    /**
     * <p>The identifiers of agents who handled the contacts.</p>
     */
    inline SearchCriteria& WithAgentIds(Aws::Vector<Aws::String>&& value) { SetAgentIds(std::move(value)); return *this;}

    /**
     * <p>The identifiers of agents who handled the contacts.</p>
     */
    inline SearchCriteria& AddAgentIds(const Aws::String& value) { m_agentIdsHasBeenSet = true; m_agentIds.push_back(value); return *this; }

    /**
     * <p>The identifiers of agents who handled the contacts.</p>
     */
    inline SearchCriteria& AddAgentIds(Aws::String&& value) { m_agentIdsHasBeenSet = true; m_agentIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers of agents who handled the contacts.</p>
     */
    inline SearchCriteria& AddAgentIds(const char* value) { m_agentIdsHasBeenSet = true; m_agentIds.push_back(value); return *this; }


    /**
     * <p>The agent hierarchy groups of the agent at the time of handling the
     * contact.</p>
     */
    inline const AgentHierarchyGroups& GetAgentHierarchyGroups() const{ return m_agentHierarchyGroups; }

    /**
     * <p>The agent hierarchy groups of the agent at the time of handling the
     * contact.</p>
     */
    inline bool AgentHierarchyGroupsHasBeenSet() const { return m_agentHierarchyGroupsHasBeenSet; }

    /**
     * <p>The agent hierarchy groups of the agent at the time of handling the
     * contact.</p>
     */
    inline void SetAgentHierarchyGroups(const AgentHierarchyGroups& value) { m_agentHierarchyGroupsHasBeenSet = true; m_agentHierarchyGroups = value; }

    /**
     * <p>The agent hierarchy groups of the agent at the time of handling the
     * contact.</p>
     */
    inline void SetAgentHierarchyGroups(AgentHierarchyGroups&& value) { m_agentHierarchyGroupsHasBeenSet = true; m_agentHierarchyGroups = std::move(value); }

    /**
     * <p>The agent hierarchy groups of the agent at the time of handling the
     * contact.</p>
     */
    inline SearchCriteria& WithAgentHierarchyGroups(const AgentHierarchyGroups& value) { SetAgentHierarchyGroups(value); return *this;}

    /**
     * <p>The agent hierarchy groups of the agent at the time of handling the
     * contact.</p>
     */
    inline SearchCriteria& WithAgentHierarchyGroups(AgentHierarchyGroups&& value) { SetAgentHierarchyGroups(std::move(value)); return *this;}


    /**
     * <p>The list of channels associated with contacts.</p>
     */
    inline const Aws::Vector<Channel>& GetChannels() const{ return m_channels; }

    /**
     * <p>The list of channels associated with contacts.</p>
     */
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }

    /**
     * <p>The list of channels associated with contacts.</p>
     */
    inline void SetChannels(const Aws::Vector<Channel>& value) { m_channelsHasBeenSet = true; m_channels = value; }

    /**
     * <p>The list of channels associated with contacts.</p>
     */
    inline void SetChannels(Aws::Vector<Channel>&& value) { m_channelsHasBeenSet = true; m_channels = std::move(value); }

    /**
     * <p>The list of channels associated with contacts.</p>
     */
    inline SearchCriteria& WithChannels(const Aws::Vector<Channel>& value) { SetChannels(value); return *this;}

    /**
     * <p>The list of channels associated with contacts.</p>
     */
    inline SearchCriteria& WithChannels(Aws::Vector<Channel>&& value) { SetChannels(std::move(value)); return *this;}

    /**
     * <p>The list of channels associated with contacts.</p>
     */
    inline SearchCriteria& AddChannels(const Channel& value) { m_channelsHasBeenSet = true; m_channels.push_back(value); return *this; }

    /**
     * <p>The list of channels associated with contacts.</p>
     */
    inline SearchCriteria& AddChannels(Channel&& value) { m_channelsHasBeenSet = true; m_channels.push_back(std::move(value)); return *this; }


    /**
     * <p>Search criteria based on analysis outputs from Amazon Connect Contact
     * Lens.</p>
     */
    inline const ContactAnalysis& GetContactAnalysis() const{ return m_contactAnalysis; }

    /**
     * <p>Search criteria based on analysis outputs from Amazon Connect Contact
     * Lens.</p>
     */
    inline bool ContactAnalysisHasBeenSet() const { return m_contactAnalysisHasBeenSet; }

    /**
     * <p>Search criteria based on analysis outputs from Amazon Connect Contact
     * Lens.</p>
     */
    inline void SetContactAnalysis(const ContactAnalysis& value) { m_contactAnalysisHasBeenSet = true; m_contactAnalysis = value; }

    /**
     * <p>Search criteria based on analysis outputs from Amazon Connect Contact
     * Lens.</p>
     */
    inline void SetContactAnalysis(ContactAnalysis&& value) { m_contactAnalysisHasBeenSet = true; m_contactAnalysis = std::move(value); }

    /**
     * <p>Search criteria based on analysis outputs from Amazon Connect Contact
     * Lens.</p>
     */
    inline SearchCriteria& WithContactAnalysis(const ContactAnalysis& value) { SetContactAnalysis(value); return *this;}

    /**
     * <p>Search criteria based on analysis outputs from Amazon Connect Contact
     * Lens.</p>
     */
    inline SearchCriteria& WithContactAnalysis(ContactAnalysis&& value) { SetContactAnalysis(std::move(value)); return *this;}


    /**
     * <p>The list of initiation methods associated with contacts.</p>
     */
    inline const Aws::Vector<ContactInitiationMethod>& GetInitiationMethods() const{ return m_initiationMethods; }

    /**
     * <p>The list of initiation methods associated with contacts.</p>
     */
    inline bool InitiationMethodsHasBeenSet() const { return m_initiationMethodsHasBeenSet; }

    /**
     * <p>The list of initiation methods associated with contacts.</p>
     */
    inline void SetInitiationMethods(const Aws::Vector<ContactInitiationMethod>& value) { m_initiationMethodsHasBeenSet = true; m_initiationMethods = value; }

    /**
     * <p>The list of initiation methods associated with contacts.</p>
     */
    inline void SetInitiationMethods(Aws::Vector<ContactInitiationMethod>&& value) { m_initiationMethodsHasBeenSet = true; m_initiationMethods = std::move(value); }

    /**
     * <p>The list of initiation methods associated with contacts.</p>
     */
    inline SearchCriteria& WithInitiationMethods(const Aws::Vector<ContactInitiationMethod>& value) { SetInitiationMethods(value); return *this;}

    /**
     * <p>The list of initiation methods associated with contacts.</p>
     */
    inline SearchCriteria& WithInitiationMethods(Aws::Vector<ContactInitiationMethod>&& value) { SetInitiationMethods(std::move(value)); return *this;}

    /**
     * <p>The list of initiation methods associated with contacts.</p>
     */
    inline SearchCriteria& AddInitiationMethods(const ContactInitiationMethod& value) { m_initiationMethodsHasBeenSet = true; m_initiationMethods.push_back(value); return *this; }

    /**
     * <p>The list of initiation methods associated with contacts.</p>
     */
    inline SearchCriteria& AddInitiationMethods(ContactInitiationMethod&& value) { m_initiationMethodsHasBeenSet = true; m_initiationMethods.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of queue IDs associated with contacts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueueIds() const{ return m_queueIds; }

    /**
     * <p>The list of queue IDs associated with contacts.</p>
     */
    inline bool QueueIdsHasBeenSet() const { return m_queueIdsHasBeenSet; }

    /**
     * <p>The list of queue IDs associated with contacts.</p>
     */
    inline void SetQueueIds(const Aws::Vector<Aws::String>& value) { m_queueIdsHasBeenSet = true; m_queueIds = value; }

    /**
     * <p>The list of queue IDs associated with contacts.</p>
     */
    inline void SetQueueIds(Aws::Vector<Aws::String>&& value) { m_queueIdsHasBeenSet = true; m_queueIds = std::move(value); }

    /**
     * <p>The list of queue IDs associated with contacts.</p>
     */
    inline SearchCriteria& WithQueueIds(const Aws::Vector<Aws::String>& value) { SetQueueIds(value); return *this;}

    /**
     * <p>The list of queue IDs associated with contacts.</p>
     */
    inline SearchCriteria& WithQueueIds(Aws::Vector<Aws::String>&& value) { SetQueueIds(std::move(value)); return *this;}

    /**
     * <p>The list of queue IDs associated with contacts.</p>
     */
    inline SearchCriteria& AddQueueIds(const Aws::String& value) { m_queueIdsHasBeenSet = true; m_queueIds.push_back(value); return *this; }

    /**
     * <p>The list of queue IDs associated with contacts.</p>
     */
    inline SearchCriteria& AddQueueIds(Aws::String&& value) { m_queueIdsHasBeenSet = true; m_queueIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of queue IDs associated with contacts.</p>
     */
    inline SearchCriteria& AddQueueIds(const char* value) { m_queueIdsHasBeenSet = true; m_queueIds.push_back(value); return *this; }


    /**
     * <p>The search criteria based on user-defined contact attributes that have been
     * configured for contact search. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/search-custom-attributes.html">Search
     * by customer contact attributes</a> in the <i>Amazon Connect Administrator
     * Guide</i>.</p>  <p>To use <code>SearchableContactAttributes</code> in
     * a search request, the <code>GetContactAttributes</code> action is required to
     * perform an API request. For more information, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazonconnect.html#amazonconnect-actions-as-permissions">https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazonconnect.html#amazonconnect-actions-as-permissions</a>Actions
     * defined by Amazon Connect.</p> 
     */
    inline const SearchableContactAttributes& GetSearchableContactAttributes() const{ return m_searchableContactAttributes; }

    /**
     * <p>The search criteria based on user-defined contact attributes that have been
     * configured for contact search. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/search-custom-attributes.html">Search
     * by customer contact attributes</a> in the <i>Amazon Connect Administrator
     * Guide</i>.</p>  <p>To use <code>SearchableContactAttributes</code> in
     * a search request, the <code>GetContactAttributes</code> action is required to
     * perform an API request. For more information, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazonconnect.html#amazonconnect-actions-as-permissions">https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazonconnect.html#amazonconnect-actions-as-permissions</a>Actions
     * defined by Amazon Connect.</p> 
     */
    inline bool SearchableContactAttributesHasBeenSet() const { return m_searchableContactAttributesHasBeenSet; }

    /**
     * <p>The search criteria based on user-defined contact attributes that have been
     * configured for contact search. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/search-custom-attributes.html">Search
     * by customer contact attributes</a> in the <i>Amazon Connect Administrator
     * Guide</i>.</p>  <p>To use <code>SearchableContactAttributes</code> in
     * a search request, the <code>GetContactAttributes</code> action is required to
     * perform an API request. For more information, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazonconnect.html#amazonconnect-actions-as-permissions">https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazonconnect.html#amazonconnect-actions-as-permissions</a>Actions
     * defined by Amazon Connect.</p> 
     */
    inline void SetSearchableContactAttributes(const SearchableContactAttributes& value) { m_searchableContactAttributesHasBeenSet = true; m_searchableContactAttributes = value; }

    /**
     * <p>The search criteria based on user-defined contact attributes that have been
     * configured for contact search. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/search-custom-attributes.html">Search
     * by customer contact attributes</a> in the <i>Amazon Connect Administrator
     * Guide</i>.</p>  <p>To use <code>SearchableContactAttributes</code> in
     * a search request, the <code>GetContactAttributes</code> action is required to
     * perform an API request. For more information, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazonconnect.html#amazonconnect-actions-as-permissions">https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazonconnect.html#amazonconnect-actions-as-permissions</a>Actions
     * defined by Amazon Connect.</p> 
     */
    inline void SetSearchableContactAttributes(SearchableContactAttributes&& value) { m_searchableContactAttributesHasBeenSet = true; m_searchableContactAttributes = std::move(value); }

    /**
     * <p>The search criteria based on user-defined contact attributes that have been
     * configured for contact search. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/search-custom-attributes.html">Search
     * by customer contact attributes</a> in the <i>Amazon Connect Administrator
     * Guide</i>.</p>  <p>To use <code>SearchableContactAttributes</code> in
     * a search request, the <code>GetContactAttributes</code> action is required to
     * perform an API request. For more information, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazonconnect.html#amazonconnect-actions-as-permissions">https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazonconnect.html#amazonconnect-actions-as-permissions</a>Actions
     * defined by Amazon Connect.</p> 
     */
    inline SearchCriteria& WithSearchableContactAttributes(const SearchableContactAttributes& value) { SetSearchableContactAttributes(value); return *this;}

    /**
     * <p>The search criteria based on user-defined contact attributes that have been
     * configured for contact search. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/search-custom-attributes.html">Search
     * by customer contact attributes</a> in the <i>Amazon Connect Administrator
     * Guide</i>.</p>  <p>To use <code>SearchableContactAttributes</code> in
     * a search request, the <code>GetContactAttributes</code> action is required to
     * perform an API request. For more information, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazonconnect.html#amazonconnect-actions-as-permissions">https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazonconnect.html#amazonconnect-actions-as-permissions</a>Actions
     * defined by Amazon Connect.</p> 
     */
    inline SearchCriteria& WithSearchableContactAttributes(SearchableContactAttributes&& value) { SetSearchableContactAttributes(std::move(value)); return *this;}

  private:

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

    SearchableContactAttributes m_searchableContactAttributes;
    bool m_searchableContactAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
