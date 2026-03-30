/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/ReferenceInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

ReferenceInput::ReferenceInput(JsonView jsonValue) { *this = jsonValue; }

ReferenceInput& ReferenceInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("system")) {
    m_system = jsonValue.GetString("system");
    m_systemHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("referenceId")) {
    m_referenceId = jsonValue.GetString("referenceId");
    m_referenceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("referenceUrl")) {
    m_referenceUrl = jsonValue.GetString("referenceUrl");
    m_referenceUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associationId")) {
    m_associationId = jsonValue.GetString("associationId");
    m_associationIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ReferenceInput::Jsonize() const {
  JsonValue payload;

  if (m_systemHasBeenSet) {
    payload.WithString("system", m_system);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_referenceIdHasBeenSet) {
    payload.WithString("referenceId", m_referenceId);
  }

  if (m_referenceUrlHasBeenSet) {
    payload.WithString("referenceUrl", m_referenceUrl);
  }

  if (m_associationIdHasBeenSet) {
    payload.WithString("associationId", m_associationId);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
