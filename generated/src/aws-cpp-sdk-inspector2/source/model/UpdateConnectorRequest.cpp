/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/UpdateConnectorRequest.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateConnectorRequest::SerializePayload() const {
  JsonValue payload;

  if (m_connectorArnHasBeenSet) {
    payload.WithString("connectorArn", m_connectorArn);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_providerDetailHasBeenSet) {
    payload.WithObject("providerDetail", m_providerDetail.Jsonize());
  }

  return payload.View().WriteReadable();
}
