/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/StartAnalysisLogExportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartAnalysisLogExportRequest::SerializePayload() const {
  JsonValue payload;

  if (m_analysisIdHasBeenSet) {
    payload.WithString("analysisId", m_analysisId);
  }

  if (m_analysisTypeHasBeenSet) {
    payload.WithString("analysisType", LogExportAnalysisTypeMapper::GetNameForLogExportAnalysisType(m_analysisType));
  }

  if (m_resultConfigurationHasBeenSet) {
    payload.WithObject("resultConfiguration", m_resultConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}
