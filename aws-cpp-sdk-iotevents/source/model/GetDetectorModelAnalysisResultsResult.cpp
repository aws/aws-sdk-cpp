/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/GetDetectorModelAnalysisResultsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDetectorModelAnalysisResultsResult::GetDetectorModelAnalysisResultsResult()
{
}

GetDetectorModelAnalysisResultsResult::GetDetectorModelAnalysisResultsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDetectorModelAnalysisResultsResult& GetDetectorModelAnalysisResultsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("analysisResults"))
  {
    Aws::Utils::Array<JsonView> analysisResultsJsonList = jsonValue.GetArray("analysisResults");
    for(unsigned analysisResultsIndex = 0; analysisResultsIndex < analysisResultsJsonList.GetLength(); ++analysisResultsIndex)
    {
      m_analysisResults.push_back(analysisResultsJsonList[analysisResultsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
