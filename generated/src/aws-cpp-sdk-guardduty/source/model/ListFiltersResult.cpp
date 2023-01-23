/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ListFiltersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFiltersResult::ListFiltersResult()
{
}

ListFiltersResult::ListFiltersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFiltersResult& ListFiltersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("filterNames"))
  {
    Aws::Utils::Array<JsonView> filterNamesJsonList = jsonValue.GetArray("filterNames");
    for(unsigned filterNamesIndex = 0; filterNamesIndex < filterNamesJsonList.GetLength(); ++filterNamesIndex)
    {
      m_filterNames.push_back(filterNamesJsonList[filterNamesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
