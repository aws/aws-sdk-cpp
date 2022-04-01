/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/AccessEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

AccessEndpoint::AccessEndpoint() : 
    m_endpointType(AccessEndpointType::NOT_SET),
    m_endpointTypeHasBeenSet(false),
    m_vpceIdHasBeenSet(false)
{
}

AccessEndpoint::AccessEndpoint(JsonView jsonValue) : 
    m_endpointType(AccessEndpointType::NOT_SET),
    m_endpointTypeHasBeenSet(false),
    m_vpceIdHasBeenSet(false)
{
  *this = jsonValue;
}

AccessEndpoint& AccessEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointType"))
  {
    m_endpointType = AccessEndpointTypeMapper::GetAccessEndpointTypeForName(jsonValue.GetString("EndpointType"));

    m_endpointTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpceId"))
  {
    m_vpceId = jsonValue.GetString("VpceId");

    m_vpceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_endpointTypeHasBeenSet)
  {
   payload.WithString("EndpointType", AccessEndpointTypeMapper::GetNameForAccessEndpointType(m_endpointType));
  }

  if(m_vpceIdHasBeenSet)
  {
   payload.WithString("VpceId", m_vpceId);

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
