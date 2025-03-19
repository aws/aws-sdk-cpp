/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/PhysicalEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

PhysicalEndpoint::PhysicalEndpoint(JsonView jsonValue)
{
  *this = jsonValue;
}

PhysicalEndpoint& PhysicalEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsLocation"))
  {
    m_awsLocation = jsonValue.GetObject("awsLocation");
    m_awsLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("glueConnection"))
  {
    m_glueConnection = jsonValue.GetObject("glueConnection");
    m_glueConnectionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("glueConnectionName"))
  {
    m_glueConnectionName = jsonValue.GetString("glueConnectionName");
    m_glueConnectionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("host"))
  {
    m_host = jsonValue.GetString("host");
    m_hostHasBeenSet = true;
  }
  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = ProtocolMapper::GetProtocolForName(jsonValue.GetString("protocol"));
    m_protocolHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stage"))
  {
    m_stage = jsonValue.GetString("stage");
    m_stageHasBeenSet = true;
  }
  return *this;
}

JsonValue PhysicalEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_awsLocationHasBeenSet)
  {
   payload.WithObject("awsLocation", m_awsLocation.Jsonize());

  }

  if(m_glueConnectionHasBeenSet)
  {
   payload.WithObject("glueConnection", m_glueConnection.Jsonize());

  }

  if(m_glueConnectionNameHasBeenSet)
  {
   payload.WithString("glueConnectionName", m_glueConnectionName);

  }

  if(m_hostHasBeenSet)
  {
   payload.WithString("host", m_host);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", ProtocolMapper::GetNameForProtocol(m_protocol));
  }

  if(m_stageHasBeenSet)
  {
   payload.WithString("stage", m_stage);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
