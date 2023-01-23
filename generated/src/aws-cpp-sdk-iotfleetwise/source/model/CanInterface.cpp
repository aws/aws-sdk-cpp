/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/CanInterface.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

CanInterface::CanInterface() : 
    m_nameHasBeenSet(false),
    m_protocolNameHasBeenSet(false),
    m_protocolVersionHasBeenSet(false)
{
}

CanInterface::CanInterface(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_protocolNameHasBeenSet(false),
    m_protocolVersionHasBeenSet(false)
{
  *this = jsonValue;
}

CanInterface& CanInterface::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocolName"))
  {
    m_protocolName = jsonValue.GetString("protocolName");

    m_protocolNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocolVersion"))
  {
    m_protocolVersion = jsonValue.GetString("protocolVersion");

    m_protocolVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue CanInterface::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_protocolNameHasBeenSet)
  {
   payload.WithString("protocolName", m_protocolName);

  }

  if(m_protocolVersionHasBeenSet)
  {
   payload.WithString("protocolVersion", m_protocolVersion);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
