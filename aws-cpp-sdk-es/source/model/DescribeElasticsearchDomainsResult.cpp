/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/DescribeElasticsearchDomainsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeElasticsearchDomainsResult::DescribeElasticsearchDomainsResult()
{
}

DescribeElasticsearchDomainsResult::DescribeElasticsearchDomainsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeElasticsearchDomainsResult& DescribeElasticsearchDomainsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainStatusList"))
  {
    Aws::Utils::Array<JsonView> domainStatusListJsonList = jsonValue.GetArray("DomainStatusList");
    for(unsigned domainStatusListIndex = 0; domainStatusListIndex < domainStatusListJsonList.GetLength(); ++domainStatusListIndex)
    {
      m_domainStatusList.push_back(domainStatusListJsonList[domainStatusListIndex].AsObject());
    }
  }



  return *this;
}
