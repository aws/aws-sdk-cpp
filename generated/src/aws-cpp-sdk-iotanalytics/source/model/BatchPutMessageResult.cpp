/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/BatchPutMessageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchPutMessageResult::BatchPutMessageResult()
{
}

BatchPutMessageResult::BatchPutMessageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchPutMessageResult& BatchPutMessageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("batchPutMessageErrorEntries"))
  {
    Aws::Utils::Array<JsonView> batchPutMessageErrorEntriesJsonList = jsonValue.GetArray("batchPutMessageErrorEntries");
    for(unsigned batchPutMessageErrorEntriesIndex = 0; batchPutMessageErrorEntriesIndex < batchPutMessageErrorEntriesJsonList.GetLength(); ++batchPutMessageErrorEntriesIndex)
    {
      m_batchPutMessageErrorEntries.push_back(batchPutMessageErrorEntriesJsonList[batchPutMessageErrorEntriesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
