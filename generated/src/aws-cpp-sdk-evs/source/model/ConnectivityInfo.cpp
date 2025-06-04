/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evs/model/ConnectivityInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EVS
{
namespace Model
{

ConnectivityInfo::ConnectivityInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

ConnectivityInfo& ConnectivityInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("privateRouteServerPeerings"))
  {
    Aws::Utils::Array<JsonView> privateRouteServerPeeringsJsonList = jsonValue.GetArray("privateRouteServerPeerings");
    for(unsigned privateRouteServerPeeringsIndex = 0; privateRouteServerPeeringsIndex < privateRouteServerPeeringsJsonList.GetLength(); ++privateRouteServerPeeringsIndex)
    {
      m_privateRouteServerPeerings.push_back(privateRouteServerPeeringsJsonList[privateRouteServerPeeringsIndex].AsString());
    }
    m_privateRouteServerPeeringsHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectivityInfo::Jsonize() const
{
  JsonValue payload;

  if(m_privateRouteServerPeeringsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> privateRouteServerPeeringsJsonList(m_privateRouteServerPeerings.size());
   for(unsigned privateRouteServerPeeringsIndex = 0; privateRouteServerPeeringsIndex < privateRouteServerPeeringsJsonList.GetLength(); ++privateRouteServerPeeringsIndex)
   {
     privateRouteServerPeeringsJsonList[privateRouteServerPeeringsIndex].AsString(m_privateRouteServerPeerings[privateRouteServerPeeringsIndex]);
   }
   payload.WithArray("privateRouteServerPeerings", std::move(privateRouteServerPeeringsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EVS
} // namespace Aws
