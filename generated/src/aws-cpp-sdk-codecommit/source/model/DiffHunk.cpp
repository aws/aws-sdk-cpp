/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/DiffHunk.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CodeCommit {
namespace Model {

DiffHunk::DiffHunk(JsonView jsonValue) { *this = jsonValue; }

DiffHunk& DiffHunk::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("beforeStartLine")) {
    m_beforeStartLine = jsonValue.GetInteger("beforeStartLine");
    m_beforeStartLineHasBeenSet = true;
  }
  if (jsonValue.ValueExists("beforeLineCount")) {
    m_beforeLineCount = jsonValue.GetInteger("beforeLineCount");
    m_beforeLineCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("afterStartLine")) {
    m_afterStartLine = jsonValue.GetInteger("afterStartLine");
    m_afterStartLineHasBeenSet = true;
  }
  if (jsonValue.ValueExists("afterLineCount")) {
    m_afterLineCount = jsonValue.GetInteger("afterLineCount");
    m_afterLineCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("changes")) {
    Aws::Utils::Array<JsonView> changesJsonList = jsonValue.GetArray("changes");
    for (unsigned changesIndex = 0; changesIndex < changesJsonList.GetLength(); ++changesIndex) {
      m_changes.push_back(changesJsonList[changesIndex].AsObject());
    }
    m_changesHasBeenSet = true;
  }
  return *this;
}

JsonValue DiffHunk::Jsonize() const {
  JsonValue payload;

  if (m_beforeStartLineHasBeenSet) {
    payload.WithInteger("beforeStartLine", m_beforeStartLine);
  }

  if (m_beforeLineCountHasBeenSet) {
    payload.WithInteger("beforeLineCount", m_beforeLineCount);
  }

  if (m_afterStartLineHasBeenSet) {
    payload.WithInteger("afterStartLine", m_afterStartLine);
  }

  if (m_afterLineCountHasBeenSet) {
    payload.WithInteger("afterLineCount", m_afterLineCount);
  }

  if (m_changesHasBeenSet) {
    Aws::Utils::Array<JsonValue> changesJsonList(m_changes.size());
    for (unsigned changesIndex = 0; changesIndex < changesJsonList.GetLength(); ++changesIndex) {
      changesJsonList[changesIndex].AsObject(m_changes[changesIndex].Jsonize());
    }
    payload.WithArray("changes", std::move(changesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace CodeCommit
}  // namespace Aws
