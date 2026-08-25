/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iam-toolbox/model/MatchedStatement.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IAMToolbox {
namespace Model {

MatchedStatement::MatchedStatement(JsonView jsonValue) { *this = jsonValue; }

MatchedStatement& MatchedStatement::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sid")) {
    m_sid = jsonValue.GetString("sid");
    m_sidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluatedEffect")) {
    m_evaluatedEffect = StatementEffectMapper::GetStatementEffectForName(jsonValue.GetString("evaluatedEffect"));
    m_evaluatedEffectHasBeenSet = true;
  }
  return *this;
}

JsonValue MatchedStatement::Jsonize() const {
  JsonValue payload;

  if (m_sidHasBeenSet) {
    payload.WithString("sid", m_sid);
  }

  if (m_evaluatedEffectHasBeenSet) {
    payload.WithString("evaluatedEffect", StatementEffectMapper::GetNameForStatementEffect(m_evaluatedEffect));
  }

  return payload;
}

}  // namespace Model
}  // namespace IAMToolbox
}  // namespace Aws
