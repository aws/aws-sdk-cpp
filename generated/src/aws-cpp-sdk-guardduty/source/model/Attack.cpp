/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/Attack.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

Attack::Attack(JsonView jsonValue) { *this = jsonValue; }

Attack& Attack::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("tactic")) {
    m_tactic = jsonValue.GetObject("tactic");
    m_tacticHasBeenSet = true;
  }
  if (jsonValue.ValueExists("technique")) {
    m_technique = jsonValue.GetObject("technique");
    m_techniqueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findings")) {
    Aws::Utils::Array<JsonView> findingsJsonList = jsonValue.GetArray("findings");
    for (unsigned findingsIndex = 0; findingsIndex < findingsJsonList.GetLength(); ++findingsIndex) {
      m_findings.push_back(findingsJsonList[findingsIndex].AsObject());
    }
    m_findingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  return *this;
}

JsonValue Attack::Jsonize() const {
  JsonValue payload;

  if (m_tacticHasBeenSet) {
    payload.WithObject("tactic", m_tactic.Jsonize());
  }

  if (m_techniqueHasBeenSet) {
    payload.WithObject("technique", m_technique.Jsonize());
  }

  if (m_findingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> findingsJsonList(m_findings.size());
    for (unsigned findingsIndex = 0; findingsIndex < findingsJsonList.GetLength(); ++findingsIndex) {
      findingsJsonList[findingsIndex].AsObject(m_findings[findingsIndex].Jsonize());
    }
    payload.WithArray("findings", std::move(findingsJsonList));
  }

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
