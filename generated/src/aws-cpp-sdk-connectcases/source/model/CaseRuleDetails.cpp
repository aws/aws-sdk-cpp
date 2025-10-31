/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/CaseRuleDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {

CaseRuleDetails::CaseRuleDetails(JsonView jsonValue) { *this = jsonValue; }

CaseRuleDetails& CaseRuleDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("required")) {
    m_required = jsonValue.GetObject("required");
    m_requiredHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fieldOptions")) {
    m_fieldOptions = jsonValue.GetObject("fieldOptions");
    m_fieldOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hidden")) {
    m_hidden = jsonValue.GetObject("hidden");
    m_hiddenHasBeenSet = true;
  }
  return *this;
}

JsonValue CaseRuleDetails::Jsonize() const {
  JsonValue payload;

  if (m_requiredHasBeenSet) {
    payload.WithObject("required", m_required.Jsonize());
  }

  if (m_fieldOptionsHasBeenSet) {
    payload.WithObject("fieldOptions", m_fieldOptions.Jsonize());
  }

  if (m_hiddenHasBeenSet) {
    payload.WithObject("hidden", m_hidden.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
