/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/QuestionSetVersionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

QuestionSetVersionSummary::QuestionSetVersionSummary(JsonView jsonValue) { *this = jsonValue; }

QuestionSetVersionSummary& QuestionSetVersionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sha256")) {
    m_sha256 = jsonValue.GetString("sha256");
    m_sha256HasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastModifiedAt")) {
    m_lastModifiedAt = jsonValue.GetDouble("lastModifiedAt");
    m_lastModifiedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue QuestionSetVersionSummary::Jsonize() const {
  JsonValue payload;

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_sha256HasBeenSet) {
    payload.WithString("sha256", m_sha256);
  }

  if (m_lastModifiedAtHasBeenSet) {
    payload.WithDouble("lastModifiedAt", m_lastModifiedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
