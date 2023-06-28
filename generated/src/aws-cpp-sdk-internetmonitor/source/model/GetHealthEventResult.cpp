/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/GetHealthEventResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::InternetMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetHealthEventResult::GetHealthEventResult() : 
    m_status(HealthEventStatus::NOT_SET),
    m_percentOfTotalTrafficImpacted(0.0),
    m_impactType(HealthEventImpactType::NOT_SET),
    m_healthScoreThreshold(0.0)
{
}

GetHealthEventResult::GetHealthEventResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(HealthEventStatus::NOT_SET),
    m_percentOfTotalTrafficImpacted(0.0),
    m_impactType(HealthEventImpactType::NOT_SET),
    m_healthScoreThreshold(0.0)
{
  *this = result;
}

GetHealthEventResult& GetHealthEventResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EventArn"))
  {
    m_eventArn = jsonValue.GetString("EventArn");

  }

  if(jsonValue.ValueExists("EventId"))
  {
    m_eventId = jsonValue.GetString("EventId");

  }

  if(jsonValue.ValueExists("StartedAt"))
  {
    m_startedAt = jsonValue.GetString("StartedAt");

  }

  if(jsonValue.ValueExists("EndedAt"))
  {
    m_endedAt = jsonValue.GetString("EndedAt");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("LastUpdatedAt");

  }

  if(jsonValue.ValueExists("ImpactedLocations"))
  {
    Aws::Utils::Array<JsonView> impactedLocationsJsonList = jsonValue.GetArray("ImpactedLocations");
    for(unsigned impactedLocationsIndex = 0; impactedLocationsIndex < impactedLocationsJsonList.GetLength(); ++impactedLocationsIndex)
    {
      m_impactedLocations.push_back(impactedLocationsJsonList[impactedLocationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = HealthEventStatusMapper::GetHealthEventStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("PercentOfTotalTrafficImpacted"))
  {
    m_percentOfTotalTrafficImpacted = jsonValue.GetDouble("PercentOfTotalTrafficImpacted");

  }

  if(jsonValue.ValueExists("ImpactType"))
  {
    m_impactType = HealthEventImpactTypeMapper::GetHealthEventImpactTypeForName(jsonValue.GetString("ImpactType"));

  }

  if(jsonValue.ValueExists("HealthScoreThreshold"))
  {
    m_healthScoreThreshold = jsonValue.GetDouble("HealthScoreThreshold");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
