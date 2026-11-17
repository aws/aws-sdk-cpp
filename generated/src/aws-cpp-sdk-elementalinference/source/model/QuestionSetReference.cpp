/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/QuestionSetReference.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

QuestionSetReference::QuestionSetReference(JsonView jsonValue) { *this = jsonValue; }

QuestionSetReference& QuestionSetReference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("questionSetId")) {
    m_questionSetId = jsonValue.GetString("questionSetId");
    m_questionSetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  return *this;
}

JsonValue QuestionSetReference::Jsonize() const {
  JsonValue payload;

  if (m_questionSetIdHasBeenSet) {
    payload.WithString("questionSetId", m_questionSetId);
  }

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
