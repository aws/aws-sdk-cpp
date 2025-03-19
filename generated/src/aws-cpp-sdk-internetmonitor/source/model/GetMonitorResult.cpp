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

GetMonitorResult::GetMonitorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMonitorResult& GetMonitorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MonitorName"))
  {
    m_monitorName = jsonValue.GetString("MonitorName");
    m_monitorNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MonitorArn"))
  {
    m_monitorArn = jsonValue.GetString("MonitorArn");
    m_monitorArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Resources"))
  {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("Resources");
    for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
    {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsString());
    }
    m_resourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = MonitorConfigStateMapper::GetMonitorConfigStateForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModifiedAt"))
  {
    m_modifiedAt = jsonValue.GetString("ModifiedAt");
    m_modifiedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProcessingStatus"))
  {
    m_processingStatus = MonitorProcessingStatusCodeMapper::GetMonitorProcessingStatusCodeForName(jsonValue.GetString("ProcessingStatus"));
    m_processingStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProcessingStatusInfo"))
  {
    m_processingStatusInfo = jsonValue.GetString("ProcessingStatusInfo");
    m_processingStatusInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxCityNetworksToMonitor"))
  {
    m_maxCityNetworksToMonitor = jsonValue.GetInteger("MaxCityNetworksToMonitor");
    m_maxCityNetworksToMonitorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InternetMeasurementsLogDelivery"))
  {
    m_internetMeasurementsLogDelivery = jsonValue.GetObject("InternetMeasurementsLogDelivery");
    m_internetMeasurementsLogDeliveryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrafficPercentageToMonitor"))
  {
    m_trafficPercentageToMonitor = jsonValue.GetInteger("TrafficPercentageToMonitor");
    m_trafficPercentageToMonitorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HealthEventsConfig"))
  {
    m_healthEventsConfig = jsonValue.GetObject("HealthEventsConfig");
    m_healthEventsConfigHasBeenSet = true;
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
