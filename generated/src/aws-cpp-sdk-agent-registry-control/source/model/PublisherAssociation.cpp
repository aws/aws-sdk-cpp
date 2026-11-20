/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/PublisherAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

PublisherAssociation::PublisherAssociation(JsonView jsonValue) { *this = jsonValue; }

PublisherAssociation& PublisherAssociation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("recordArn")) {
    m_recordArn = jsonValue.GetString("recordArn");
    m_recordArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("publicIdentifier")) {
    m_publicIdentifier = jsonValue.GetString("publicIdentifier");
    m_publicIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("publisher")) {
    m_publisher = jsonValue.GetString("publisher");
    m_publisherHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = AssociationStatusMapper::GetAssociationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue PublisherAssociation::Jsonize() const {
  JsonValue payload;

  if (m_recordArnHasBeenSet) {
    payload.WithString("recordArn", m_recordArn);
  }

  if (m_publicIdentifierHasBeenSet) {
    payload.WithString("publicIdentifier", m_publicIdentifier);
  }

  if (m_publisherHasBeenSet) {
    payload.WithString("publisher", m_publisher);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", AssociationStatusMapper::GetNameForAssociationStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
