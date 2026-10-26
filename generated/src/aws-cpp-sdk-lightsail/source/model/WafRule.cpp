/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lightsail/model/WafRule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {

WafRule::WafRule(JsonView jsonValue) { *this = jsonValue; }

WafRule& WafRule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("atpConfig")) {
    m_atpConfig = jsonValue.GetObject("atpConfig");
    m_atpConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("acfpConfig")) {
    m_acfpConfig = jsonValue.GetObject("acfpConfig");
    m_acfpConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("botControlConfig")) {
    m_botControlConfig = jsonValue.GetObject("botControlConfig");
    m_botControlConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue WafRule::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_atpConfigHasBeenSet) {
    payload.WithObject("atpConfig", m_atpConfig.Jsonize());
  }

  if (m_acfpConfigHasBeenSet) {
    payload.WithObject("acfpConfig", m_acfpConfig.Jsonize());
  }

  if (m_botControlConfigHasBeenSet) {
    payload.WithObject("botControlConfig", m_botControlConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
