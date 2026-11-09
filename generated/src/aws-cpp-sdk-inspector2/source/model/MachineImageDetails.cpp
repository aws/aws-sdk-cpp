/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/MachineImageDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

MachineImageDetails::MachineImageDetails(JsonView jsonValue) { *this = jsonValue; }

MachineImageDetails& MachineImageDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("machineImageId")) {
    m_machineImageId = jsonValue.GetString("machineImageId");
    m_machineImageIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ownerAccountId")) {
    m_ownerAccountId = jsonValue.GetString("ownerAccountId");
    m_ownerAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("platform")) {
    m_platform = jsonValue.GetString("platform");
    m_platformHasBeenSet = true;
  }
  if (jsonValue.ValueExists("architecture")) {
    m_architecture = ArchitectureMapper::GetArchitectureForName(jsonValue.GetString("architecture"));
    m_architectureHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationDate")) {
    m_creationDate = jsonValue.GetDouble("creationDate");
    m_creationDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = jsonValue.GetString("state");
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isPublic")) {
    m_isPublic = jsonValue.GetBool("isPublic");
    m_isPublicHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rootDeviceType")) {
    m_rootDeviceType = jsonValue.GetString("rootDeviceType");
    m_rootDeviceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("virtualizationType")) {
    m_virtualizationType = jsonValue.GetString("virtualizationType");
    m_virtualizationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceResourceId")) {
    m_sourceResourceId = jsonValue.GetString("sourceResourceId");
    m_sourceResourceIdHasBeenSet = true;
  }
  return *this;
}

JsonValue MachineImageDetails::Jsonize() const {
  JsonValue payload;

  if (m_machineImageIdHasBeenSet) {
    payload.WithString("machineImageId", m_machineImageId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_ownerAccountIdHasBeenSet) {
    payload.WithString("ownerAccountId", m_ownerAccountId);
  }

  if (m_platformHasBeenSet) {
    payload.WithString("platform", m_platform);
  }

  if (m_architectureHasBeenSet) {
    payload.WithString("architecture", ArchitectureMapper::GetNameForArchitecture(m_architecture));
  }

  if (m_creationDateHasBeenSet) {
    payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", m_state);
  }

  if (m_isPublicHasBeenSet) {
    payload.WithBool("isPublic", m_isPublic);
  }

  if (m_rootDeviceTypeHasBeenSet) {
    payload.WithString("rootDeviceType", m_rootDeviceType);
  }

  if (m_virtualizationTypeHasBeenSet) {
    payload.WithString("virtualizationType", m_virtualizationType);
  }

  if (m_sourceResourceIdHasBeenSet) {
    payload.WithString("sourceResourceId", m_sourceResourceId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
