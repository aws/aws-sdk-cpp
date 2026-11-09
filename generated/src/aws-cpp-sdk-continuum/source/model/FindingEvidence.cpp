/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/FindingEvidence.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

FindingEvidence::FindingEvidence(JsonView jsonValue) { *this = jsonValue; }

FindingEvidence& FindingEvidence::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("file")) {
    m_file = jsonValue.GetString("file");
    m_fileHasBeenSet = true;
  }
  if (jsonValue.ValueExists("line")) {
    m_line = jsonValue.GetInteger("line");
    m_lineHasBeenSet = true;
  }
  if (jsonValue.ValueExists("snippet")) {
    m_snippet = jsonValue.GetString("snippet");
    m_snippetHasBeenSet = true;
  }
  return *this;
}

JsonValue FindingEvidence::Jsonize() const {
  JsonValue payload;

  if (m_fileHasBeenSet) {
    payload.WithString("file", m_file);
  }

  if (m_lineHasBeenSet) {
    payload.WithInteger("line", m_line);
  }

  if (m_snippetHasBeenSet) {
    payload.WithString("snippet", m_snippet);
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
