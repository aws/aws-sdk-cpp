/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/DeleteConnectorRequest.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteConnectorRequest::SerializePayload() const {
  JsonValue payload;

  if (m_connectorArnHasBeenSet) {
    payload.WithString("connectorArn", m_connectorArn);
  }

  return payload.View().WriteReadable();
}
