/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/Product.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

Product::Product(JsonView jsonValue) { *this = jsonValue; }

Product& Product::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("feature")) {
    m_feature = jsonValue.GetString("feature");
    m_featureHasBeenSet = true;
  }
  return *this;
}

JsonValue Product::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_featureHasBeenSet) {
    payload.WithString("feature", m_feature);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
