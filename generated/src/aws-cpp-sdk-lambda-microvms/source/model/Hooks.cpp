/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-microvms/model/Hooks.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {

Hooks::Hooks(JsonView jsonValue) { *this = jsonValue; }

Hooks& Hooks::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("port")) {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if (jsonValue.ValueExists("microvmHooks")) {
    m_microvmHooks = jsonValue.GetObject("microvmHooks");
    m_microvmHooksHasBeenSet = true;
  }
  if (jsonValue.ValueExists("microvmImageHooks")) {
    m_microvmImageHooks = jsonValue.GetObject("microvmImageHooks");
    m_microvmImageHooksHasBeenSet = true;
  }
  return *this;
}

JsonValue Hooks::Jsonize() const {
  JsonValue payload;

  if (m_portHasBeenSet) {
    payload.WithInteger("port", m_port);
  }

  if (m_microvmHooksHasBeenSet) {
    payload.WithObject("microvmHooks", m_microvmHooks.Jsonize());
  }

  if (m_microvmImageHooksHasBeenSet) {
    payload.WithObject("microvmImageHooks", m_microvmImageHooks.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
