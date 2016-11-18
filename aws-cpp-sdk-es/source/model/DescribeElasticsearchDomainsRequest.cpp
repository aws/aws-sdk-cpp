/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> domainNamesJsonList(m_domainNames.size());
   for(unsigned domainNamesIndex = 0; domainNamesIndex < domainNamesJsonList.GetLength(); ++domainNamesIndex)
   {
     domainNamesJsonList[domainNamesIndex].AsString(m_domainNames[domainNamesIndex]);
   }
   payload.WithArray("DomainNames", std::move(domainNamesJsonList));

  }

  return payload.WriteReadable();
}



