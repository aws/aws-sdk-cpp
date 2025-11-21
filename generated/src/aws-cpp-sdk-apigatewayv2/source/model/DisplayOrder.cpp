/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/DisplayOrder.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {

DisplayOrder::DisplayOrder(JsonView jsonValue) { *this = jsonValue; }

DisplayOrder& DisplayOrder::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("contents")) {
    Aws::Utils::Array<JsonView> contentsJsonList = jsonValue.GetArray("contents");
    for (unsigned contentsIndex = 0; contentsIndex < contentsJsonList.GetLength(); ++contentsIndex) {
      m_contents.push_back(contentsJsonList[contentsIndex].AsObject());
    }
    m_contentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("overviewPageArn")) {
    m_overviewPageArn = jsonValue.GetString("overviewPageArn");
    m_overviewPageArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("productPageArns")) {
    Aws::Utils::Array<JsonView> productPageArnsJsonList = jsonValue.GetArray("productPageArns");
    for (unsigned productPageArnsIndex = 0; productPageArnsIndex < productPageArnsJsonList.GetLength(); ++productPageArnsIndex) {
      m_productPageArns.push_back(productPageArnsJsonList[productPageArnsIndex].AsString());
    }
    m_productPageArnsHasBeenSet = true;
  }
  return *this;
}

JsonValue DisplayOrder::Jsonize() const {
  JsonValue payload;

  if (m_contentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> contentsJsonList(m_contents.size());
    for (unsigned contentsIndex = 0; contentsIndex < contentsJsonList.GetLength(); ++contentsIndex) {
      contentsJsonList[contentsIndex].AsObject(m_contents[contentsIndex].Jsonize());
    }
    payload.WithArray("contents", std::move(contentsJsonList));
  }

  if (m_overviewPageArnHasBeenSet) {
    payload.WithString("overviewPageArn", m_overviewPageArn);
  }

  if (m_productPageArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> productPageArnsJsonList(m_productPageArns.size());
    for (unsigned productPageArnsIndex = 0; productPageArnsIndex < productPageArnsJsonList.GetLength(); ++productPageArnsIndex) {
      productPageArnsJsonList[productPageArnsIndex].AsString(m_productPageArns[productPageArnsIndex]);
    }
    payload.WithArray("productPageArns", std::move(productPageArnsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
