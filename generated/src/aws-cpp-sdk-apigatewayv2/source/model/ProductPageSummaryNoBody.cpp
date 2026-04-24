/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/ProductPageSummaryNoBody.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {

ProductPageSummaryNoBody::ProductPageSummaryNoBody(JsonView jsonValue) { *this = jsonValue; }

ProductPageSummaryNoBody& ProductPageSummaryNoBody::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("lastModified")) {
    m_lastModified = jsonValue.GetString("lastModified");
    m_lastModifiedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pageTitle")) {
    m_pageTitle = jsonValue.GetString("pageTitle");
    m_pageTitleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("productPageArn")) {
    m_productPageArn = jsonValue.GetString("productPageArn");
    m_productPageArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("productPageId")) {
    m_productPageId = jsonValue.GetString("productPageId");
    m_productPageIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ProductPageSummaryNoBody::Jsonize() const {
  JsonValue payload;

  if (m_lastModifiedHasBeenSet) {
    payload.WithString("lastModified", m_lastModified.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_pageTitleHasBeenSet) {
    payload.WithString("pageTitle", m_pageTitle);
  }

  if (m_productPageArnHasBeenSet) {
    payload.WithString("productPageArn", m_productPageArn);
  }

  if (m_productPageIdHasBeenSet) {
    payload.WithString("productPageId", m_productPageId);
  }

  return payload;
}

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
