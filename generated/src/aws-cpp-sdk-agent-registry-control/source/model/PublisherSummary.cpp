/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/PublisherSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

PublisherSummary::PublisherSummary(JsonView jsonValue) { *this = jsonValue; }

PublisherSummary& PublisherSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetObject("value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("identifierType")) {
    m_identifierType = IdentifierTypeMapper::GetIdentifierTypeForName(jsonValue.GetString("identifierType"));
    m_identifierTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = VerificationStatusMapper::GetVerificationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("publisherArn")) {
    m_publisherArn = jsonValue.GetString("publisherArn");
    m_publisherArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associationCount")) {
    m_associationCount = jsonValue.GetInteger("associationCount");
    m_associationCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pendingAssociationApprovalCount")) {
    m_pendingAssociationApprovalCount = jsonValue.GetInteger("pendingAssociationApprovalCount");
    m_pendingAssociationApprovalCountHasBeenSet = true;
  }
  return *this;
}

JsonValue PublisherSummary::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithObject("value", m_value.Jsonize());
  }

  if (m_identifierTypeHasBeenSet) {
    payload.WithString("identifierType", IdentifierTypeMapper::GetNameForIdentifierType(m_identifierType));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", VerificationStatusMapper::GetNameForVerificationStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_publisherArnHasBeenSet) {
    payload.WithString("publisherArn", m_publisherArn);
  }

  if (m_associationCountHasBeenSet) {
    payload.WithInteger("associationCount", m_associationCount);
  }

  if (m_pendingAssociationApprovalCountHasBeenSet) {
    payload.WithInteger("pendingAssociationApprovalCount", m_pendingAssociationApprovalCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
