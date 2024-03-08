/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Endpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

Endpoint::Endpoint() : 
    m_type(EndpointType::NOT_SET),
    m_typeHasBeenSet(false),
    m_addressHasBeenSet(false)
{
}

Endpoint::Endpoint(JsonView jsonValue) : 
    m_type(EndpointType::NOT_SET),
    m_typeHasBeenSet(false),
    m_addressHasBeenSet(false)
{
  *this = jsonValue;
}

Endpoint& Endpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = EndpointTypeMapper::GetEndpointTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetString("Address");

    m_addressHasBeenSet = true;
  }

  return *this;
}

JsonValue Endpoint::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", EndpointTypeMapper::GetNameForEndpointType(m_type));
  }

  if(m_addressHasBeenSet)
  {
   payload.WithString("Address", m_address);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
