/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/ListIpRoutesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIpRoutesResult::ListIpRoutesResult()
{
}

ListIpRoutesResult::ListIpRoutesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListIpRoutesResult& ListIpRoutesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IpRoutesInfo"))
  {
    Aws::Utils::Array<JsonView> ipRoutesInfoJsonList = jsonValue.GetArray("IpRoutesInfo");
    for(unsigned ipRoutesInfoIndex = 0; ipRoutesInfoIndex < ipRoutesInfoJsonList.GetLength(); ++ipRoutesInfoIndex)
    {
      m_ipRoutesInfo.push_back(ipRoutesInfoJsonList[ipRoutesInfoIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
