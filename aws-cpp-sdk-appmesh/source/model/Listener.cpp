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

#include <aws/appmesh/model/Listener.h>
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

Listener::Listener() : 
    m_healthCheckHasBeenSet(false),
    m_portMappingHasBeenSet(false),
    m_tlsHasBeenSet(false)
{
}

Listener::Listener(JsonView jsonValue) : 
    m_healthCheckHasBeenSet(false),
    m_portMappingHasBeenSet(false),
    m_tlsHasBeenSet(false)
{
  *this = jsonValue;
}

Listener& Listener::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("healthCheck"))
  {
    m_healthCheck = jsonValue.GetObject("healthCheck");

    m_healthCheckHasBeenSet = true;
  }

  if(jsonValue.ValueExists("portMapping"))
  {
    m_portMapping = jsonValue.GetObject("portMapping");

    m_portMappingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tls"))
  {
    m_tls = jsonValue.GetObject("tls");

    m_tlsHasBeenSet = true;
  }

  return *this;
}

JsonValue Listener::Jsonize() const
{
  JsonValue payload;

  if(m_healthCheckHasBeenSet)
  {
   payload.WithObject("healthCheck", m_healthCheck.Jsonize());

  }

  if(m_portMappingHasBeenSet)
  {
   payload.WithObject("portMapping", m_portMapping.Jsonize());

  }

  if(m_tlsHasBeenSet)
  {
   payload.WithObject("tls", m_tls.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
