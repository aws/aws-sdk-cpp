/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/StartDataTransformationJobRequest.h>

#include <utility>

using namespace Aws::HealthLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartDataTransformationJobRequest::SerializePayload() const {
  JsonValue payload;

  if (m_inputDataConfigHasBeenSet) {
    payload.WithObject("InputDataConfig", m_inputDataConfig.Jsonize());
  }

  if (m_outputDataConfigHasBeenSet) {
    payload.WithObject("OutputDataConfig", m_outputDataConfig.Jsonize());
  }

  if (m_dataAccessRoleArnHasBeenSet) {
    payload.WithString("DataAccessRoleArn", m_dataAccessRoleArn);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  if (m_jobNameHasBeenSet) {
    payload.WithString("JobName", m_jobName);
  }

  if (m_profileIdHasBeenSet) {
    payload.WithString("ProfileId", m_profileId);
  }

  if (m_driftDetectionEnabledHasBeenSet) {
    payload.WithBool("DriftDetectionEnabled", m_driftDetectionEnabled);
  }

  if (m_provenanceEnabledHasBeenSet) {
    payload.WithBool("ProvenanceEnabled", m_provenanceEnabled);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartDataTransformationJobRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "HealthLake.StartDataTransformationJob"));
  return headers;
}
