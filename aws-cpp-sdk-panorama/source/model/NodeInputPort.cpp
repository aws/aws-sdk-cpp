/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/NodeInputPort.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

NodeInputPort::NodeInputPort() : 
    m_defaultValueHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_maxConnections(0),
    m_maxConnectionsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(PortType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

NodeInputPort::NodeInputPort(JsonView jsonValue) : 
    m_defaultValueHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_maxConnections(0),
    m_maxConnectionsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(PortType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

NodeInputPort& NodeInputPort::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultValue"))
  {
    m_defaultValue = jsonValue.GetString("DefaultValue");

    m_defaultValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxConnections"))
  {
    m_maxConnections = jsonValue.GetInteger("MaxConnections");

    m_maxConnectionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = PortTypeMapper::GetPortTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue NodeInputPort::Jsonize() const
{
  JsonValue payload;

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("DefaultValue", m_defaultValue);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_maxConnectionsHasBeenSet)
  {
   payload.WithInteger("MaxConnections", m_maxConnections);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", PortTypeMapper::GetNameForPortType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
