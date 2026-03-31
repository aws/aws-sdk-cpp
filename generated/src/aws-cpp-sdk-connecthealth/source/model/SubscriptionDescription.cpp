/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/SubscriptionDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

SubscriptionDescription::SubscriptionDescription(JsonView jsonValue) { *this = jsonValue; }

SubscriptionDescription& SubscriptionDescription::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("domainId")) {
    m_domainId = jsonValue.GetString("domainId");
    m_domainIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subscriptionId")) {
    m_subscriptionId = jsonValue.GetString("subscriptionId");
    m_subscriptionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = SubscriptionStatusMapper::GetSubscriptionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedAt")) {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("activatedAt")) {
    m_activatedAt = jsonValue.GetDouble("activatedAt");
    m_activatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deactivatedAt")) {
    m_deactivatedAt = jsonValue.GetDouble("deactivatedAt");
    m_deactivatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue SubscriptionDescription::Jsonize() const {
  JsonValue payload;

  if (m_domainIdHasBeenSet) {
    payload.WithString("domainId", m_domainId);
  }

  if (m_subscriptionIdHasBeenSet) {
    payload.WithString("subscriptionId", m_subscriptionId);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", SubscriptionStatusMapper::GetNameForSubscriptionStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_lastUpdatedAtHasBeenSet) {
    payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if (m_activatedAtHasBeenSet) {
    payload.WithDouble("activatedAt", m_activatedAt.SecondsWithMSPrecision());
  }

  if (m_deactivatedAtHasBeenSet) {
    payload.WithDouble("deactivatedAt", m_deactivatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
