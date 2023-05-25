/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/StartElasticsearchServiceSoftwareUpdateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartElasticsearchServiceSoftwareUpdateRequest::StartElasticsearchServiceSoftwareUpdateRequest() : 
    m_domainNameHasBeenSet(false)
{
}

Aws::String StartElasticsearchServiceSoftwareUpdateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  return payload.View().WriteReadable();
}




