/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactAnalysisReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ContactAnalysisReference::ContactAnalysisReference(JsonView jsonValue) { *this = jsonValue; }

ContactAnalysisReference& ContactAnalysisReference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = ReferenceStatusMapper::GetReferenceStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AnalyticsMode")) {
    m_analyticsMode = AnalyticsModeMapper::GetAnalyticsModeForName(jsonValue.GetString("AnalyticsMode"));
    m_analyticsModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IsRedacted")) {
    m_isRedacted = jsonValue.GetBool("IsRedacted");
    m_isRedactedHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactAnalysisReference::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_valueHasBeenSet) {
    payload.WithString("Value", m_value);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", ReferenceStatusMapper::GetNameForReferenceStatus(m_status));
  }

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_analyticsModeHasBeenSet) {
    payload.WithString("AnalyticsMode", AnalyticsModeMapper::GetNameForAnalyticsMode(m_analyticsMode));
  }

  if (m_isRedactedHasBeenSet) {
    payload.WithBool("IsRedacted", m_isRedacted);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
