/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/JoinColumn.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

JoinColumn::JoinColumn(JsonView jsonValue) { *this = jsonValue; }

JoinColumn& JoinColumn::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("From")) {
    m_from = jsonValue.GetString("From");
    m_fromHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Keys")) {
    Aws::Utils::Array<JsonView> keysJsonList = jsonValue.GetArray("Keys");
    for (unsigned keysIndex = 0; keysIndex < keysJsonList.GetLength(); ++keysIndex) {
      Aws::Utils::Array<JsonView> enclosedInStringProperties2JsonList = keysJsonList[keysIndex].AsArray();
      Aws::Vector<Aws::String> enclosedInStringProperties2List;
      enclosedInStringProperties2List.reserve((size_t)enclosedInStringProperties2JsonList.GetLength());
      for (unsigned enclosedInStringProperties2Index = 0;
           enclosedInStringProperties2Index < enclosedInStringProperties2JsonList.GetLength(); ++enclosedInStringProperties2Index) {
        enclosedInStringProperties2List.push_back(enclosedInStringProperties2JsonList[enclosedInStringProperties2Index].AsString());
      }
      m_keys.push_back(std::move(enclosedInStringProperties2List));
    }
    m_keysHasBeenSet = true;
  }
  return *this;
}

JsonValue JoinColumn::Jsonize() const {
  JsonValue payload;

  if (m_fromHasBeenSet) {
    payload.WithString("From", m_from);
  }

  if (m_keysHasBeenSet) {
    Aws::Utils::Array<JsonValue> keysJsonList(m_keys.size());
    for (unsigned keysIndex = 0; keysIndex < keysJsonList.GetLength(); ++keysIndex) {
      Aws::Utils::Array<JsonValue> enclosedInStringPropertiesJsonList(m_keys[keysIndex].size());
      for (unsigned enclosedInStringPropertiesIndex = 0; enclosedInStringPropertiesIndex < enclosedInStringPropertiesJsonList.GetLength();
           ++enclosedInStringPropertiesIndex) {
        enclosedInStringPropertiesJsonList[enclosedInStringPropertiesIndex].AsString(m_keys[keysIndex][enclosedInStringPropertiesIndex]);
      }
      keysJsonList[keysIndex].AsArray(std::move(enclosedInStringPropertiesJsonList));
    }
    payload.WithArray("Keys", std::move(keysJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
