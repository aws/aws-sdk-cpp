/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iam-toolbox/model/MatchedPolicy.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IAMToolbox {
namespace Model {

MatchedPolicy::MatchedPolicy(JsonView jsonValue) { *this = jsonValue; }

MatchedPolicy& MatchedPolicy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("uri")) {
    m_uri = jsonValue.GetString("uri");
    m_uriHasBeenSet = true;
  }
  if (jsonValue.ValueExists("matchedStatements")) {
    Aws::Utils::Array<JsonView> matchedStatementsJsonList = jsonValue.GetArray("matchedStatements");
    for (unsigned matchedStatementsIndex = 0; matchedStatementsIndex < matchedStatementsJsonList.GetLength(); ++matchedStatementsIndex) {
      m_matchedStatements.push_back(matchedStatementsJsonList[matchedStatementsIndex].AsObject());
    }
    m_matchedStatementsHasBeenSet = true;
  }
  return *this;
}

JsonValue MatchedPolicy::Jsonize() const {
  JsonValue payload;

  if (m_uriHasBeenSet) {
    payload.WithString("uri", m_uri);
  }

  if (m_matchedStatementsHasBeenSet) {
    Aws::Utils::Array<JsonValue> matchedStatementsJsonList(m_matchedStatements.size());
    for (unsigned matchedStatementsIndex = 0; matchedStatementsIndex < matchedStatementsJsonList.GetLength(); ++matchedStatementsIndex) {
      matchedStatementsJsonList[matchedStatementsIndex].AsObject(m_matchedStatements[matchedStatementsIndex].Jsonize());
    }
    payload.WithArray("matchedStatements", std::move(matchedStatementsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace IAMToolbox
}  // namespace Aws
