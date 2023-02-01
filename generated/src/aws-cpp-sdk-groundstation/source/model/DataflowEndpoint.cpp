/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/DataflowEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

DataflowEndpoint::DataflowEndpoint() : 
    m_addressHasBeenSet(false),
    m_mtu(0),
    m_mtuHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(EndpointStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

DataflowEndpoint::DataflowEndpoint(JsonView jsonValue) : 
    m_addressHasBeenSet(false),
    m_mtu(0),
    m_mtuHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(EndpointStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

DataflowEndpoint& DataflowEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("address"))
  {
    m_address = jsonValue.GetObject("address");

    m_addressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mtu"))
  {
    m_mtu = jsonValue.GetInteger("mtu");

    m_mtuHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = EndpointStatusMapper::GetEndpointStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue DataflowEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_addressHasBeenSet)
  {
   payload.WithObject("address", m_address.Jsonize());

  }

  if(m_mtuHasBeenSet)
  {
   payload.WithInteger("mtu", m_mtu);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", EndpointStatusMapper::GetNameForEndpointStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
