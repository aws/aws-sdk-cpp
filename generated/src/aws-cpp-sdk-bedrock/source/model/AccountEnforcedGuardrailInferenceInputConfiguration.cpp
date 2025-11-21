/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AccountEnforcedGuardrailInferenceInputConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

AccountEnforcedGuardrailInferenceInputConfiguration::AccountEnforcedGuardrailInferenceInputConfiguration(JsonView jsonValue) {
  *this = jsonValue;
}

AccountEnforcedGuardrailInferenceInputConfiguration& AccountEnforcedGuardrailInferenceInputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("guardrailIdentifier")) {
    m_guardrailIdentifier = jsonValue.GetString("guardrailIdentifier");
    m_guardrailIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("guardrailVersion")) {
    m_guardrailVersion = jsonValue.GetString("guardrailVersion");
    m_guardrailVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inputTags")) {
    m_inputTags = InputTagsMapper::GetInputTagsForName(jsonValue.GetString("inputTags"));
    m_inputTagsHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountEnforcedGuardrailInferenceInputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_guardrailIdentifierHasBeenSet) {
    payload.WithString("guardrailIdentifier", m_guardrailIdentifier);
  }

  if (m_guardrailVersionHasBeenSet) {
    payload.WithString("guardrailVersion", m_guardrailVersion);
  }

  if (m_inputTagsHasBeenSet) {
    payload.WithString("inputTags", InputTagsMapper::GetNameForInputTags(m_inputTags));
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
