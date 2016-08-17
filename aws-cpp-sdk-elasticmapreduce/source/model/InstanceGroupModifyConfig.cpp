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
#include <aws/elasticmapreduce/model/InstanceGroupModifyConfig.h>
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

InstanceGroupModifyConfig::InstanceGroupModifyConfig() : 
    m_instanceGroupIdHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_eC2InstanceIdsToTerminateHasBeenSet(false),
    m_shrinkPolicyHasBeenSet(false)
{
}

InstanceGroupModifyConfig::InstanceGroupModifyConfig(const JsonValue& jsonValue) : 
    m_instanceGroupIdHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_eC2InstanceIdsToTerminateHasBeenSet(false),
    m_shrinkPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceGroupModifyConfig& InstanceGroupModifyConfig::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("InstanceGroupId"))
  {
    m_instanceGroupId = jsonValue.GetString("InstanceGroupId");

    m_instanceGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("InstanceCount");

    m_instanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EC2InstanceIdsToTerminate"))
  {
    Array<JsonValue> eC2InstanceIdsToTerminateJsonList = jsonValue.GetArray("EC2InstanceIdsToTerminate");
    for(unsigned eC2InstanceIdsToTerminateIndex = 0; eC2InstanceIdsToTerminateIndex < eC2InstanceIdsToTerminateJsonList.GetLength(); ++eC2InstanceIdsToTerminateIndex)
    {
      m_eC2InstanceIdsToTerminate.push_back(eC2InstanceIdsToTerminateJsonList[eC2InstanceIdsToTerminateIndex].AsString());
    }
    m_eC2InstanceIdsToTerminateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShrinkPolicy"))
  {
    m_shrinkPolicy = jsonValue.GetObject("ShrinkPolicy");

    m_shrinkPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceGroupModifyConfig::Jsonize() const
{
  JsonValue payload;

  if(m_instanceGroupIdHasBeenSet)
  {
   payload.WithString("InstanceGroupId", m_instanceGroupId);

  }

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("InstanceCount", m_instanceCount);

  }

  if(m_eC2InstanceIdsToTerminateHasBeenSet)
  {
   Array<JsonValue> eC2InstanceIdsToTerminateJsonList(m_eC2InstanceIdsToTerminate.size());
   for(unsigned eC2InstanceIdsToTerminateIndex = 0; eC2InstanceIdsToTerminateIndex < eC2InstanceIdsToTerminateJsonList.GetLength(); ++eC2InstanceIdsToTerminateIndex)
   {
     eC2InstanceIdsToTerminateJsonList[eC2InstanceIdsToTerminateIndex].AsString(m_eC2InstanceIdsToTerminate[eC2InstanceIdsToTerminateIndex]);
   }
   payload.WithArray("EC2InstanceIdsToTerminate", std::move(eC2InstanceIdsToTerminateJsonList));

  }

  if(m_shrinkPolicyHasBeenSet)
  {
   payload.WithObject("ShrinkPolicy", m_shrinkPolicy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws