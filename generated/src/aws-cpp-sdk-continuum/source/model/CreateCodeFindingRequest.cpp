/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/CreateCodeFindingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Continuum::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateCodeFindingRequest::SerializePayload() const {
  JsonValue payload;

  if (m_ocsfDocumentHasBeenSet) {
    if (!m_ocsfDocument.View().IsNull()) {
      payload.WithObject("ocsfDocument", JsonValue(m_ocsfDocument.View()));
    }
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
