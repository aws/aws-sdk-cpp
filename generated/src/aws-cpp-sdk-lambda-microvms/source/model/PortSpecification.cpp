/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-microvms/model/PortSpecification.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {

PortSpecification::PortSpecification(JsonView jsonValue) { *this = jsonValue; }

PortSpecification& PortSpecification::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("port")) {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if (jsonValue.ValueExists("range")) {
    m_range = jsonValue.GetObject("range");
    m_rangeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("allPorts")) {
    m_allPorts = jsonValue.GetObject("allPorts");
    m_allPortsHasBeenSet = true;
  }
  return *this;
}

JsonValue PortSpecification::Jsonize() const {
  JsonValue payload;

  if (m_portHasBeenSet) {
    payload.WithInteger("port", m_port);
  }

  if (m_rangeHasBeenSet) {
    payload.WithObject("range", m_range.Jsonize());
  }

  if (m_allPortsHasBeenSet) {
    payload.WithObject("allPorts", m_allPorts.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
