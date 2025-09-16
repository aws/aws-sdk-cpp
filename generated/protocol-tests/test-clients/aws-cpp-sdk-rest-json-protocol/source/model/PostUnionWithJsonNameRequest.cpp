/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rest-json-protocol/model/PostUnionWithJsonNameRequest.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PostUnionWithJsonNameRequest::SerializePayload() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithObject("value", m_value.Jsonize());
  }

  return payload.View().WriteReadable();
}
