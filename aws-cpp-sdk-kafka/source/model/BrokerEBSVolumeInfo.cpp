/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
