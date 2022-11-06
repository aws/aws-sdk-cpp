/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/ListAllowListsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAllowListsResult::ListAllowListsResult()
{
}

ListAllowListsResult::ListAllowListsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAllowListsResult& ListAllowListsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("allowLists"))
  {
    Aws::Utils::Array<JsonView> allowListsJsonList = jsonValue.GetArray("allowLists");
    for(unsigned allowListsIndex = 0; allowListsIndex < allowListsJsonList.GetLength(); ++allowListsIndex)
    {
      m_allowLists.push_back(allowListsJsonList[allowListsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
