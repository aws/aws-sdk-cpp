/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DescribeDomainControllersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDomainControllersResult::DescribeDomainControllersResult()
{
}

DescribeDomainControllersResult::DescribeDomainControllersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDomainControllersResult& DescribeDomainControllersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainControllers"))
  {
    Aws::Utils::Array<JsonView> domainControllersJsonList = jsonValue.GetArray("DomainControllers");
    for(unsigned domainControllersIndex = 0; domainControllersIndex < domainControllersJsonList.GetLength(); ++domainControllersIndex)
    {
      m_domainControllers.push_back(domainControllersJsonList[domainControllersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
