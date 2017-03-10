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
#include <aws/elasticmapreduce/model/InstanceFleetModifyConfig.h>
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

InstanceFleetModifyConfig::InstanceFleetModifyConfig() : 
    m_instanceFleetIdHasBeenSet(false),
    m_targetOnDemandCapacity(0),
    m_targetOnDemandCapacityHasBeenSet(false),
    m_targetSpotCapacity(0),
    m_targetSpotCapacityHasBeenSet(false)
{
}

InstanceFleetModifyConfig::InstanceFleetModifyConfig(const JsonValue& jsonValue) : 
    m_instanceFleetIdHasBeenSet(false),
    m_targetOnDemandCapacity(0),
    m_targetOnDemandCapacityHasBeenSet(false),
    m_targetSpotCapacity(0),
    m_targetSpotCapacityHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceFleetModifyConfig& InstanceFleetModifyConfig::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("InstanceFleetId"))
  {
    m_instanceFleetId = jsonValue.GetString("InstanceFleetId");

    m_instanceFleetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetOnDemandCapacity"))
  {
    m_targetOnDemandCapacity = jsonValue.GetInteger("TargetOnDemandCapacity");

    m_targetOnDemandCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetSpotCapacity"))
  {
    m_targetSpotCapacity = jsonValue.GetInteger("TargetSpotCapacity");

    m_targetSpotCapacityHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceFleetModifyConfig::Jsonize() const
{
  JsonValue payload;

  if(m_instanceFleetIdHasBeenSet)
  {
   payload.WithString("InstanceFleetId", m_instanceFleetId);

  }

  if(m_targetOnDemandCapacityHasBeenSet)
  {
   payload.WithInteger("TargetOnDemandCapacity", m_targetOnDemandCapacity);

  }

  if(m_targetSpotCapacityHasBeenSet)
  {
   payload.WithInteger("TargetSpotCapacity", m_targetSpotCapacity);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws