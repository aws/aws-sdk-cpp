/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devicefarm/model/RemoteAccessEndpoints.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DeviceFarm {
namespace Model {

RemoteAccessEndpoints::RemoteAccessEndpoints(JsonView jsonValue) { *this = jsonValue; }

RemoteAccessEndpoints& RemoteAccessEndpoints::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("remoteDriverEndpoint")) {
    m_remoteDriverEndpoint = jsonValue.GetString("remoteDriverEndpoint");
    m_remoteDriverEndpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("interactiveEndpoint")) {
    m_interactiveEndpoint = jsonValue.GetString("interactiveEndpoint");
    m_interactiveEndpointHasBeenSet = true;
  }
  return *this;
}

JsonValue RemoteAccessEndpoints::Jsonize() const {
  JsonValue payload;

  if (m_remoteDriverEndpointHasBeenSet) {
    payload.WithString("remoteDriverEndpoint", m_remoteDriverEndpoint);
  }

  if (m_interactiveEndpointHasBeenSet) {
    payload.WithString("interactiveEndpoint", m_interactiveEndpoint);
  }

  return payload;
}

}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws
