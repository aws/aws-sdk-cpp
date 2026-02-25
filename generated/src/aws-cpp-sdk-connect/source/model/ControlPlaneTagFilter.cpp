/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ControlPlaneTagFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ControlPlaneTagFilter::ControlPlaneTagFilter(JsonView jsonValue) { *this = jsonValue; }

ControlPlaneTagFilter& ControlPlaneTagFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("OrConditions")) {
    Aws::Utils::Array<JsonView> orConditionsJsonList = jsonValue.GetArray("OrConditions");
    for (unsigned orConditionsIndex = 0; orConditionsIndex < orConditionsJsonList.GetLength(); ++orConditionsIndex) {
      Aws::Utils::Array<JsonView> tagAndConditionList2JsonList = orConditionsJsonList[orConditionsIndex].AsArray();
      Aws::Vector<TagCondition> tagAndConditionList2List;
      tagAndConditionList2List.reserve((size_t)tagAndConditionList2JsonList.GetLength());
      for (unsigned tagAndConditionList2Index = 0; tagAndConditionList2Index < tagAndConditionList2JsonList.GetLength();
           ++tagAndConditionList2Index) {
        tagAndConditionList2List.push_back(tagAndConditionList2JsonList[tagAndConditionList2Index].AsObject());
      }
      m_orConditions.push_back(std::move(tagAndConditionList2List));
    }
    m_orConditionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AndConditions")) {
    Aws::Utils::Array<JsonView> andConditionsJsonList = jsonValue.GetArray("AndConditions");
    for (unsigned andConditionsIndex = 0; andConditionsIndex < andConditionsJsonList.GetLength(); ++andConditionsIndex) {
      m_andConditions.push_back(andConditionsJsonList[andConditionsIndex].AsObject());
    }
    m_andConditionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TagCondition")) {
    m_tagCondition = jsonValue.GetObject("TagCondition");
    m_tagConditionHasBeenSet = true;
  }
  return *this;
}

JsonValue ControlPlaneTagFilter::Jsonize() const {
  JsonValue payload;

  if (m_orConditionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> orConditionsJsonList(m_orConditions.size());
    for (unsigned orConditionsIndex = 0; orConditionsIndex < orConditionsJsonList.GetLength(); ++orConditionsIndex) {
      Aws::Utils::Array<JsonValue> tagAndConditionListJsonList(m_orConditions[orConditionsIndex].size());
      for (unsigned tagAndConditionListIndex = 0; tagAndConditionListIndex < tagAndConditionListJsonList.GetLength();
           ++tagAndConditionListIndex) {
        tagAndConditionListJsonList[tagAndConditionListIndex].AsObject(
            m_orConditions[orConditionsIndex][tagAndConditionListIndex].Jsonize());
      }
      orConditionsJsonList[orConditionsIndex].AsArray(std::move(tagAndConditionListJsonList));
    }
    payload.WithArray("OrConditions", std::move(orConditionsJsonList));
  }

  if (m_andConditionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> andConditionsJsonList(m_andConditions.size());
    for (unsigned andConditionsIndex = 0; andConditionsIndex < andConditionsJsonList.GetLength(); ++andConditionsIndex) {
      andConditionsJsonList[andConditionsIndex].AsObject(m_andConditions[andConditionsIndex].Jsonize());
    }
    payload.WithArray("AndConditions", std::move(andConditionsJsonList));
  }

  if (m_tagConditionHasBeenSet) {
    payload.WithObject("TagCondition", m_tagCondition.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
