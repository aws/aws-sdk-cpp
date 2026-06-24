/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/InvestigationMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

InvestigationMetadata::InvestigationMetadata(JsonView jsonValue) { *this = jsonValue; }

InvestigationMetadata& InvestigationMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("product")) {
    m_product = jsonValue.GetObject("product");
    m_productHasBeenSet = true;
  }
  return *this;
}

JsonValue InvestigationMetadata::Jsonize() const {
  JsonValue payload;

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  if (m_productHasBeenSet) {
    payload.WithObject("product", m_product.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
