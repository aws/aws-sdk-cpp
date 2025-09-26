/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SearchCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

SearchCriteria::SearchCriteria(JsonView jsonValue)
{
  *this = jsonValue;
}

SearchCriteria& SearchCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetObject("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AgentIds"))
  {
    Aws::Utils::Array<JsonView> agentIdsJsonList = jsonValue.GetArray("AgentIds");
    for(unsigned agentIdsIndex = 0; agentIdsIndex < agentIdsJsonList.GetLength(); ++agentIdsIndex)
    {
      m_agentIds.push_back(agentIdsJsonList[agentIdsIndex].AsString());
    }
    m_agentIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AgentHierarchyGroups"))
  {
    m_agentHierarchyGroups = jsonValue.GetObject("AgentHierarchyGroups");
    m_agentHierarchyGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Channels"))
  {
    Aws::Utils::Array<JsonView> channelsJsonList = jsonValue.GetArray("Channels");
    for(unsigned channelsIndex = 0; channelsIndex < channelsJsonList.GetLength(); ++channelsIndex)
    {
      m_channels.push_back(ChannelMapper::GetChannelForName(channelsJsonList[channelsIndex].AsString()));
    }
    m_channelsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContactAnalysis"))
  {
    m_contactAnalysis = jsonValue.GetObject("ContactAnalysis");
    m_contactAnalysisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InitiationMethods"))
  {
    Aws::Utils::Array<JsonView> initiationMethodsJsonList = jsonValue.GetArray("InitiationMethods");
    for(unsigned initiationMethodsIndex = 0; initiationMethodsIndex < initiationMethodsJsonList.GetLength(); ++initiationMethodsIndex)
    {
      m_initiationMethods.push_back(ContactInitiationMethodMapper::GetContactInitiationMethodForName(initiationMethodsJsonList[initiationMethodsIndex].AsString()));
    }
    m_initiationMethodsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QueueIds"))
  {
    Aws::Utils::Array<JsonView> queueIdsJsonList = jsonValue.GetArray("QueueIds");
    for(unsigned queueIdsIndex = 0; queueIdsIndex < queueIdsJsonList.GetLength(); ++queueIdsIndex)
    {
      m_queueIds.push_back(queueIdsJsonList[queueIdsIndex].AsString());
    }
    m_queueIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoutingCriteria"))
  {
    m_routingCriteria = jsonValue.GetObject("RoutingCriteria");
    m_routingCriteriaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdditionalTimeRange"))
  {
    m_additionalTimeRange = jsonValue.GetObject("AdditionalTimeRange");
    m_additionalTimeRangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SearchableContactAttributes"))
  {
    m_searchableContactAttributes = jsonValue.GetObject("SearchableContactAttributes");
    m_searchableContactAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SearchableSegmentAttributes"))
  {
    m_searchableSegmentAttributes = jsonValue.GetObject("SearchableSegmentAttributes");
    m_searchableSegmentAttributesHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithObject("Name", m_name.Jsonize());

  }

  if(m_agentIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> agentIdsJsonList(m_agentIds.size());
   for(unsigned agentIdsIndex = 0; agentIdsIndex < agentIdsJsonList.GetLength(); ++agentIdsIndex)
   {
     agentIdsJsonList[agentIdsIndex].AsString(m_agentIds[agentIdsIndex]);
   }
   payload.WithArray("AgentIds", std::move(agentIdsJsonList));

  }

  if(m_agentHierarchyGroupsHasBeenSet)
  {
   payload.WithObject("AgentHierarchyGroups", m_agentHierarchyGroups.Jsonize());

  }

  if(m_channelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> channelsJsonList(m_channels.size());
   for(unsigned channelsIndex = 0; channelsIndex < channelsJsonList.GetLength(); ++channelsIndex)
   {
     channelsJsonList[channelsIndex].AsString(ChannelMapper::GetNameForChannel(m_channels[channelsIndex]));
   }
   payload.WithArray("Channels", std::move(channelsJsonList));

  }

  if(m_contactAnalysisHasBeenSet)
  {
   payload.WithObject("ContactAnalysis", m_contactAnalysis.Jsonize());

  }

  if(m_initiationMethodsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> initiationMethodsJsonList(m_initiationMethods.size());
   for(unsigned initiationMethodsIndex = 0; initiationMethodsIndex < initiationMethodsJsonList.GetLength(); ++initiationMethodsIndex)
   {
     initiationMethodsJsonList[initiationMethodsIndex].AsString(ContactInitiationMethodMapper::GetNameForContactInitiationMethod(m_initiationMethods[initiationMethodsIndex]));
   }
   payload.WithArray("InitiationMethods", std::move(initiationMethodsJsonList));

  }

  if(m_queueIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> queueIdsJsonList(m_queueIds.size());
   for(unsigned queueIdsIndex = 0; queueIdsIndex < queueIdsJsonList.GetLength(); ++queueIdsIndex)
   {
     queueIdsJsonList[queueIdsIndex].AsString(m_queueIds[queueIdsIndex]);
   }
   payload.WithArray("QueueIds", std::move(queueIdsJsonList));

  }

  if(m_routingCriteriaHasBeenSet)
  {
   payload.WithObject("RoutingCriteria", m_routingCriteria.Jsonize());

  }

  if(m_additionalTimeRangeHasBeenSet)
  {
   payload.WithObject("AdditionalTimeRange", m_additionalTimeRange.Jsonize());

  }

  if(m_searchableContactAttributesHasBeenSet)
  {
   payload.WithObject("SearchableContactAttributes", m_searchableContactAttributes.Jsonize());

  }

  if(m_searchableSegmentAttributesHasBeenSet)
  {
   payload.WithObject("SearchableSegmentAttributes", m_searchableSegmentAttributes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
