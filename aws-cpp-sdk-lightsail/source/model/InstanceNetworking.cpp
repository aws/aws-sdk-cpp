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

#include <aws/lightsail/model/InstanceNetworking.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

InstanceNetworking::InstanceNetworking() : 
    m_monthlyTransferHasBeenSet(false),
    m_portsHasBeenSet(false)
{
}

InstanceNetworking::InstanceNetworking(const JsonValue& jsonValue) : 
    m_monthlyTransferHasBeenSet(false),
    m_portsHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceNetworking& InstanceNetworking::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("monthlyTransfer"))
  {
    m_monthlyTransfer = jsonValue.GetObject("monthlyTransfer");

    m_monthlyTransferHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ports"))
  {
    Array<JsonValue> portsJsonList = jsonValue.GetArray("ports");
    for(unsigned portsIndex = 0; portsIndex < portsJsonList.GetLength(); ++portsIndex)
    {
      m_ports.push_back(portsJsonList[portsIndex].AsObject());
    }
    m_portsHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceNetworking::Jsonize() const
{
  JsonValue payload;

  if(m_monthlyTransferHasBeenSet)
  {
   payload.WithObject("monthlyTransfer", m_monthlyTransfer.Jsonize());

  }

  if(m_portsHasBeenSet)
  {
   Array<JsonValue> portsJsonList(m_ports.size());
   for(unsigned portsIndex = 0; portsIndex < portsJsonList.GetLength(); ++portsIndex)
   {
     portsJsonList[portsIndex].AsObject(m_ports[portsIndex].Jsonize());
   }
   payload.WithArray("ports", std::move(portsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws