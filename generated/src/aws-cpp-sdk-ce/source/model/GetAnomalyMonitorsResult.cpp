/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetAnomalyMonitorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAnomalyMonitorsResult::GetAnomalyMonitorsResult()
{
}

GetAnomalyMonitorsResult::GetAnomalyMonitorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAnomalyMonitorsResult& GetAnomalyMonitorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AnomalyMonitors"))
  {
    Aws::Utils::Array<JsonView> anomalyMonitorsJsonList = jsonValue.GetArray("AnomalyMonitors");
    for(unsigned anomalyMonitorsIndex = 0; anomalyMonitorsIndex < anomalyMonitorsJsonList.GetLength(); ++anomalyMonitorsIndex)
    {
      m_anomalyMonitors.push_back(anomalyMonitorsJsonList[anomalyMonitorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }



  return *this;
}
