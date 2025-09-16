/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rest-json-protocol/model/EndpointWithHostLabelOperationRequest.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String EndpointWithHostLabelOperationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_labelHasBeenSet) {
    payload.WithString("label", m_label);
  }

  return payload.View().WriteReadable();
}
