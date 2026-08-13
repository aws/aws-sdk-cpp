/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/DiffChange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CodeCommit {
namespace Model {

DiffChange::DiffChange(JsonView jsonValue) { *this = jsonValue; }

DiffChange& DiffChange::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = DiffChangeTypeMapper::GetDiffChangeTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("beforeLineNumber")) {
    m_beforeLineNumber = jsonValue.GetInteger("beforeLineNumber");
    m_beforeLineNumberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("afterLineNumber")) {
    m_afterLineNumber = jsonValue.GetInteger("afterLineNumber");
    m_afterLineNumberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("content")) {
    m_content = jsonValue.GetString("content");
    m_contentHasBeenSet = true;
  }
  return *this;
}

JsonValue DiffChange::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", DiffChangeTypeMapper::GetNameForDiffChangeType(m_type));
  }

  if (m_beforeLineNumberHasBeenSet) {
    payload.WithInteger("beforeLineNumber", m_beforeLineNumber);
  }

  if (m_afterLineNumberHasBeenSet) {
    payload.WithInteger("afterLineNumber", m_afterLineNumber);
  }

  if (m_contentHasBeenSet) {
    payload.WithString("content", m_content);
  }

  return payload;
}

}  // namespace Model
}  // namespace CodeCommit
}  // namespace Aws
