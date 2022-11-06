/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ListUsageTotalsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListUsageTotalsResult::ListUsageTotalsResult()
{
}

ListUsageTotalsResult::ListUsageTotalsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListUsageTotalsResult& ListUsageTotalsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("totals"))
  {
    Aws::Utils::Array<JsonView> totalsJsonList = jsonValue.GetArray("totals");
    for(unsigned totalsIndex = 0; totalsIndex < totalsJsonList.GetLength(); ++totalsIndex)
    {
      m_totals.push_back(totalsJsonList[totalsIndex].AsObject());
    }
  }



  return *this;
}
