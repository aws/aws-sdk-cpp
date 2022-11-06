/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ListIPSetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIPSetsResult::ListIPSetsResult()
{
}

ListIPSetsResult::ListIPSetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListIPSetsResult& ListIPSetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ipSetIds"))
  {
    Aws::Utils::Array<JsonView> ipSetIdsJsonList = jsonValue.GetArray("ipSetIds");
    for(unsigned ipSetIdsIndex = 0; ipSetIdsIndex < ipSetIdsJsonList.GetLength(); ++ipSetIdsIndex)
    {
      m_ipSetIds.push_back(ipSetIdsJsonList[ipSetIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
