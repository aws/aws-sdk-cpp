/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ListResolverConfigsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListResolverConfigsResult::ListResolverConfigsResult()
{
}

ListResolverConfigsResult::ListResolverConfigsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListResolverConfigsResult& ListResolverConfigsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ResolverConfigs"))
  {
    Aws::Utils::Array<JsonView> resolverConfigsJsonList = jsonValue.GetArray("ResolverConfigs");
    for(unsigned resolverConfigsIndex = 0; resolverConfigsIndex < resolverConfigsJsonList.GetLength(); ++resolverConfigsIndex)
    {
      m_resolverConfigs.push_back(resolverConfigsJsonList[resolverConfigsIndex].AsObject());
    }
  }



  return *this;
}
