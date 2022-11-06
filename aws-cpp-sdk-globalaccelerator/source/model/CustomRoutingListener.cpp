/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/CustomRoutingListener.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

CustomRoutingListener::CustomRoutingListener() : 
    m_listenerArnHasBeenSet(false),
    m_portRangesHasBeenSet(false)
{
}

CustomRoutingListener::CustomRoutingListener(JsonView jsonValue) : 
    m_listenerArnHasBeenSet(false),
    m_portRangesHasBeenSet(false)
{
  *this = jsonValue;
}

CustomRoutingListener& CustomRoutingListener::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ListenerArn"))
  {
    m_listenerArn = jsonValue.GetString("ListenerArn");

    m_listenerArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PortRanges"))
  {
    Aws::Utils::Array<JsonView> portRangesJsonList = jsonValue.GetArray("PortRanges");
    for(unsigned portRangesIndex = 0; portRangesIndex < portRangesJsonList.GetLength(); ++portRangesIndex)
    {
      m_portRanges.push_back(portRangesJsonList[portRangesIndex].AsObject());
    }
    m_portRangesHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomRoutingListener::Jsonize() const
{
  JsonValue payload;

  if(m_listenerArnHasBeenSet)
  {
   payload.WithString("ListenerArn", m_listenerArn);

  }

  if(m_portRangesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> portRangesJsonList(m_portRanges.size());
   for(unsigned portRangesIndex = 0; portRangesIndex < portRangesJsonList.GetLength(); ++portRangesIndex)
   {
     portRangesJsonList[portRangesIndex].AsObject(m_portRanges[portRangesIndex].Jsonize());
   }
   payload.WithArray("PortRanges", std::move(portRangesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
