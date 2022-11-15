/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

InstanceNetworking::InstanceNetworking(JsonView jsonValue) : 
    m_monthlyTransferHasBeenSet(false),
    m_portsHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceNetworking& InstanceNetworking::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("monthlyTransfer"))
  {
    m_monthlyTransfer = jsonValue.GetObject("monthlyTransfer");

    m_monthlyTransferHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ports"))
  {
    Aws::Utils::Array<JsonView> portsJsonList = jsonValue.GetArray("ports");
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
   Aws::Utils::Array<JsonValue> portsJsonList(m_ports.size());
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
