/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/deadline/model/StepDetailsEntity.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {

StepDetailsEntity::StepDetailsEntity(JsonView jsonValue) { *this = jsonValue; }

StepDetailsEntity& StepDetailsEntity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("jobId")) {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stepId")) {
    m_stepId = jsonValue.GetString("stepId");
    m_stepIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("schemaVersion")) {
    m_schemaVersion = jsonValue.GetString("schemaVersion");
    m_schemaVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("template")) {
    m_template = jsonValue.GetObject("template");
    m_templateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dependencies")) {
    Aws::Utils::Array<JsonView> dependenciesJsonList = jsonValue.GetArray("dependencies");
    for (unsigned dependenciesIndex = 0; dependenciesIndex < dependenciesJsonList.GetLength(); ++dependenciesIndex) {
      m_dependencies.push_back(dependenciesJsonList[dependenciesIndex].AsString());
    }
    m_dependenciesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("extensions")) {
    Aws::Utils::Array<JsonView> extensionsJsonList = jsonValue.GetArray("extensions");
    for (unsigned extensionsIndex = 0; extensionsIndex < extensionsJsonList.GetLength(); ++extensionsIndex) {
      m_extensions.push_back(extensionsJsonList[extensionsIndex].AsString());
    }
    m_extensionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resolvedSymbolTable")) {
    m_resolvedSymbolTable = jsonValue.GetString("resolvedSymbolTable");
    m_resolvedSymbolTableHasBeenSet = true;
  }
  return *this;
}

JsonValue StepDetailsEntity::Jsonize() const {
  JsonValue payload;

  if (m_jobIdHasBeenSet) {
    payload.WithString("jobId", m_jobId);
  }

  if (m_stepIdHasBeenSet) {
    payload.WithString("stepId", m_stepId);
  }

  if (m_schemaVersionHasBeenSet) {
    payload.WithString("schemaVersion", m_schemaVersion);
  }

  if (m_templateHasBeenSet) {
    if (!m_template.View().IsNull()) {
      payload.WithObject("template", JsonValue(m_template.View()));
    }
  }

  if (m_dependenciesHasBeenSet) {
    Aws::Utils::Array<JsonValue> dependenciesJsonList(m_dependencies.size());
    for (unsigned dependenciesIndex = 0; dependenciesIndex < dependenciesJsonList.GetLength(); ++dependenciesIndex) {
      dependenciesJsonList[dependenciesIndex].AsString(m_dependencies[dependenciesIndex]);
    }
    payload.WithArray("dependencies", std::move(dependenciesJsonList));
  }

  if (m_extensionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> extensionsJsonList(m_extensions.size());
    for (unsigned extensionsIndex = 0; extensionsIndex < extensionsJsonList.GetLength(); ++extensionsIndex) {
      extensionsJsonList[extensionsIndex].AsString(m_extensions[extensionsIndex]);
    }
    payload.WithArray("extensions", std::move(extensionsJsonList));
  }

  if (m_resolvedSymbolTableHasBeenSet) {
    payload.WithString("resolvedSymbolTable", m_resolvedSymbolTable);
  }

  return payload;
}

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
