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

#include <aws/mq/model/BrokerInstanceOption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

BrokerInstanceOption::BrokerInstanceOption() : 
    m_availabilityZonesHasBeenSet(false),
    m_engineType(EngineType::NOT_SET),
    m_engineTypeHasBeenSet(false),
    m_hostInstanceTypeHasBeenSet(false),
    m_supportedEngineVersionsHasBeenSet(false)
{
}

BrokerInstanceOption::BrokerInstanceOption(JsonView jsonValue) : 
    m_availabilityZonesHasBeenSet(false),
    m_engineType(EngineType::NOT_SET),
    m_engineTypeHasBeenSet(false),
    m_hostInstanceTypeHasBeenSet(false),
    m_supportedEngineVersionsHasBeenSet(false)
{
  *this = jsonValue;
}

BrokerInstanceOption& BrokerInstanceOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("availabilityZones"))
  {
    Array<JsonView> availabilityZonesJsonList = jsonValue.GetArray("availabilityZones");
    for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
    {
      m_availabilityZones.push_back(availabilityZonesJsonList[availabilityZonesIndex].AsObject());
    }
    m_availabilityZonesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("engineType"))
  {
    m_engineType = EngineTypeMapper::GetEngineTypeForName(jsonValue.GetString("engineType"));

    m_engineTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hostInstanceType"))
  {
    m_hostInstanceType = jsonValue.GetString("hostInstanceType");

    m_hostInstanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportedEngineVersions"))
  {
    Array<JsonView> supportedEngineVersionsJsonList = jsonValue.GetArray("supportedEngineVersions");
    for(unsigned supportedEngineVersionsIndex = 0; supportedEngineVersionsIndex < supportedEngineVersionsJsonList.GetLength(); ++supportedEngineVersionsIndex)
    {
      m_supportedEngineVersions.push_back(supportedEngineVersionsJsonList[supportedEngineVersionsIndex].AsString());
    }
    m_supportedEngineVersionsHasBeenSet = true;
  }

  return *this;
}

JsonValue BrokerInstanceOption::Jsonize() const
{
  JsonValue payload;

  if(m_availabilityZonesHasBeenSet)
  {
   Array<JsonValue> availabilityZonesJsonList(m_availabilityZones.size());
   for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
   {
     availabilityZonesJsonList[availabilityZonesIndex].AsObject(m_availabilityZones[availabilityZonesIndex].Jsonize());
   }
   payload.WithArray("availabilityZones", std::move(availabilityZonesJsonList));

  }

  if(m_engineTypeHasBeenSet)
  {
   payload.WithString("engineType", EngineTypeMapper::GetNameForEngineType(m_engineType));
  }

  if(m_hostInstanceTypeHasBeenSet)
  {
   payload.WithString("hostInstanceType", m_hostInstanceType);

  }

  if(m_supportedEngineVersionsHasBeenSet)
  {
   Array<JsonValue> supportedEngineVersionsJsonList(m_supportedEngineVersions.size());
   for(unsigned supportedEngineVersionsIndex = 0; supportedEngineVersionsIndex < supportedEngineVersionsJsonList.GetLength(); ++supportedEngineVersionsIndex)
   {
     supportedEngineVersionsJsonList[supportedEngineVersionsIndex].AsString(m_supportedEngineVersions[supportedEngineVersionsIndex]);
   }
   payload.WithArray("supportedEngineVersions", std::move(supportedEngineVersionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
