/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/ListDetectorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTEventsData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDetectorsResult::ListDetectorsResult()
{
}

ListDetectorsResult::ListDetectorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDetectorsResult& ListDetectorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("detectorSummaries"))
  {
    Aws::Utils::Array<JsonView> detectorSummariesJsonList = jsonValue.GetArray("detectorSummaries");
    for(unsigned detectorSummariesIndex = 0; detectorSummariesIndex < detectorSummariesJsonList.GetLength(); ++detectorSummariesIndex)
    {
      m_detectorSummaries.push_back(detectorSummariesJsonList[detectorSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
