/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/CreateQuestionSetVersionRequest.h>

#include <utility>

using namespace Aws::ElementalInference::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateQuestionSetVersionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_sha256HasBeenSet) {
    payload.WithString("sha256", m_sha256);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  return payload.View().WriteReadable();
}
