/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormTargetConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationFormTargetConfiguration::EvaluationFormTargetConfiguration(JsonView jsonValue) { *this = jsonValue; }

EvaluationFormTargetConfiguration& EvaluationFormTargetConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ContactInteractionType")) {
    m_contactInteractionType =
        ContactInteractionTypeMapper::GetContactInteractionTypeForName(jsonValue.GetString("ContactInteractionType"));
    m_contactInteractionTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationFormTargetConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_contactInteractionTypeHasBeenSet) {
    payload.WithString("ContactInteractionType", ContactInteractionTypeMapper::GetNameForContactInteractionType(m_contactInteractionType));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
