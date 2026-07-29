/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/CreateDatasetExportJobRequest.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDatasetExportJobRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_destinationS3UriHasBeenSet) {
    payload.WithString("destinationS3Uri", m_destinationS3Uri);
  }

  if (m_inputHasBeenSet) {
    payload.WithObject("input", m_input.Jsonize());
  }

  if (m_errorReportLocationHasBeenSet) {
    payload.WithObject("errorReportLocation", m_errorReportLocation.Jsonize());
  }

  return payload.View().WriteReadable();
}
