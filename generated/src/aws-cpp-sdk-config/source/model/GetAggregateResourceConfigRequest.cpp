/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/GetAggregateResourceConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAggregateResourceConfigRequest::GetAggregateResourceConfigRequest() : 
    m_configurationAggregatorNameHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false)
{
}

Aws::String GetAggregateResourceConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationAggregatorNameHasBeenSet)
  {
   payload.WithString("ConfigurationAggregatorName", m_configurationAggregatorName);

  }

  if(m_resourceIdentifierHasBeenSet)
  {
   payload.WithObject("ResourceIdentifier", m_resourceIdentifier.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetAggregateResourceConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.GetAggregateResourceConfig"));
  return headers;

}




