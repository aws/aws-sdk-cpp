/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/ListLogAnomalyDetectorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLogAnomalyDetectorsResult::ListLogAnomalyDetectorsResult()
{
}

ListLogAnomalyDetectorsResult::ListLogAnomalyDetectorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLogAnomalyDetectorsResult& ListLogAnomalyDetectorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("anomalyDetectors"))
  {
    Aws::Utils::Array<JsonView> anomalyDetectorsJsonList = jsonValue.GetArray("anomalyDetectors");
    for(unsigned anomalyDetectorsIndex = 0; anomalyDetectorsIndex < anomalyDetectorsJsonList.GetLength(); ++anomalyDetectorsIndex)
    {
      m_anomalyDetectors.push_back(anomalyDetectorsJsonList[anomalyDetectorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
