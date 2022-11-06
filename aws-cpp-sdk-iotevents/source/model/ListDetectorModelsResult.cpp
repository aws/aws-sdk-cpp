/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/ListDetectorModelsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDetectorModelsResult::ListDetectorModelsResult()
{
}

ListDetectorModelsResult::ListDetectorModelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDetectorModelsResult& ListDetectorModelsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("detectorModelSummaries"))
  {
    Aws::Utils::Array<JsonView> detectorModelSummariesJsonList = jsonValue.GetArray("detectorModelSummaries");
    for(unsigned detectorModelSummariesIndex = 0; detectorModelSummariesIndex < detectorModelSummariesJsonList.GetLength(); ++detectorModelSummariesIndex)
    {
      m_detectorModelSummaries.push_back(detectorModelSummariesJsonList[detectorModelSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
