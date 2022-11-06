/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/BatchDeleteDetectorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTEventsData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDeleteDetectorResult::BatchDeleteDetectorResult()
{
}

BatchDeleteDetectorResult::BatchDeleteDetectorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchDeleteDetectorResult& BatchDeleteDetectorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("batchDeleteDetectorErrorEntries"))
  {
    Aws::Utils::Array<JsonView> batchDeleteDetectorErrorEntriesJsonList = jsonValue.GetArray("batchDeleteDetectorErrorEntries");
    for(unsigned batchDeleteDetectorErrorEntriesIndex = 0; batchDeleteDetectorErrorEntriesIndex < batchDeleteDetectorErrorEntriesJsonList.GetLength(); ++batchDeleteDetectorErrorEntriesIndex)
    {
      m_batchDeleteDetectorErrorEntries.push_back(batchDeleteDetectorErrorEntriesJsonList[batchDeleteDetectorErrorEntriesIndex].AsObject());
    }
  }



  return *this;
}
