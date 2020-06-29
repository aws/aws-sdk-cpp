/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/worklink/model/DescribeFleetMetadataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkLink::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFleetMetadataResult::DescribeFleetMetadataResult() : 
    m_optimizeForEndUserLocation(false),
    m_fleetStatus(FleetStatus::NOT_SET)
{
}

DescribeFleetMetadataResult::DescribeFleetMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_optimizeForEndUserLocation(false),
    m_fleetStatus(FleetStatus::NOT_SET)
{
  *this = result;
}

DescribeFleetMetadataResult& DescribeFleetMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

  }

  if(jsonValue.ValueExists("FleetName"))
  {
    m_fleetName = jsonValue.GetString("FleetName");

  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

  }

  if(jsonValue.ValueExists("OptimizeForEndUserLocation"))
  {
    m_optimizeForEndUserLocation = jsonValue.GetBool("OptimizeForEndUserLocation");

  }

  if(jsonValue.ValueExists("CompanyCode"))
  {
    m_companyCode = jsonValue.GetString("CompanyCode");

  }

  if(jsonValue.ValueExists("FleetStatus"))
  {
    m_fleetStatus = FleetStatusMapper::GetFleetStatusForName(jsonValue.GetString("FleetStatus"));

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
