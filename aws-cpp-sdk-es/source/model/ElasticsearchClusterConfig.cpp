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
#include <aws/es/model/ElasticsearchClusterConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

ElasticsearchClusterConfig::ElasticsearchClusterConfig() : 
    m_instanceType(ESPartitionInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_dedicatedMasterEnabled(false),
    m_dedicatedMasterEnabledHasBeenSet(false),
    m_zoneAwarenessEnabled(false),
    m_zoneAwarenessEnabledHasBeenSet(false),
    m_dedicatedMasterType(ESPartitionInstanceType::NOT_SET),
    m_dedicatedMasterTypeHasBeenSet(false),
    m_dedicatedMasterCount(0),
    m_dedicatedMasterCountHasBeenSet(false)
{
}

ElasticsearchClusterConfig::ElasticsearchClusterConfig(const JsonValue& jsonValue) : 
    m_instanceType(ESPartitionInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_dedicatedMasterEnabled(false),
    m_dedicatedMasterEnabledHasBeenSet(false),
    m_zoneAwarenessEnabled(false),
    m_zoneAwarenessEnabledHasBeenSet(false),
    m_dedicatedMasterType(ESPartitionInstanceType::NOT_SET),
    m_dedicatedMasterTypeHasBeenSet(false),
    m_dedicatedMasterCount(0),
    m_dedicatedMasterCountHasBeenSet(false)
{
  *this = jsonValue;
}

ElasticsearchClusterConfig& ElasticsearchClusterConfig::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = ESPartitionInstanceTypeMapper::GetESPartitionInstanceTypeForName(jsonValue.GetString("InstanceType"));

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("InstanceCount");

    m_instanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DedicatedMasterEnabled"))
  {
    m_dedicatedMasterEnabled = jsonValue.GetBool("DedicatedMasterEnabled");

    m_dedicatedMasterEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ZoneAwarenessEnabled"))
  {
    m_zoneAwarenessEnabled = jsonValue.GetBool("ZoneAwarenessEnabled");

    m_zoneAwarenessEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DedicatedMasterType"))
  {
    m_dedicatedMasterType = ESPartitionInstanceTypeMapper::GetESPartitionInstanceTypeForName(jsonValue.GetString("DedicatedMasterType"));

    m_dedicatedMasterTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DedicatedMasterCount"))
  {
    m_dedicatedMasterCount = jsonValue.GetInteger("DedicatedMasterCount");

    m_dedicatedMasterCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ElasticsearchClusterConfig::Jsonize() const
{
  JsonValue payload;

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", ESPartitionInstanceTypeMapper::GetNameForESPartitionInstanceType(m_instanceType));
  }

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("InstanceCount", m_instanceCount);

  }

  if(m_dedicatedMasterEnabledHasBeenSet)
  {
   payload.WithBool("DedicatedMasterEnabled", m_dedicatedMasterEnabled);

  }

  if(m_zoneAwarenessEnabledHasBeenSet)
  {
   payload.WithBool("ZoneAwarenessEnabled", m_zoneAwarenessEnabled);

  }

  if(m_dedicatedMasterTypeHasBeenSet)
  {
   payload.WithString("DedicatedMasterType", ESPartitionInstanceTypeMapper::GetNameForESPartitionInstanceType(m_dedicatedMasterType));
  }

  if(m_dedicatedMasterCountHasBeenSet)
  {
   payload.WithInteger("DedicatedMasterCount", m_dedicatedMasterCount);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws