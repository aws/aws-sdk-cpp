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

#include <aws/mq/model/BrokerInstance.h>
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

BrokerInstance::BrokerInstance() : 
    m_consoleURLHasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_ipAddressHasBeenSet(false)
{
}

BrokerInstance::BrokerInstance(JsonView jsonValue) : 
    m_consoleURLHasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_ipAddressHasBeenSet(false)
{
  *this = jsonValue;
}

BrokerInstance& BrokerInstance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("consoleURL"))
  {
    m_consoleURL = jsonValue.GetString("consoleURL");

    m_consoleURLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endpoints"))
  {
    Array<JsonView> endpointsJsonList = jsonValue.GetArray("endpoints");
    for(unsigned endpointsIndex = 0; endpointsIndex < endpointsJsonList.GetLength(); ++endpointsIndex)
    {
      m_endpoints.push_back(endpointsJsonList[endpointsIndex].AsString());
    }
    m_endpointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipAddress"))
  {
    m_ipAddress = jsonValue.GetString("ipAddress");

    m_ipAddressHasBeenSet = true;
  }

  return *this;
}

JsonValue BrokerInstance::Jsonize() const
{
  JsonValue payload;

  if(m_consoleURLHasBeenSet)
  {
   payload.WithString("consoleURL", m_consoleURL);

  }

  if(m_endpointsHasBeenSet)
  {
   Array<JsonValue> endpointsJsonList(m_endpoints.size());
   for(unsigned endpointsIndex = 0; endpointsIndex < endpointsJsonList.GetLength(); ++endpointsIndex)
   {
     endpointsJsonList[endpointsIndex].AsString(m_endpoints[endpointsIndex]);
   }
   payload.WithArray("endpoints", std::move(endpointsJsonList));

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("ipAddress", m_ipAddress);

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
