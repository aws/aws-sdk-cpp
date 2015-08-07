/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ecs/model/TransportProtocol.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int tcp_HASH = HashingUtils::HashString("tcp");
static const int udp_HASH = HashingUtils::HashString("udp");

namespace Aws
{
namespace ECS
{
namespace Model
{
namespace TransportProtocolMapper
{
TransportProtocol GetTransportProtocolForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == tcp_HASH)
  {
    return TransportProtocol::tcp;
  }
  else if (hashCode == udp_HASH)
  {
    return TransportProtocol::udp;
  }

  return TransportProtocol::NOT_SET;
}

Aws::String GetNameForTransportProtocol(TransportProtocol value)
{
  switch(value)
  {
  case TransportProtocol::tcp:
    return "tcp";
  case TransportProtocol::udp:
    return "udp";
  default:
    return "";
  }
}

} // namespace TransportProtocolMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
