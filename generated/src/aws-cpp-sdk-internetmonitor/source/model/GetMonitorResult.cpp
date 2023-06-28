/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/GetMonitorResult.h>
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

GetMonitorResult::GetMonitorResult() : 
    m_status(MonitorConfigState::NOT_SET),
    m_processingStatus(MonitorProcessingStatusCode::NOT_SET),
    m_maxCityNetworksToMonitor(0),
    m_trafficPercentageToMonitor(0)
{
}

GetMonitorResult::GetMonitorResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(MonitorConfigState::NOT_SET),
    m_processingStatus(MonitorProcessingStatusCode::NOT_SET),
    m_maxCityNetworksToMonitor(0),
    m_trafficPercentageToMonitor(0)
{
  *this = result;
}

GetMonitorResult& GetMonitorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MonitorName"))
  {
    m_monitorName = jsonValue.GetString("MonitorName");

  }

  if(jsonValue.ValueExists("MonitorArn"))
  {
    m_monitorArn = jsonValue.GetString("MonitorArn");

  }

  if(jsonValue.ValueExists("Resources"))
  {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("Resources");
    for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
    {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = MonitorConfigStateMapper::GetMonitorConfigStateForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

  }

  if(jsonValue.ValueExists("ModifiedAt"))
  {
    m_modifiedAt = jsonValue.GetString("ModifiedAt");

  }

  if(jsonValue.ValueExists("ProcessingStatus"))
  {
    m_processingStatus = MonitorProcessingStatusCodeMapper::GetMonitorProcessingStatusCodeForName(jsonValue.GetString("ProcessingStatus"));

  }

  if(jsonValue.ValueExists("ProcessingStatusInfo"))
  {
    m_processingStatusInfo = jsonValue.GetString("ProcessingStatusInfo");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("MaxCityNetworksToMonitor"))
  {
    m_maxCityNetworksToMonitor = jsonValue.GetInteger("MaxCityNetworksToMonitor");

  }

  if(jsonValue.ValueExists("InternetMeasurementsLogDelivery"))
  {
    m_internetMeasurementsLogDelivery = jsonValue.GetObject("InternetMeasurementsLogDelivery");

  }

  if(jsonValue.ValueExists("TrafficPercentageToMonitor"))
  {
    m_trafficPercentageToMonitor = jsonValue.GetInteger("TrafficPercentageToMonitor");

  }

  if(jsonValue.ValueExists("HealthEventsConfig"))
  {
    m_healthEventsConfig = jsonValue.GetObject("HealthEventsConfig");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
