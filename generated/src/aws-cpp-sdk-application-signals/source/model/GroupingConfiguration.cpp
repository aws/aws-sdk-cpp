/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/GroupingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

GroupingConfiguration::GroupingConfiguration(JsonView jsonValue) { *this = jsonValue; }

GroupingConfiguration& GroupingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("GroupingAttributeDefinitions")) {
    Aws::Utils::Array<JsonView> groupingAttributeDefinitionsJsonList = jsonValue.GetArray("GroupingAttributeDefinitions");
    for (unsigned groupingAttributeDefinitionsIndex = 0;
         groupingAttributeDefinitionsIndex < groupingAttributeDefinitionsJsonList.GetLength(); ++groupingAttributeDefinitionsIndex) {
      m_groupingAttributeDefinitions.push_back(groupingAttributeDefinitionsJsonList[groupingAttributeDefinitionsIndex].AsObject());
    }
    m_groupingAttributeDefinitionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue GroupingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_groupingAttributeDefinitionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> groupingAttributeDefinitionsJsonList(m_groupingAttributeDefinitions.size());
    for (unsigned groupingAttributeDefinitionsIndex = 0;
         groupingAttributeDefinitionsIndex < groupingAttributeDefinitionsJsonList.GetLength(); ++groupingAttributeDefinitionsIndex) {
      groupingAttributeDefinitionsJsonList[groupingAttributeDefinitionsIndex].AsObject(
          m_groupingAttributeDefinitions[groupingAttributeDefinitionsIndex].Jsonize());
    }
    payload.WithArray("GroupingAttributeDefinitions", std::move(groupingAttributeDefinitionsJsonList));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
