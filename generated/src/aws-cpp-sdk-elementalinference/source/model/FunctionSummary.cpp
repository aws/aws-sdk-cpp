/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/FunctionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

FunctionSummary::FunctionSummary(JsonView jsonValue) { *this = jsonValue; }

FunctionSummary& FunctionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = FunctionStatusMapper::GetFunctionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("target")) {
    m_target = jsonValue.GetObject("target");
    m_targetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contextTypes")) {
    Aws::Utils::Array<JsonView> contextTypesJsonList = jsonValue.GetArray("contextTypes");
    for (unsigned contextTypesIndex = 0; contextTypesIndex < contextTypesJsonList.GetLength(); ++contextTypesIndex) {
      m_contextTypes.push_back(ContextTypeMapper::GetContextTypeForName(contextTypesJsonList[contextTypesIndex].AsString()));
    }
    m_contextTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue FunctionSummary::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", FunctionStatusMapper::GetNameForFunctionStatus(m_status));
  }

  if (m_targetHasBeenSet) {
    payload.WithObject("target", m_target.Jsonize());
  }

  if (m_contextTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> contextTypesJsonList(m_contextTypes.size());
    for (unsigned contextTypesIndex = 0; contextTypesIndex < contextTypesJsonList.GetLength(); ++contextTypesIndex) {
      contextTypesJsonList[contextTypesIndex].AsString(ContextTypeMapper::GetNameForContextType(m_contextTypes[contextTypesIndex]));
    }
    payload.WithArray("contextTypes", std::move(contextTypesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
