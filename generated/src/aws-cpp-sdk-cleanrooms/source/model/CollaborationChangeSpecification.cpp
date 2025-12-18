/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/CollaborationChangeSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

CollaborationChangeSpecification::CollaborationChangeSpecification(JsonView jsonValue) { *this = jsonValue; }

CollaborationChangeSpecification& CollaborationChangeSpecification::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("autoApprovedChangeTypes")) {
    Aws::Utils::Array<JsonView> autoApprovedChangeTypesJsonList = jsonValue.GetArray("autoApprovedChangeTypes");
    for (unsigned autoApprovedChangeTypesIndex = 0; autoApprovedChangeTypesIndex < autoApprovedChangeTypesJsonList.GetLength();
         ++autoApprovedChangeTypesIndex) {
      m_autoApprovedChangeTypes.push_back(AutoApprovedChangeTypeMapper::GetAutoApprovedChangeTypeForName(
          autoApprovedChangeTypesJsonList[autoApprovedChangeTypesIndex].AsString()));
    }
    m_autoApprovedChangeTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue CollaborationChangeSpecification::Jsonize() const {
  JsonValue payload;

  if (m_autoApprovedChangeTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> autoApprovedChangeTypesJsonList(m_autoApprovedChangeTypes.size());
    for (unsigned autoApprovedChangeTypesIndex = 0; autoApprovedChangeTypesIndex < autoApprovedChangeTypesJsonList.GetLength();
         ++autoApprovedChangeTypesIndex) {
      autoApprovedChangeTypesJsonList[autoApprovedChangeTypesIndex].AsString(
          AutoApprovedChangeTypeMapper::GetNameForAutoApprovedChangeType(m_autoApprovedChangeTypes[autoApprovedChangeTypesIndex]));
    }
    payload.WithArray("autoApprovedChangeTypes", std::move(autoApprovedChangeTypesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
