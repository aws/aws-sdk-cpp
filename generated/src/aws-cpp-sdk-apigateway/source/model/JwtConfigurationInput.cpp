/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/JwtConfigurationInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIGateway {
namespace Model {

JwtConfigurationInput::JwtConfigurationInput(JsonView jsonValue) { *this = jsonValue; }

JwtConfigurationInput& JwtConfigurationInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("issuers")) {
    Aws::Utils::Array<JsonView> issuersJsonList = jsonValue.GetArray("issuers");
    for (unsigned issuersIndex = 0; issuersIndex < issuersJsonList.GetLength(); ++issuersIndex) {
      m_issuers.push_back(issuersJsonList[issuersIndex].AsObject());
    }
    m_issuersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("defaultAlgorithms")) {
    Aws::Utils::Array<JsonView> defaultAlgorithmsJsonList = jsonValue.GetArray("defaultAlgorithms");
    for (unsigned defaultAlgorithmsIndex = 0; defaultAlgorithmsIndex < defaultAlgorithmsJsonList.GetLength(); ++defaultAlgorithmsIndex) {
      m_defaultAlgorithms.push_back(
          JwtSigningAlgorithmMapper::GetJwtSigningAlgorithmForName(defaultAlgorithmsJsonList[defaultAlgorithmsIndex].AsString()));
    }
    m_defaultAlgorithmsHasBeenSet = true;
  }
  return *this;
}

JsonValue JwtConfigurationInput::Jsonize() const {
  JsonValue payload;

  if (m_issuersHasBeenSet) {
    Aws::Utils::Array<JsonValue> issuersJsonList(m_issuers.size());
    for (unsigned issuersIndex = 0; issuersIndex < issuersJsonList.GetLength(); ++issuersIndex) {
      issuersJsonList[issuersIndex].AsObject(m_issuers[issuersIndex].Jsonize());
    }
    payload.WithArray("issuers", std::move(issuersJsonList));
  }

  if (m_defaultAlgorithmsHasBeenSet) {
    Aws::Utils::Array<JsonValue> defaultAlgorithmsJsonList(m_defaultAlgorithms.size());
    for (unsigned defaultAlgorithmsIndex = 0; defaultAlgorithmsIndex < defaultAlgorithmsJsonList.GetLength(); ++defaultAlgorithmsIndex) {
      defaultAlgorithmsJsonList[defaultAlgorithmsIndex].AsString(
          JwtSigningAlgorithmMapper::GetNameForJwtSigningAlgorithm(m_defaultAlgorithms[defaultAlgorithmsIndex]));
    }
    payload.WithArray("defaultAlgorithms", std::move(defaultAlgorithmsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace APIGateway
}  // namespace Aws
