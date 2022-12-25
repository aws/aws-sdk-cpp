/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/ListDomainNamesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDomainNamesResult::ListDomainNamesResult()
{
}

ListDomainNamesResult::ListDomainNamesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDomainNamesResult& ListDomainNamesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("domainNameConfigs"))
  {
    Aws::Utils::Array<JsonView> domainNameConfigsJsonList = jsonValue.GetArray("domainNameConfigs");
    for(unsigned domainNameConfigsIndex = 0; domainNameConfigsIndex < domainNameConfigsJsonList.GetLength(); ++domainNameConfigsIndex)
    {
      m_domainNameConfigs.push_back(domainNameConfigsJsonList[domainNameConfigsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
