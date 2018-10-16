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

#include <aws/lightsail/model/RelationalDatabaseEndpoint.h>
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

RelationalDatabaseEndpoint::RelationalDatabaseEndpoint() : 
    m_port(0),
    m_portHasBeenSet(false),
    m_addressHasBeenSet(false)
{
}

RelationalDatabaseEndpoint::RelationalDatabaseEndpoint(JsonView jsonValue) : 
    m_port(0),
    m_portHasBeenSet(false),
    m_addressHasBeenSet(false)
{
  *this = jsonValue;
}

RelationalDatabaseEndpoint& RelationalDatabaseEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("address"))
  {
    m_address = jsonValue.GetString("address");

    m_addressHasBeenSet = true;
  }

  return *this;
}

JsonValue RelationalDatabaseEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_addressHasBeenSet)
  {
   payload.WithString("address", m_address);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
