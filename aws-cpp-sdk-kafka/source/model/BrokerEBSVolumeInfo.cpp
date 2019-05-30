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

#include <aws/kafka/model/BrokerEBSVolumeInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

BrokerEBSVolumeInfo::BrokerEBSVolumeInfo() : 
    m_kafkaBrokerNodeIdHasBeenSet(false),
    m_volumeSizeGB(0),
    m_volumeSizeGBHasBeenSet(false)
{
}

BrokerEBSVolumeInfo::BrokerEBSVolumeInfo(JsonView jsonValue) : 
    m_kafkaBrokerNodeIdHasBeenSet(false),
    m_volumeSizeGB(0),
    m_volumeSizeGBHasBeenSet(false)
{
  *this = jsonValue;
}

BrokerEBSVolumeInfo& BrokerEBSVolumeInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kafkaBrokerNodeId"))
  {
    m_kafkaBrokerNodeId = jsonValue.GetString("kafkaBrokerNodeId");

    m_kafkaBrokerNodeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumeSizeGB"))
  {
    m_volumeSizeGB = jsonValue.GetInteger("volumeSizeGB");

    m_volumeSizeGBHasBeenSet = true;
  }

  return *this;
}

JsonValue BrokerEBSVolumeInfo::Jsonize() const
{
  JsonValue payload;

  if(m_kafkaBrokerNodeIdHasBeenSet)
  {
   payload.WithString("kafkaBrokerNodeId", m_kafkaBrokerNodeId);

  }

  if(m_volumeSizeGBHasBeenSet)
  {
   payload.WithInteger("volumeSizeGB", m_volumeSizeGB);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
