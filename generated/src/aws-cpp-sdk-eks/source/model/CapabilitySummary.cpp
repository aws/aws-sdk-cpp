/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/CapabilitySummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

CapabilitySummary::CapabilitySummary(JsonView jsonValue) { *this = jsonValue; }

CapabilitySummary& CapabilitySummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("capabilityName")) {
    m_capabilityName = jsonValue.GetString("capabilityName");
    m_capabilityNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = CapabilityTypeMapper::GetCapabilityTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = CapabilityStatusMapper::GetCapabilityStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("modifiedAt")) {
    m_modifiedAt = jsonValue.GetDouble("modifiedAt");
    m_modifiedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue CapabilitySummary::Jsonize() const {
  JsonValue payload;

  if (m_capabilityNameHasBeenSet) {
    payload.WithString("capabilityName", m_capabilityName);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", CapabilityTypeMapper::GetNameForCapabilityType(m_type));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", CapabilityStatusMapper::GetNameForCapabilityStatus(m_status));
  }

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_modifiedAtHasBeenSet) {
    payload.WithDouble("modifiedAt", m_modifiedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
