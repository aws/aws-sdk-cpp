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

#include <aws/kafka/model/MutableClusterInfo.h>
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

MutableClusterInfo::MutableClusterInfo() : 
    m_brokerEBSVolumeInfoHasBeenSet(false),
    m_configurationInfoHasBeenSet(false),
    m_numberOfBrokerNodes(0),
    m_numberOfBrokerNodesHasBeenSet(false)
{
}

MutableClusterInfo::MutableClusterInfo(JsonView jsonValue) : 
    m_brokerEBSVolumeInfoHasBeenSet(false),
    m_configurationInfoHasBeenSet(false),
    m_numberOfBrokerNodes(0),
    m_numberOfBrokerNodesHasBeenSet(false)
{
  *this = jsonValue;
}

MutableClusterInfo& MutableClusterInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("brokerEBSVolumeInfo"))
  {
    Array<JsonView> brokerEBSVolumeInfoJsonList = jsonValue.GetArray("brokerEBSVolumeInfo");
    for(unsigned brokerEBSVolumeInfoIndex = 0; brokerEBSVolumeInfoIndex < brokerEBSVolumeInfoJsonList.GetLength(); ++brokerEBSVolumeInfoIndex)
    {
      m_brokerEBSVolumeInfo.push_back(brokerEBSVolumeInfoJsonList[brokerEBSVolumeInfoIndex].AsObject());
    }
    m_brokerEBSVolumeInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configurationInfo"))
  {
    m_configurationInfo = jsonValue.GetObject("configurationInfo");

    m_configurationInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfBrokerNodes"))
  {
    m_numberOfBrokerNodes = jsonValue.GetInteger("numberOfBrokerNodes");

    m_numberOfBrokerNodesHasBeenSet = true;
  }

  return *this;
}

JsonValue MutableClusterInfo::Jsonize() const
{
  JsonValue payload;

  if(m_brokerEBSVolumeInfoHasBeenSet)
  {
   Array<JsonValue> brokerEBSVolumeInfoJsonList(m_brokerEBSVolumeInfo.size());
   for(unsigned brokerEBSVolumeInfoIndex = 0; brokerEBSVolumeInfoIndex < brokerEBSVolumeInfoJsonList.GetLength(); ++brokerEBSVolumeInfoIndex)
   {
     brokerEBSVolumeInfoJsonList[brokerEBSVolumeInfoIndex].AsObject(m_brokerEBSVolumeInfo[brokerEBSVolumeInfoIndex].Jsonize());
   }
   payload.WithArray("brokerEBSVolumeInfo", std::move(brokerEBSVolumeInfoJsonList));

  }

  if(m_configurationInfoHasBeenSet)
  {
   payload.WithObject("configurationInfo", m_configurationInfo.Jsonize());

  }

  if(m_numberOfBrokerNodesHasBeenSet)
  {
   payload.WithInteger("numberOfBrokerNodes", m_numberOfBrokerNodes);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
