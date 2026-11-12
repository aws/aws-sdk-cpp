/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/NetworkActivity.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

NetworkActivity::NetworkActivity(JsonView jsonValue) { *this = jsonValue; }

NetworkActivity& NetworkActivity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("protocol")) {
    m_protocol = jsonValue.GetString("protocol");
    m_protocolHasBeenSet = true;
  }
  if (jsonValue.ValueExists("direction")) {
    m_direction = jsonValue.GetString("direction");
    m_directionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("method")) {
    m_method = jsonValue.GetString("method");
    m_methodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("blocked")) {
    m_blocked = jsonValue.GetString("blocked");
    m_blockedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("platform")) {
    m_platform = jsonValue.GetString("platform");
    m_platformHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ports")) {
    m_ports = jsonValue.GetObject("ports");
    m_portsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("traffic")) {
    m_traffic = jsonValue.GetObject("traffic");
    m_trafficHasBeenSet = true;
  }
  if (jsonValue.ValueExists("anomaly")) {
    m_anomaly = jsonValue.GetObject("anomaly");
    m_anomalyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dns")) {
    m_dns = jsonValue.GetObject("dns");
    m_dnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("counts")) {
    m_counts = jsonValue.GetObject("counts");
    m_countsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enrichment")) {
    m_enrichment = jsonValue.GetObject("enrichment");
    m_enrichmentHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkActivity::Jsonize() const {
  JsonValue payload;

  if (m_protocolHasBeenSet) {
    payload.WithString("protocol", m_protocol);
  }

  if (m_directionHasBeenSet) {
    payload.WithString("direction", m_direction);
  }

  if (m_methodHasBeenSet) {
    payload.WithString("method", m_method);
  }

  if (m_blockedHasBeenSet) {
    payload.WithString("blocked", m_blocked);
  }

  if (m_platformHasBeenSet) {
    payload.WithString("platform", m_platform);
  }

  if (m_portsHasBeenSet) {
    payload.WithObject("ports", m_ports.Jsonize());
  }

  if (m_trafficHasBeenSet) {
    payload.WithObject("traffic", m_traffic.Jsonize());
  }

  if (m_anomalyHasBeenSet) {
    payload.WithObject("anomaly", m_anomaly.Jsonize());
  }

  if (m_dnsHasBeenSet) {
    payload.WithObject("dns", m_dns.Jsonize());
  }

  if (m_countsHasBeenSet) {
    payload.WithObject("counts", m_counts.Jsonize());
  }

  if (m_enrichmentHasBeenSet) {
    payload.WithObject("enrichment", m_enrichment.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
