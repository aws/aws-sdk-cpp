/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/GetImportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetImportResult::GetImportResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetImportResult& GetImportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ImportId"))
  {
    m_importId = jsonValue.GetString("ImportId");
    m_importIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Destinations"))
  {
    Aws::Utils::Array<JsonView> destinationsJsonList = jsonValue.GetArray("Destinations");
    for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
    {
      m_destinations.push_back(destinationsJsonList[destinationsIndex].AsString());
    }
    m_destinationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImportSource"))
  {
    m_importSource = jsonValue.GetObject("ImportSource");
    m_importSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartEventTime"))
  {
    m_startEventTime = jsonValue.GetDouble("StartEventTime");
    m_startEventTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndEventTime"))
  {
    m_endEventTime = jsonValue.GetDouble("EndEventTime");
    m_endEventTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImportStatus"))
  {
    m_importStatus = ImportStatusMapper::GetImportStatusForName(jsonValue.GetString("ImportStatus"));
    m_importStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");
    m_createdTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdatedTimestamp"))
  {
    m_updatedTimestamp = jsonValue.GetDouble("UpdatedTimestamp");
    m_updatedTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImportStatistics"))
  {
    m_importStatistics = jsonValue.GetObject("ImportStatistics");
    m_importStatisticsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
