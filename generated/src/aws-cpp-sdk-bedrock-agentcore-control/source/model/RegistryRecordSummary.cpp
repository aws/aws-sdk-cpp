/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/RegistryRecordSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

RegistryRecordSummary::RegistryRecordSummary(JsonView jsonValue) { *this = jsonValue; }

RegistryRecordSummary& RegistryRecordSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("registryArn")) {
    m_registryArn = jsonValue.GetString("registryArn");
    m_registryArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recordArn")) {
    m_recordArn = jsonValue.GetString("recordArn");
    m_recordArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recordId")) {
    m_recordId = jsonValue.GetString("recordId");
    m_recordIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("descriptorType")) {
    m_descriptorType = DescriptorTypeMapper::GetDescriptorTypeForName(jsonValue.GetString("descriptorType"));
    m_descriptorTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recordVersion")) {
    m_recordVersion = jsonValue.GetString("recordVersion");
    m_recordVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = RegistryRecordStatusMapper::GetRegistryRecordStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue RegistryRecordSummary::Jsonize() const {
  JsonValue payload;

  if (m_registryArnHasBeenSet) {
    payload.WithString("registryArn", m_registryArn);
  }

  if (m_recordArnHasBeenSet) {
    payload.WithString("recordArn", m_recordArn);
  }

  if (m_recordIdHasBeenSet) {
    payload.WithString("recordId", m_recordId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_descriptorTypeHasBeenSet) {
    payload.WithString("descriptorType", DescriptorTypeMapper::GetNameForDescriptorType(m_descriptorType));
  }

  if (m_recordVersionHasBeenSet) {
    payload.WithString("recordVersion", m_recordVersion);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", RegistryRecordStatusMapper::GetNameForRegistryRecordStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
