/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Filters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

Filters::Filters(JsonView jsonValue) { *this = jsonValue; }

Filters& Filters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Queues")) {
    Aws::Utils::Array<JsonView> queuesJsonList = jsonValue.GetArray("Queues");
    for (unsigned queuesIndex = 0; queuesIndex < queuesJsonList.GetLength(); ++queuesIndex) {
      m_queues.push_back(queuesJsonList[queuesIndex].AsString());
    }
    m_queuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Channels")) {
    Aws::Utils::Array<JsonView> channelsJsonList = jsonValue.GetArray("Channels");
    for (unsigned channelsIndex = 0; channelsIndex < channelsJsonList.GetLength(); ++channelsIndex) {
      m_channels.push_back(ChannelMapper::GetChannelForName(channelsJsonList[channelsIndex].AsString()));
    }
    m_channelsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoutingProfiles")) {
    Aws::Utils::Array<JsonView> routingProfilesJsonList = jsonValue.GetArray("RoutingProfiles");
    for (unsigned routingProfilesIndex = 0; routingProfilesIndex < routingProfilesJsonList.GetLength(); ++routingProfilesIndex) {
      m_routingProfiles.push_back(routingProfilesJsonList[routingProfilesIndex].AsString());
    }
    m_routingProfilesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoutingStepExpressions")) {
    Aws::Utils::Array<JsonView> routingStepExpressionsJsonList = jsonValue.GetArray("RoutingStepExpressions");
    for (unsigned routingStepExpressionsIndex = 0; routingStepExpressionsIndex < routingStepExpressionsJsonList.GetLength();
         ++routingStepExpressionsIndex) {
      m_routingStepExpressions.push_back(routingStepExpressionsJsonList[routingStepExpressionsIndex].AsString());
    }
    m_routingStepExpressionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AgentStatuses")) {
    Aws::Utils::Array<JsonView> agentStatusesJsonList = jsonValue.GetArray("AgentStatuses");
    for (unsigned agentStatusesIndex = 0; agentStatusesIndex < agentStatusesJsonList.GetLength(); ++agentStatusesIndex) {
      m_agentStatuses.push_back(agentStatusesJsonList[agentStatusesIndex].AsString());
    }
    m_agentStatusesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Subtypes")) {
    Aws::Utils::Array<JsonView> subtypesJsonList = jsonValue.GetArray("Subtypes");
    for (unsigned subtypesIndex = 0; subtypesIndex < subtypesJsonList.GetLength(); ++subtypesIndex) {
      m_subtypes.push_back(subtypesJsonList[subtypesIndex].AsString());
    }
    m_subtypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ValidationTestTypes")) {
    Aws::Utils::Array<JsonView> validationTestTypesJsonList = jsonValue.GetArray("ValidationTestTypes");
    for (unsigned validationTestTypesIndex = 0; validationTestTypesIndex < validationTestTypesJsonList.GetLength();
         ++validationTestTypesIndex) {
      m_validationTestTypes.push_back(validationTestTypesJsonList[validationTestTypesIndex].AsString());
    }
    m_validationTestTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue Filters::Jsonize() const {
  JsonValue payload;

  if (m_queuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> queuesJsonList(m_queues.size());
    for (unsigned queuesIndex = 0; queuesIndex < queuesJsonList.GetLength(); ++queuesIndex) {
      queuesJsonList[queuesIndex].AsString(m_queues[queuesIndex]);
    }
    payload.WithArray("Queues", std::move(queuesJsonList));
  }

  if (m_channelsHasBeenSet) {
    Aws::Utils::Array<JsonValue> channelsJsonList(m_channels.size());
    for (unsigned channelsIndex = 0; channelsIndex < channelsJsonList.GetLength(); ++channelsIndex) {
      channelsJsonList[channelsIndex].AsString(ChannelMapper::GetNameForChannel(m_channels[channelsIndex]));
    }
    payload.WithArray("Channels", std::move(channelsJsonList));
  }

  if (m_routingProfilesHasBeenSet) {
    Aws::Utils::Array<JsonValue> routingProfilesJsonList(m_routingProfiles.size());
    for (unsigned routingProfilesIndex = 0; routingProfilesIndex < routingProfilesJsonList.GetLength(); ++routingProfilesIndex) {
      routingProfilesJsonList[routingProfilesIndex].AsString(m_routingProfiles[routingProfilesIndex]);
    }
    payload.WithArray("RoutingProfiles", std::move(routingProfilesJsonList));
  }

  if (m_routingStepExpressionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> routingStepExpressionsJsonList(m_routingStepExpressions.size());
    for (unsigned routingStepExpressionsIndex = 0; routingStepExpressionsIndex < routingStepExpressionsJsonList.GetLength();
         ++routingStepExpressionsIndex) {
      routingStepExpressionsJsonList[routingStepExpressionsIndex].AsString(m_routingStepExpressions[routingStepExpressionsIndex]);
    }
    payload.WithArray("RoutingStepExpressions", std::move(routingStepExpressionsJsonList));
  }

  if (m_agentStatusesHasBeenSet) {
    Aws::Utils::Array<JsonValue> agentStatusesJsonList(m_agentStatuses.size());
    for (unsigned agentStatusesIndex = 0; agentStatusesIndex < agentStatusesJsonList.GetLength(); ++agentStatusesIndex) {
      agentStatusesJsonList[agentStatusesIndex].AsString(m_agentStatuses[agentStatusesIndex]);
    }
    payload.WithArray("AgentStatuses", std::move(agentStatusesJsonList));
  }

  if (m_subtypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> subtypesJsonList(m_subtypes.size());
    for (unsigned subtypesIndex = 0; subtypesIndex < subtypesJsonList.GetLength(); ++subtypesIndex) {
      subtypesJsonList[subtypesIndex].AsString(m_subtypes[subtypesIndex]);
    }
    payload.WithArray("Subtypes", std::move(subtypesJsonList));
  }

  if (m_validationTestTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> validationTestTypesJsonList(m_validationTestTypes.size());
    for (unsigned validationTestTypesIndex = 0; validationTestTypesIndex < validationTestTypesJsonList.GetLength();
         ++validationTestTypesIndex) {
      validationTestTypesJsonList[validationTestTypesIndex].AsString(m_validationTestTypes[validationTestTypesIndex]);
    }
    payload.WithArray("ValidationTestTypes", std::move(validationTestTypesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
