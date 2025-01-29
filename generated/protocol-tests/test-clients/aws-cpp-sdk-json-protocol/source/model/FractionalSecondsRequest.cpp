/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/json-protocol/model/FractionalSecondsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::JsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

FractionalSecondsRequest::FractionalSecondsRequest()
{
}

Aws::String FractionalSecondsRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection FractionalSecondsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "JsonProtocol.FractionalSeconds"));
  return headers;

}




