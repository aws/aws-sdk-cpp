/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/ListEulaAcceptancesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEulaAcceptancesResult::ListEulaAcceptancesResult()
{
}

ListEulaAcceptancesResult::ListEulaAcceptancesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEulaAcceptancesResult& ListEulaAcceptancesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("eulaAcceptances"))
  {
    Aws::Utils::Array<JsonView> eulaAcceptancesJsonList = jsonValue.GetArray("eulaAcceptances");
    for(unsigned eulaAcceptancesIndex = 0; eulaAcceptancesIndex < eulaAcceptancesJsonList.GetLength(); ++eulaAcceptancesIndex)
    {
      m_eulaAcceptances.push_back(eulaAcceptancesJsonList[eulaAcceptancesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
