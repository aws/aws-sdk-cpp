/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormItemEnablementSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationFormItemEnablementSource::EvaluationFormItemEnablementSource(JsonView jsonValue) { *this = jsonValue; }

EvaluationFormItemEnablementSource& EvaluationFormItemEnablementSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Type")) {
    m_type = EvaluationFormItemEnablementSourceTypeMapper::GetEvaluationFormItemEnablementSourceTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RefId")) {
    m_refId = jsonValue.GetString("RefId");
    m_refIdHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationFormItemEnablementSource::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type", EvaluationFormItemEnablementSourceTypeMapper::GetNameForEvaluationFormItemEnablementSourceType(m_type));
  }

  if (m_refIdHasBeenSet) {
    payload.WithString("RefId", m_refId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
