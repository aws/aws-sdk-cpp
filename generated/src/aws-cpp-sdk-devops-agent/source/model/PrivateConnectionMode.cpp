/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/PrivateConnectionMode.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

PrivateConnectionMode::PrivateConnectionMode(JsonView jsonValue) { *this = jsonValue; }

PrivateConnectionMode& PrivateConnectionMode::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serviceManaged")) {
    m_serviceManaged = jsonValue.GetObject("serviceManaged");
    m_serviceManagedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("selfManaged")) {
    m_selfManaged = jsonValue.GetObject("selfManaged");
    m_selfManagedHasBeenSet = true;
  }
  return *this;
}

JsonValue PrivateConnectionMode::Jsonize() const {
  JsonValue payload;

  if (m_serviceManagedHasBeenSet) {
    payload.WithObject("serviceManaged", m_serviceManaged.Jsonize());
  }

  if (m_selfManagedHasBeenSet) {
    payload.WithObject("selfManaged", m_selfManaged.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
