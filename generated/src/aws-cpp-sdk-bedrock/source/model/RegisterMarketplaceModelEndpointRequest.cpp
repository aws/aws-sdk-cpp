/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/RegisterMarketplaceModelEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RegisterMarketplaceModelEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelSourceIdentifierHasBeenSet)
  {
   payload.WithString("modelSourceIdentifier", m_modelSourceIdentifier);

  }

  return payload.View().WriteReadable();
}




