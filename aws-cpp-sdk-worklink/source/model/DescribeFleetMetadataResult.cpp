/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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



  return *this;
}
