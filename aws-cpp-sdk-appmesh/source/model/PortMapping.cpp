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

#include <aws/appmesh/model/PortMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

PortMapping::PortMapping() : 
    m_port(0),
    m_portHasBeenSet(false),
    m_protocol(PortProtocol::NOT_SET),
    m_protocolHasBeenSet(false)
{
}

PortMapping::PortMapping(JsonView jsonValue) : 
    m_port(0),
    m_portHasBeenSet(false),
    m_protocol(PortProtocol::NOT_SET),
    m_protocolHasBeenSet(false)
{
  *this = jsonValue;
}

PortMapping& PortMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = PortProtocolMapper::GetPortProtocolForName(jsonValue.GetString("protocol"));

    m_protocolHasBeenSet = true;
  }

  return *this;
}

JsonValue PortMapping::Jsonize() const
{
  JsonValue payload;

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", PortProtocolMapper::GetNameForPortProtocol(m_protocol));
  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
