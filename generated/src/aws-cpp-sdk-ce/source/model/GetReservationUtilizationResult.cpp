/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetReservationUtilizationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetReservationUtilizationResult::GetReservationUtilizationResult()
{
}

GetReservationUtilizationResult::GetReservationUtilizationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetReservationUtilizationResult& GetReservationUtilizationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UtilizationsByTime"))
  {
    Aws::Utils::Array<JsonView> utilizationsByTimeJsonList = jsonValue.GetArray("UtilizationsByTime");
    for(unsigned utilizationsByTimeIndex = 0; utilizationsByTimeIndex < utilizationsByTimeJsonList.GetLength(); ++utilizationsByTimeIndex)
    {
      m_utilizationsByTime.push_back(utilizationsByTimeJsonList[utilizationsByTimeIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Total"))
  {
    m_total = jsonValue.GetObject("Total");

  }

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }



  return *this;
}
