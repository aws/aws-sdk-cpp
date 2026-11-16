/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/StartMedicalCodingJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectHealth::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartMedicalCodingJobRequest::SerializePayload() const {
  JsonValue payload;

  if (m_textHasBeenSet) {
    payload.WithString("text", m_text);
  }

  if (m_patientContextHasBeenSet) {
    payload.WithObject("patientContext", m_patientContext.Jsonize());
  }

  if (m_encounterContextHasBeenSet) {
    payload.WithObject("encounterContext", m_encounterContext.Jsonize());
  }

  if (m_outputDataConfigHasBeenSet) {
    payload.WithObject("outputDataConfig", m_outputDataConfig.Jsonize());
  }

  if (m_datasetIdHasBeenSet) {
    payload.WithString("datasetId", m_datasetId);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
