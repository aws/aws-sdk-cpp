/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/DescribeElasticsearchDomainsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeElasticsearchDomainsRequest::DescribeElasticsearchDomainsRequest() : 
    m_domainNamesHasBeenSet(false)
{
}

Aws::String DescribeElasticsearchDomainsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> domainNamesJsonList(m_domainNames.size());
   for(unsigned domainNamesIndex = 0; domainNamesIndex < domainNamesJsonList.GetLength(); ++domainNamesIndex)
   {
     domainNamesJsonList[domainNamesIndex].AsString(m_domainNames[domainNamesIndex]);
   }
   payload.WithArray("DomainNames", std::move(domainNamesJsonList));

  }

  return payload.View().WriteReadable();
}




