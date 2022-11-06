/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/ListDetectorModelVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDetectorModelVersionsResult::ListDetectorModelVersionsResult()
{
}

ListDetectorModelVersionsResult::ListDetectorModelVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDetectorModelVersionsResult& ListDetectorModelVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("detectorModelVersionSummaries"))
  {
    Aws::Utils::Array<JsonView> detectorModelVersionSummariesJsonList = jsonValue.GetArray("detectorModelVersionSummaries");
    for(unsigned detectorModelVersionSummariesIndex = 0; detectorModelVersionSummariesIndex < detectorModelVersionSummariesJsonList.GetLength(); ++detectorModelVersionSummariesIndex)
    {
      m_detectorModelVersionSummaries.push_back(detectorModelVersionSummariesJsonList[detectorModelVersionSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
