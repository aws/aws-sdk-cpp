/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/UpdateKxDataviewResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateKxDataviewResult::UpdateKxDataviewResult() : 
    m_azMode(KxAzMode::NOT_SET),
    m_status(KxDataviewStatus::NOT_SET),
    m_autoUpdate(false)
{
}

UpdateKxDataviewResult::UpdateKxDataviewResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_azMode(KxAzMode::NOT_SET),
    m_status(KxDataviewStatus::NOT_SET),
    m_autoUpdate(false)
{
  *this = result;
}

UpdateKxDataviewResult& UpdateKxDataviewResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");

  }

  if(jsonValue.ValueExists("databaseName"))
  {
    m_databaseName = jsonValue.GetString("databaseName");

  }

  if(jsonValue.ValueExists("dataviewName"))
  {
    m_dataviewName = jsonValue.GetString("dataviewName");

  }

  if(jsonValue.ValueExists("azMode"))
  {
    m_azMode = KxAzModeMapper::GetKxAzModeForName(jsonValue.GetString("azMode"));

  }

  if(jsonValue.ValueExists("availabilityZoneId"))
  {
    m_availabilityZoneId = jsonValue.GetString("availabilityZoneId");

  }

  if(jsonValue.ValueExists("changesetId"))
  {
    m_changesetId = jsonValue.GetString("changesetId");

  }

  if(jsonValue.ValueExists("segmentConfigurations"))
  {
    Aws::Utils::Array<JsonView> segmentConfigurationsJsonList = jsonValue.GetArray("segmentConfigurations");
    for(unsigned segmentConfigurationsIndex = 0; segmentConfigurationsIndex < segmentConfigurationsJsonList.GetLength(); ++segmentConfigurationsIndex)
    {
      m_segmentConfigurations.push_back(segmentConfigurationsJsonList[segmentConfigurationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("activeVersions"))
  {
    Aws::Utils::Array<JsonView> activeVersionsJsonList = jsonValue.GetArray("activeVersions");
    for(unsigned activeVersionsIndex = 0; activeVersionsIndex < activeVersionsJsonList.GetLength(); ++activeVersionsIndex)
    {
      m_activeVersions.push_back(activeVersionsJsonList[activeVersionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = KxDataviewStatusMapper::GetKxDataviewStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("autoUpdate"))
  {
    m_autoUpdate = jsonValue.GetBool("autoUpdate");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("createdTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("createdTimestamp");

  }

  if(jsonValue.ValueExists("lastModifiedTimestamp"))
  {
    m_lastModifiedTimestamp = jsonValue.GetDouble("lastModifiedTimestamp");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
