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
#include <aws/es/model/DescribeElasticsearchDomainsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeElasticsearchDomainsResult::DescribeElasticsearchDomainsResult()
{
}

DescribeElasticsearchDomainsResult::DescribeElasticsearchDomainsResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeElasticsearchDomainsResult& DescribeElasticsearchDomainsResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("DomainStatusList"))
  {
    Array<JsonValue> domainStatusListJsonList = jsonValue.GetArray("DomainStatusList");
    for(unsigned domainStatusListIndex = 0; domainStatusListIndex < domainStatusListJsonList.GetLength(); ++domainStatusListIndex)
    {
      m_domainStatusList.push_back(domainStatusListJsonList[domainStatusListIndex].AsObject());
    }
  }



  return *this;
}
