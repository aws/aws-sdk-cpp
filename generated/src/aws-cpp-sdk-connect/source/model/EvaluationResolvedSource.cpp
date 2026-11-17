/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationResolvedSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationResolvedSource::EvaluationResolvedSource(JsonView jsonValue) { *this = jsonValue; }

EvaluationResolvedSource& EvaluationResolvedSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Source")) {
    m_source = jsonValue.GetObject("Source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = EvaluationItemResolutionStatusMapper::GetEvaluationItemResolutionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Values")) {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for (unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex) {
      m_values.push_back(valuesJsonList[valuesIndex].AsObject());
    }
    m_valuesHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationResolvedSource::Jsonize() const {
  JsonValue payload;

  if (m_sourceHasBeenSet) {
    payload.WithObject("Source", m_source.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", EvaluationItemResolutionStatusMapper::GetNameForEvaluationItemResolutionStatus(m_status));
  }

  if (m_valuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
    for (unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex) {
      valuesJsonList[valuesIndex].AsObject(m_values[valuesIndex].Jsonize());
    }
    payload.WithArray("Values", std::move(valuesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
