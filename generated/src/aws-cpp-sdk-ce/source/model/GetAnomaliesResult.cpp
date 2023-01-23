/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetAnomaliesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAnomaliesResult::GetAnomaliesResult()
{
}

GetAnomaliesResult::GetAnomaliesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAnomaliesResult& GetAnomaliesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Anomalies"))
  {
    Aws::Utils::Array<JsonView> anomaliesJsonList = jsonValue.GetArray("Anomalies");
    for(unsigned anomaliesIndex = 0; anomaliesIndex < anomaliesJsonList.GetLength(); ++anomaliesIndex)
    {
      m_anomalies.push_back(anomaliesJsonList[anomaliesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }



  return *this;
}
