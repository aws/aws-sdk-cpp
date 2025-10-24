/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/Edge.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

Edge::Edge(JsonView jsonValue) { *this = jsonValue; }

Edge& Edge::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SourceNodeId")) {
    m_sourceNodeId = jsonValue.GetString("SourceNodeId");
    m_sourceNodeIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DestinationNodeId")) {
    m_destinationNodeId = jsonValue.GetString("DestinationNodeId");
    m_destinationNodeIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Duration")) {
    m_duration = jsonValue.GetDouble("Duration");
    m_durationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConnectionType")) {
    m_connectionType = ConnectionTypeMapper::GetConnectionTypeForName(jsonValue.GetString("ConnectionType"));
    m_connectionTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue Edge::Jsonize() const {
  JsonValue payload;

  if (m_sourceNodeIdHasBeenSet) {
    payload.WithString("SourceNodeId", m_sourceNodeId);
  }

  if (m_destinationNodeIdHasBeenSet) {
    payload.WithString("DestinationNodeId", m_destinationNodeId);
  }

  if (m_durationHasBeenSet) {
    payload.WithDouble("Duration", m_duration);
  }

  if (m_connectionTypeHasBeenSet) {
    payload.WithString("ConnectionType", ConnectionTypeMapper::GetNameForConnectionType(m_connectionType));
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
