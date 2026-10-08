/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/MonthlyRecurrence.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

MonthlyRecurrence::MonthlyRecurrence(JsonView jsonValue) { *this = jsonValue; }

MonthlyRecurrence& MonthlyRecurrence::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dayOfMonth")) {
    m_dayOfMonth = jsonValue.GetInteger("dayOfMonth");
    m_dayOfMonthHasBeenSet = true;
  }
  return *this;
}

JsonValue MonthlyRecurrence::Jsonize() const {
  JsonValue payload;

  if (m_dayOfMonthHasBeenSet) {
    payload.WithInteger("dayOfMonth", m_dayOfMonth);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
