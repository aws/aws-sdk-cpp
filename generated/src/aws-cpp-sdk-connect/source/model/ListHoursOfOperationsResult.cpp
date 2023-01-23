/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListHoursOfOperationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListHoursOfOperationsResult::ListHoursOfOperationsResult()
{
}

ListHoursOfOperationsResult::ListHoursOfOperationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListHoursOfOperationsResult& ListHoursOfOperationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HoursOfOperationSummaryList"))
  {
    Aws::Utils::Array<JsonView> hoursOfOperationSummaryListJsonList = jsonValue.GetArray("HoursOfOperationSummaryList");
    for(unsigned hoursOfOperationSummaryListIndex = 0; hoursOfOperationSummaryListIndex < hoursOfOperationSummaryListJsonList.GetLength(); ++hoursOfOperationSummaryListIndex)
    {
      m_hoursOfOperationSummaryList.push_back(hoursOfOperationSummaryListJsonList[hoursOfOperationSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
