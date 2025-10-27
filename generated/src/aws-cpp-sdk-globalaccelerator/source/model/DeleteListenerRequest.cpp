/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/globalaccelerator/model/DeleteListenerRequest.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteListenerRequest::SerializePayload() const {
  JsonValue payload;

  if (m_listenerArnHasBeenSet) {
    payload.WithString("ListenerArn", m_listenerArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteListenerRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GlobalAccelerator_V20180706.DeleteListener"));
  return headers;
}
