/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ListResolverQueryLogConfigsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListResolverQueryLogConfigsResult::ListResolverQueryLogConfigsResult() : 
    m_totalCount(0),
    m_totalFilteredCount(0)
{
}

ListResolverQueryLogConfigsResult::ListResolverQueryLogConfigsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_totalCount(0),
    m_totalFilteredCount(0)
{
  *this = result;
}

ListResolverQueryLogConfigsResult& ListResolverQueryLogConfigsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("TotalCount"))
  {
    m_totalCount = jsonValue.GetInteger("TotalCount");

  }

  if(jsonValue.ValueExists("TotalFilteredCount"))
  {
    m_totalFilteredCount = jsonValue.GetInteger("TotalFilteredCount");

  }

  if(jsonValue.ValueExists("ResolverQueryLogConfigs"))
  {
    Aws::Utils::Array<JsonView> resolverQueryLogConfigsJsonList = jsonValue.GetArray("ResolverQueryLogConfigs");
    for(unsigned resolverQueryLogConfigsIndex = 0; resolverQueryLogConfigsIndex < resolverQueryLogConfigsJsonList.GetLength(); ++resolverQueryLogConfigsIndex)
    {
      m_resolverQueryLogConfigs.push_back(resolverQueryLogConfigsJsonList[resolverQueryLogConfigsIndex].AsObject());
    }
  }



  return *this;
}
