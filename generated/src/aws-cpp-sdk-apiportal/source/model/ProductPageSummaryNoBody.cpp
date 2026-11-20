/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/ProductPageSummaryNoBody.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

ProductPageSummaryNoBody::ProductPageSummaryNoBody(JsonView jsonValue) { *this = jsonValue; }

ProductPageSummaryNoBody& ProductPageSummaryNoBody::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("productPageId")) {
    m_productPageId = jsonValue.GetString("productPageId");
    m_productPageIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("productPageArn")) {
    m_productPageArn = jsonValue.GetString("productPageArn");
    m_productPageArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pageTitle")) {
    m_pageTitle = jsonValue.GetString("pageTitle");
    m_pageTitleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ProductPageSummaryNoBody::Jsonize() const {
  JsonValue payload;

  if (m_productPageIdHasBeenSet) {
    payload.WithString("productPageId", m_productPageId);
  }

  if (m_productPageArnHasBeenSet) {
    payload.WithString("productPageArn", m_productPageArn);
  }

  if (m_pageTitleHasBeenSet) {
    payload.WithString("pageTitle", m_pageTitle);
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
