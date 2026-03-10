/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lexv2-models/model/StartBotAnalyzerRequest.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartBotAnalyzerRequest::SerializePayload() const {
  JsonValue payload;

  if (m_analysisScopeHasBeenSet) {
    payload.WithString("analysisScope", AnalysisScopeMapper::GetNameForAnalysisScope(m_analysisScope));
  }

  if (m_localeIdHasBeenSet) {
    payload.WithString("localeId", m_localeId);
  }

  if (m_botVersionHasBeenSet) {
    payload.WithString("botVersion", m_botVersion);
  }

  return payload.View().WriteReadable();
}
