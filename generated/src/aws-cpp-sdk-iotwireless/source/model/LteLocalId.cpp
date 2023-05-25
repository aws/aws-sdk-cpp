/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LteLocalId.h>
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

LteLocalId::LteLocalId() : 
    m_pci(0),
    m_pciHasBeenSet(false),
    m_earfcn(0),
    m_earfcnHasBeenSet(false)
{
}

LteLocalId::LteLocalId(JsonView jsonValue) : 
    m_pci(0),
    m_pciHasBeenSet(false),
    m_earfcn(0),
    m_earfcnHasBeenSet(false)
{
  *this = jsonValue;
}

LteLocalId& LteLocalId::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Pci"))
  {
    m_pci = jsonValue.GetInteger("Pci");

    m_pciHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Earfcn"))
  {
    m_earfcn = jsonValue.GetInteger("Earfcn");

    m_earfcnHasBeenSet = true;
  }

  return *this;
}

JsonValue LteLocalId::Jsonize() const
{
  JsonValue payload;

  if(m_pciHasBeenSet)
  {
   payload.WithInteger("Pci", m_pci);

  }

  if(m_earfcnHasBeenSet)
  {
   payload.WithInteger("Earfcn", m_earfcn);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
