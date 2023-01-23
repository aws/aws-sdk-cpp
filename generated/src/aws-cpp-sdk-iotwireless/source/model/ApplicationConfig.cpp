/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/ApplicationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

ApplicationConfig::ApplicationConfig() : 
    m_fPort(0),
    m_fPortHasBeenSet(false),
    m_type(ApplicationConfigType::NOT_SET),
    m_typeHasBeenSet(false),
    m_destinationNameHasBeenSet(false)
{
}

ApplicationConfig::ApplicationConfig(JsonView jsonValue) : 
    m_fPort(0),
    m_fPortHasBeenSet(false),
    m_type(ApplicationConfigType::NOT_SET),
    m_typeHasBeenSet(false),
    m_destinationNameHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationConfig& ApplicationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FPort"))
  {
    m_fPort = jsonValue.GetInteger("FPort");

    m_fPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ApplicationConfigTypeMapper::GetApplicationConfigTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationName"))
  {
    m_destinationName = jsonValue.GetString("DestinationName");

    m_destinationNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_fPortHasBeenSet)
  {
   payload.WithInteger("FPort", m_fPort);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ApplicationConfigTypeMapper::GetNameForApplicationConfigType(m_type));
  }

  if(m_destinationNameHasBeenSet)
  {
   payload.WithString("DestinationName", m_destinationName);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
