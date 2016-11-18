/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticmapreduce/model/InstanceGroupDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

InstanceGroupDetail::InstanceGroupDetail() : 
    m_instanceGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_market(MarketType::NOT_SET),
    m_marketHasBeenSet(false),
    m_instanceRole(InstanceRoleType::NOT_SET),
    m_instanceRoleHasBeenSet(false),
    m_bidPriceHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceRequestCount(0),
    m_instanceRequestCountHasBeenSet(false),
    m_instanceRunningCount(0),
    m_instanceRunningCountHasBeenSet(false),
    m_state(InstanceGroupState::NOT_SET),
    m_stateHasBeenSet(false),
    m_lastStateChangeReasonHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_startDateTimeHasBeenSet(false),
    m_readyDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false)
{
}

InstanceGroupDetail::InstanceGroupDetail(const JsonValue& jsonValue) : 
    m_instanceGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_market(MarketType::NOT_SET),
    m_marketHasBeenSet(false),
    m_instanceRole(InstanceRoleType::NOT_SET),
    m_instanceRoleHasBeenSet(false),
    m_bidPriceHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceRequestCount(0),
    m_instanceRequestCountHasBeenSet(false),
    m_instanceRunningCount(0),
    m_instanceRunningCountHasBeenSet(false),
    m_state(InstanceGroupState::NOT_SET),
    m_stateHasBeenSet(false),
    m_lastStateChangeReasonHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_startDateTimeHasBeenSet(false),
    m_readyDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceGroupDetail& InstanceGroupDetail::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("InstanceGroupId"))
  {
    m_instanceGroupId = jsonValue.GetString("InstanceGroupId");

    m_instanceGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Market"))
  {
    m_market = MarketTypeMapper::GetMarketTypeForName(jsonValue.GetString("Market"));

    m_marketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceRole"))
  {
    m_instanceRole = InstanceRoleTypeMapper::GetInstanceRoleTypeForName(jsonValue.GetString("InstanceRole"));

    m_instanceRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BidPrice"))
  {
    m_bidPrice = jsonValue.GetString("BidPrice");

    m_bidPriceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceRequestCount"))
  {
    m_instanceRequestCount = jsonValue.GetInteger("InstanceRequestCount");

    m_instanceRequestCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceRunningCount"))
  {
    m_instanceRunningCount = jsonValue.GetInteger("InstanceRunningCount");

    m_instanceRunningCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = InstanceGroupStateMapper::GetInstanceGroupStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastStateChangeReason"))
  {
    m_lastStateChangeReason = jsonValue.GetString("LastStateChangeReason");

    m_lastStateChangeReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("CreationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartDateTime"))
  {
    m_startDateTime = jsonValue.GetDouble("StartDateTime");

    m_startDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadyDateTime"))
  {
    m_readyDateTime = jsonValue.GetDouble("ReadyDateTime");

    m_readyDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndDateTime"))
  {
    m_endDateTime = jsonValue.GetDouble("EndDateTime");

    m_endDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceGroupDetail::Jsonize() const
{
  JsonValue payload;

  if(m_instanceGroupIdHasBeenSet)
  {
   payload.WithString("InstanceGroupId", m_instanceGroupId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_marketHasBeenSet)
  {
   payload.WithString("Market", MarketTypeMapper::GetNameForMarketType(m_market));
  }

  if(m_instanceRoleHasBeenSet)
  {
   payload.WithString("InstanceRole", InstanceRoleTypeMapper::GetNameForInstanceRoleType(m_instanceRole));
  }

  if(m_bidPriceHasBeenSet)
  {
   payload.WithString("BidPrice", m_bidPrice);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_instanceRequestCountHasBeenSet)
  {
   payload.WithInteger("InstanceRequestCount", m_instanceRequestCount);

  }

  if(m_instanceRunningCountHasBeenSet)
  {
   payload.WithInteger("InstanceRunningCount", m_instanceRunningCount);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", InstanceGroupStateMapper::GetNameForInstanceGroupState(m_state));
  }

  if(m_lastStateChangeReasonHasBeenSet)
  {
   payload.WithString("LastStateChangeReason", m_lastStateChangeReason);

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("CreationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_startDateTimeHasBeenSet)
  {
   payload.WithDouble("StartDateTime", m_startDateTime.SecondsWithMSPrecision());
  }

  if(m_readyDateTimeHasBeenSet)
  {
   payload.WithDouble("ReadyDateTime", m_readyDateTime.SecondsWithMSPrecision());
  }

  if(m_endDateTimeHasBeenSet)
  {
   payload.WithDouble("EndDateTime", m_endDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws