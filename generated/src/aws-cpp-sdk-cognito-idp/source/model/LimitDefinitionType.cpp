/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/LimitDefinitionType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

LimitDefinitionType::LimitDefinitionType(JsonView jsonValue) { *this = jsonValue; }

LimitDefinitionType& LimitDefinitionType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("LimitClass")) {
    m_limitClass = LimitClassMapper::GetLimitClassForName(jsonValue.GetString("LimitClass"));
    m_limitClassHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Attributes")) {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("Attributes").GetAllObjects();
    for (auto& attributesItem : attributesJsonMap) {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }
  return *this;
}

JsonValue LimitDefinitionType::Jsonize() const {
  JsonValue payload;

  if (m_limitClassHasBeenSet) {
    payload.WithString("LimitClass", LimitClassMapper::GetNameForLimitClass(m_limitClass));
  }

  if (m_attributesHasBeenSet) {
    JsonValue attributesJsonMap;
    for (auto& attributesItem : m_attributes) {
      attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
    }
    payload.WithObject("Attributes", std::move(attributesJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
