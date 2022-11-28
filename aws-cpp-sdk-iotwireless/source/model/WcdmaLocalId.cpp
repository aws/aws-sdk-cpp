/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/WcdmaLocalId.h>
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

WcdmaLocalId::WcdmaLocalId() : 
    m_uarfcndl(0),
    m_uarfcndlHasBeenSet(false),
    m_psc(0),
    m_pscHasBeenSet(false)
{
}

WcdmaLocalId::WcdmaLocalId(JsonView jsonValue) : 
    m_uarfcndl(0),
    m_uarfcndlHasBeenSet(false),
    m_psc(0),
    m_pscHasBeenSet(false)
{
  *this = jsonValue;
}

WcdmaLocalId& WcdmaLocalId::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Uarfcndl"))
  {
    m_uarfcndl = jsonValue.GetInteger("Uarfcndl");

    m_uarfcndlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Psc"))
  {
    m_psc = jsonValue.GetInteger("Psc");

    m_pscHasBeenSet = true;
  }

  return *this;
}

JsonValue WcdmaLocalId::Jsonize() const
{
  JsonValue payload;

  if(m_uarfcndlHasBeenSet)
  {
   payload.WithInteger("Uarfcndl", m_uarfcndl);

  }

  if(m_pscHasBeenSet)
  {
   payload.WithInteger("Psc", m_psc);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
