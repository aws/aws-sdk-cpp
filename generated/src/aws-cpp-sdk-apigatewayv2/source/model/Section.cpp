/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/Section.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {

Section::Section(JsonView jsonValue) { *this = jsonValue; }

Section& Section::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("productRestEndpointPageArns")) {
    Aws::Utils::Array<JsonView> productRestEndpointPageArnsJsonList = jsonValue.GetArray("productRestEndpointPageArns");
    for (unsigned productRestEndpointPageArnsIndex = 0; productRestEndpointPageArnsIndex < productRestEndpointPageArnsJsonList.GetLength();
         ++productRestEndpointPageArnsIndex) {
      m_productRestEndpointPageArns.push_back(productRestEndpointPageArnsJsonList[productRestEndpointPageArnsIndex].AsString());
    }
    m_productRestEndpointPageArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sectionName")) {
    m_sectionName = jsonValue.GetString("sectionName");
    m_sectionNameHasBeenSet = true;
  }
  return *this;
}

JsonValue Section::Jsonize() const {
  JsonValue payload;

  if (m_productRestEndpointPageArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> productRestEndpointPageArnsJsonList(m_productRestEndpointPageArns.size());
    for (unsigned productRestEndpointPageArnsIndex = 0; productRestEndpointPageArnsIndex < productRestEndpointPageArnsJsonList.GetLength();
         ++productRestEndpointPageArnsIndex) {
      productRestEndpointPageArnsJsonList[productRestEndpointPageArnsIndex].AsString(
          m_productRestEndpointPageArns[productRestEndpointPageArnsIndex]);
    }
    payload.WithArray("productRestEndpointPageArns", std::move(productRestEndpointPageArnsJsonList));
  }

  if (m_sectionNameHasBeenSet) {
    payload.WithString("sectionName", m_sectionName);
  }

  return payload;
}

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
