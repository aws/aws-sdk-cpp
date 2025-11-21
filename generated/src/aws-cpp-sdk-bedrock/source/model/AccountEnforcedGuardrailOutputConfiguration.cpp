/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AccountEnforcedGuardrailOutputConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

AccountEnforcedGuardrailOutputConfiguration::AccountEnforcedGuardrailOutputConfiguration(JsonView jsonValue) { *this = jsonValue; }

AccountEnforcedGuardrailOutputConfiguration& AccountEnforcedGuardrailOutputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("configId")) {
    m_configId = jsonValue.GetString("configId");
    m_configIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("guardrailArn")) {
    m_guardrailArn = jsonValue.GetString("guardrailArn");
    m_guardrailArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("guardrailId")) {
    m_guardrailId = jsonValue.GetString("guardrailId");
    m_guardrailIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inputTags")) {
    m_inputTags = InputTagsMapper::GetInputTagsForName(jsonValue.GetString("inputTags"));
    m_inputTagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("guardrailVersion")) {
    m_guardrailVersion = jsonValue.GetString("guardrailVersion");
    m_guardrailVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdBy")) {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedBy")) {
    m_updatedBy = jsonValue.GetString("updatedBy");
    m_updatedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("owner")) {
    m_owner = ConfigurationOwnerMapper::GetConfigurationOwnerForName(jsonValue.GetString("owner"));
    m_ownerHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountEnforcedGuardrailOutputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_configIdHasBeenSet) {
    payload.WithString("configId", m_configId);
  }

  if (m_guardrailArnHasBeenSet) {
    payload.WithString("guardrailArn", m_guardrailArn);
  }

  if (m_guardrailIdHasBeenSet) {
    payload.WithString("guardrailId", m_guardrailId);
  }

  if (m_inputTagsHasBeenSet) {
    payload.WithString("inputTags", InputTagsMapper::GetNameForInputTags(m_inputTags));
  }

  if (m_guardrailVersionHasBeenSet) {
    payload.WithString("guardrailVersion", m_guardrailVersion);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_createdByHasBeenSet) {
    payload.WithString("createdBy", m_createdBy);
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedByHasBeenSet) {
    payload.WithString("updatedBy", m_updatedBy);
  }

  if (m_ownerHasBeenSet) {
    payload.WithString("owner", ConfigurationOwnerMapper::GetNameForConfigurationOwner(m_owner));
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
