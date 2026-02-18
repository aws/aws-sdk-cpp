/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/grafana/model/ServiceAccountTokenSummaryWithKey.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ManagedGrafana {
namespace Model {

ServiceAccountTokenSummaryWithKey::ServiceAccountTokenSummaryWithKey(JsonView jsonValue) { *this = jsonValue; }

ServiceAccountTokenSummaryWithKey& ServiceAccountTokenSummaryWithKey::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("key")) {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceAccountTokenSummaryWithKey::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_keyHasBeenSet) {
    payload.WithString("key", m_key);
  }

  return payload;
}

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
