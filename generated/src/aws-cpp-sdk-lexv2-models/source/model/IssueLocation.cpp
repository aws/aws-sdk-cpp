/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lexv2-models/model/IssueLocation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LexModelsV2 {
namespace Model {

IssueLocation::IssueLocation(JsonView jsonValue) { *this = jsonValue; }

IssueLocation& IssueLocation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("botLocale")) {
    m_botLocale = jsonValue.GetString("botLocale");
    m_botLocaleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("intentId")) {
    m_intentId = jsonValue.GetString("intentId");
    m_intentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("slotId")) {
    m_slotId = jsonValue.GetString("slotId");
    m_slotIdHasBeenSet = true;
  }
  return *this;
}

JsonValue IssueLocation::Jsonize() const {
  JsonValue payload;

  if (m_botLocaleHasBeenSet) {
    payload.WithString("botLocale", m_botLocale);
  }

  if (m_intentIdHasBeenSet) {
    payload.WithString("intentId", m_intentId);
  }

  if (m_slotIdHasBeenSet) {
    payload.WithString("slotId", m_slotId);
  }

  return payload;
}

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
