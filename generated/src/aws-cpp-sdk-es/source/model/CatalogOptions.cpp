/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/es/model/CatalogOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElasticsearchService {
namespace Model {

CatalogOptions::CatalogOptions(JsonView jsonValue) { *this = jsonValue; }

CatalogOptions& CatalogOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Enabled")) {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Catalog")) {
    m_catalog = jsonValue.GetObject("Catalog");
    m_catalogHasBeenSet = true;
  }
  return *this;
}

JsonValue CatalogOptions::Jsonize() const {
  JsonValue payload;

  if (m_enabledHasBeenSet) {
    payload.WithBool("Enabled", m_enabled);
  }

  if (m_catalogHasBeenSet) {
    payload.WithObject("Catalog", m_catalog.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
