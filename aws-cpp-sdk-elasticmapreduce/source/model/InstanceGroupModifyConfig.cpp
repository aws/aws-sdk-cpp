/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_shrinkPolicyHasBeenSet(false),
    m_reconfigurationType(ReconfigurationType::NOT_SET),
    m_reconfigurationTypeHasBeenSet(false),
    m_configurationsHasBeenSet(false)
{
}

InstanceGroupModifyConfig::InstanceGroupModifyConfig(JsonView jsonValue) : 
    m_instanceGroupIdHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_eC2InstanceIdsToTerminateHasBeenSet(false),
    m_shrinkPolicyHasBeenSet(false),
    m_reconfigurationType(ReconfigurationType::NOT_SET),
    m_reconfigurationTypeHasBeenSet(false),
    m_configurationsHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceGroupModifyConfig& InstanceGroupModifyConfig::operator =(JsonView jsonValue)
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
    Aws::Utils::Array<JsonView> eC2InstanceIdsToTerminateJsonList = jsonValue.GetArray("EC2InstanceIdsToTerminate");
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

  if(jsonValue.ValueExists("ReconfigurationType"))
  {
    m_reconfigurationType = ReconfigurationTypeMapper::GetReconfigurationTypeForName(jsonValue.GetString("ReconfigurationType"));

    m_reconfigurationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Configurations"))
  {
    Aws::Utils::Array<JsonView> configurationsJsonList = jsonValue.GetArray("Configurations");
    for(unsigned configurationsIndex = 0; configurationsIndex < configurationsJsonList.GetLength(); ++configurationsIndex)
    {
      m_configurations.push_back(configurationsJsonList[configurationsIndex].AsObject());
    }
    m_configurationsHasBeenSet = true;
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
   Aws::Utils::Array<JsonValue> eC2InstanceIdsToTerminateJsonList(m_eC2InstanceIdsToTerminate.size());
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

  if(m_reconfigurationTypeHasBeenSet)
  {
   payload.WithString("ReconfigurationType", ReconfigurationTypeMapper::GetNameForReconfigurationType(m_reconfigurationType));
  }

  if(m_configurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configurationsJsonList(m_configurations.size());
   for(unsigned configurationsIndex = 0; configurationsIndex < configurationsJsonList.GetLength(); ++configurationsIndex)
   {
     configurationsJsonList[configurationsIndex].AsObject(m_configurations[configurationsIndex].Jsonize());
   }
   payload.WithArray("Configurations", std::move(configurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
