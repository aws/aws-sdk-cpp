/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/ExperimentRunResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AppConfig {
namespace Model {

ExperimentRunResult::ExperimentRunResult(JsonView jsonValue) { *this = jsonValue; }

ExperimentRunResult& ExperimentRunResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ExecutiveSummary")) {
    m_executiveSummary = jsonValue.GetString("ExecutiveSummary");
    m_executiveSummaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReasonsToLaunch")) {
    m_reasonsToLaunch = jsonValue.GetString("ReasonsToLaunch");
    m_reasonsToLaunchHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReasonsNotToLaunch")) {
    m_reasonsNotToLaunch = jsonValue.GetString("ReasonsNotToLaunch");
    m_reasonsNotToLaunchHasBeenSet = true;
  }
  return *this;
}

JsonValue ExperimentRunResult::Jsonize() const {
  JsonValue payload;

  if (m_executiveSummaryHasBeenSet) {
    payload.WithString("ExecutiveSummary", m_executiveSummary);
  }

  if (m_reasonsToLaunchHasBeenSet) {
    payload.WithString("ReasonsToLaunch", m_reasonsToLaunch);
  }

  if (m_reasonsNotToLaunchHasBeenSet) {
    payload.WithString("ReasonsNotToLaunch", m_reasonsNotToLaunch);
  }

  return payload;
}

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
