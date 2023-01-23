/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
