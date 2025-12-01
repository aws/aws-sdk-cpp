/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/Capability.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

Capability::Capability(JsonView jsonValue) { *this = jsonValue; }

Capability& Capability::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("capabilityName")) {
    m_capabilityName = jsonValue.GetString("capabilityName");
    m_capabilityNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clusterName")) {
    m_clusterName = jsonValue.GetString("clusterName");
    m_clusterNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = CapabilityTypeMapper::GetCapabilityTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("roleArn")) {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = CapabilityStatusMapper::GetCapabilityStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configuration")) {
    m_configuration = jsonValue.GetObject("configuration");
    m_configurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("health")) {
    m_health = jsonValue.GetObject("health");
    m_healthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("modifiedAt")) {
    m_modifiedAt = jsonValue.GetDouble("modifiedAt");
    m_modifiedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deletePropagationPolicy")) {
    m_deletePropagationPolicy = CapabilityDeletePropagationPolicyMapper::GetCapabilityDeletePropagationPolicyForName(
        jsonValue.GetString("deletePropagationPolicy"));
    m_deletePropagationPolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue Capability::Jsonize() const {
  JsonValue payload;

  if (m_capabilityNameHasBeenSet) {
    payload.WithString("capabilityName", m_capabilityName);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_clusterNameHasBeenSet) {
    payload.WithString("clusterName", m_clusterName);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", CapabilityTypeMapper::GetNameForCapabilityType(m_type));
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("roleArn", m_roleArn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", CapabilityStatusMapper::GetNameForCapabilityStatus(m_status));
  }

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  if (m_configurationHasBeenSet) {
    payload.WithObject("configuration", m_configuration.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_healthHasBeenSet) {
    payload.WithObject("health", m_health.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_modifiedAtHasBeenSet) {
    payload.WithDouble("modifiedAt", m_modifiedAt.SecondsWithMSPrecision());
  }

  if (m_deletePropagationPolicyHasBeenSet) {
    payload.WithString("deletePropagationPolicy",
                       CapabilityDeletePropagationPolicyMapper::GetNameForCapabilityDeletePropagationPolicy(m_deletePropagationPolicy));
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
