/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/NetworkReachabilityDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

NetworkReachabilityDetails::NetworkReachabilityDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

NetworkReachabilityDetails& NetworkReachabilityDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("openPortRange"))
  {
    m_openPortRange = jsonValue.GetObject("openPortRange");
    m_openPortRangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = NetworkProtocolMapper::GetNetworkProtocolForName(jsonValue.GetString("protocol"));
    m_protocolHasBeenSet = true;
  }
  if(jsonValue.ValueExists("networkPath"))
  {
    m_networkPath = jsonValue.GetObject("networkPath");
    m_networkPathHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkReachabilityDetails::Jsonize() const
{
  JsonValue payload;

  if(m_openPortRangeHasBeenSet)
  {
   payload.WithObject("openPortRange", m_openPortRange.Jsonize());

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", NetworkProtocolMapper::GetNameForNetworkProtocol(m_protocol));
  }

  if(m_networkPathHasBeenSet)
  {
   payload.WithObject("networkPath", m_networkPath.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
