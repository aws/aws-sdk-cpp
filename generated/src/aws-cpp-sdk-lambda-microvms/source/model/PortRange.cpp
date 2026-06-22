/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-microvms/model/PortRange.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {

PortRange::PortRange(JsonView jsonValue) { *this = jsonValue; }

PortRange& PortRange::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("startPort")) {
    m_startPort = jsonValue.GetInteger("startPort");
    m_startPortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endPort")) {
    m_endPort = jsonValue.GetInteger("endPort");
    m_endPortHasBeenSet = true;
  }
  return *this;
}

JsonValue PortRange::Jsonize() const {
  JsonValue payload;

  if (m_startPortHasBeenSet) {
    payload.WithInteger("startPort", m_startPort);
  }

  if (m_endPortHasBeenSet) {
    payload.WithInteger("endPort", m_endPort);
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
