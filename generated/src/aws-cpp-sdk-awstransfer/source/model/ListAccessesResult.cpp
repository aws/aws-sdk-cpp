/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ListAccessesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAccessesResult::ListAccessesResult()
{
}

ListAccessesResult::ListAccessesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAccessesResult& ListAccessesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ServerId"))
  {
    m_serverId = jsonValue.GetString("ServerId");

  }

  if(jsonValue.ValueExists("Accesses"))
  {
    Aws::Utils::Array<JsonView> accessesJsonList = jsonValue.GetArray("Accesses");
    for(unsigned accessesIndex = 0; accessesIndex < accessesJsonList.GetLength(); ++accessesIndex)
    {
      m_accesses.push_back(accessesJsonList[accessesIndex].AsObject());
    }
  }



  return *this;
}
