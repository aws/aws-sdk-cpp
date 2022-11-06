/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/GetImportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetImportResult::GetImportResult() : 
    m_importStatus(ImportStatus::NOT_SET)
{
}

GetImportResult::GetImportResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_importStatus(ImportStatus::NOT_SET)
{
  *this = result;
}

GetImportResult& GetImportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ImportId"))
  {
    m_importId = jsonValue.GetString("ImportId");

  }

  if(jsonValue.ValueExists("Destinations"))
  {
    Aws::Utils::Array<JsonView> destinationsJsonList = jsonValue.GetArray("Destinations");
    for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
    {
      m_destinations.push_back(destinationsJsonList[destinationsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("ImportSource"))
  {
    m_importSource = jsonValue.GetObject("ImportSource");

  }

  if(jsonValue.ValueExists("StartEventTime"))
  {
    m_startEventTime = jsonValue.GetDouble("StartEventTime");

  }

  if(jsonValue.ValueExists("EndEventTime"))
  {
    m_endEventTime = jsonValue.GetDouble("EndEventTime");

  }

  if(jsonValue.ValueExists("ImportStatus"))
  {
    m_importStatus = ImportStatusMapper::GetImportStatusForName(jsonValue.GetString("ImportStatus"));

  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

  }

  if(jsonValue.ValueExists("UpdatedTimestamp"))
  {
    m_updatedTimestamp = jsonValue.GetDouble("UpdatedTimestamp");

  }

  if(jsonValue.ValueExists("ImportStatistics"))
  {
    m_importStatistics = jsonValue.GetObject("ImportStatistics");

  }



  return *this;
}
