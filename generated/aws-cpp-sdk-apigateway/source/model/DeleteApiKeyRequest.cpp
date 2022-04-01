/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/DeleteApiKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteApiKeyRequest::DeleteApiKeyRequest() : 
    m_apiKeyHasBeenSet(false)
{
}

Aws::String DeleteApiKeyRequest::SerializePayload() const
{
  return {};
}




