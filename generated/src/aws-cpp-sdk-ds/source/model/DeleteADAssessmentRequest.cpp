﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ds/model/DeleteADAssessmentRequest.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteADAssessmentRequest::SerializePayload() const {
  JsonValue payload;

  if (m_assessmentIdHasBeenSet) {
    payload.WithString("AssessmentId", m_assessmentId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteADAssessmentRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.DeleteADAssessment"));
  return headers;
}
