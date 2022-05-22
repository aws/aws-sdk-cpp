/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ActionLocalPortDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

ActionLocalPortDetails::ActionLocalPortDetails() : 
    m_port(0),
    m_portHasBeenSet(false),
    m_portNameHasBeenSet(false)
{
}

ActionLocalPortDetails::ActionLocalPortDetails(JsonView jsonValue) : 
    m_port(0),
    m_portHasBeenSet(false),
    m_portNameHasBeenSet(false)
{
  *this = jsonValue;
}

ActionLocalPortDetails& ActionLocalPortDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PortName"))
  {
    m_portName = jsonValue.GetString("PortName");

    m_portNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionLocalPortDetails::Jsonize() const
{
  JsonValue payload;

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_portNameHasBeenSet)
  {
   payload.WithString("PortName", m_portName);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
