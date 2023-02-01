/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/ListDataSetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DataExchange::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDataSetsResult::ListDataSetsResult()
{
}

ListDataSetsResult::ListDataSetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDataSetsResult& ListDataSetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DataSets"))
  {
    Aws::Utils::Array<JsonView> dataSetsJsonList = jsonValue.GetArray("DataSets");
    for(unsigned dataSetsIndex = 0; dataSetsIndex < dataSetsJsonList.GetLength(); ++dataSetsIndex)
    {
      m_dataSets.push_back(dataSetsJsonList[dataSetsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
