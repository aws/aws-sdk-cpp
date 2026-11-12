/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/Process.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

Process::Process(JsonView jsonValue) { *this = jsonValue; }

Process& Process::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("uuid")) {
    m_uuid = jsonValue.GetString("uuid");
    m_uuidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("path")) {
    m_path = jsonValue.GetString("path");
    m_pathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("parentUuid")) {
    m_parentUuid = jsonValue.GetString("parentUuid");
    m_parentUuidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findings")) {
    Aws::Utils::Array<JsonView> findingsJsonList = jsonValue.GetArray("findings");
    for (unsigned findingsIndex = 0; findingsIndex < findingsJsonList.GetLength(); ++findingsIndex) {
      m_findings.push_back(findingsJsonList[findingsIndex].AsObject());
    }
    m_findingsHasBeenSet = true;
  }
  return *this;
}

JsonValue Process::Jsonize() const {
  JsonValue payload;

  if (m_uuidHasBeenSet) {
    payload.WithString("uuid", m_uuid);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_pathHasBeenSet) {
    payload.WithString("path", m_path);
  }

  if (m_parentUuidHasBeenSet) {
    payload.WithString("parentUuid", m_parentUuid);
  }

  if (m_findingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> findingsJsonList(m_findings.size());
    for (unsigned findingsIndex = 0; findingsIndex < findingsJsonList.GetLength(); ++findingsIndex) {
      findingsJsonList[findingsIndex].AsObject(m_findings[findingsIndex].Jsonize());
    }
    payload.WithArray("findings", std::move(findingsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
