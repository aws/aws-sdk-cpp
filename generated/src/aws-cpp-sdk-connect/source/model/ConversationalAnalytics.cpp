/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ConversationalAnalytics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ConversationalAnalytics::ConversationalAnalytics(JsonView jsonValue) { *this = jsonValue; }

ConversationalAnalytics& ConversationalAnalytics::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Configuration")) {
    m_configuration = jsonValue.GetObject("Configuration");
    m_configurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContactAnalysisReferenceState")) {
    m_contactAnalysisReferenceState = jsonValue.GetObject("ContactAnalysisReferenceState");
    m_contactAnalysisReferenceStateHasBeenSet = true;
  }
  return *this;
}

JsonValue ConversationalAnalytics::Jsonize() const {
  JsonValue payload;

  if (m_configurationHasBeenSet) {
    payload.WithObject("Configuration", m_configuration.Jsonize());
  }

  if (m_contactAnalysisReferenceStateHasBeenSet) {
    payload.WithObject("ContactAnalysisReferenceState", m_contactAnalysisReferenceState.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
