/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/LteLocalId.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

LteLocalId::LteLocalId(JsonView jsonValue)
{
  *this = jsonValue;
}

LteLocalId& LteLocalId::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Earfcn"))
  {
    m_earfcn = jsonValue.GetInteger("Earfcn");
    m_earfcnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Pci"))
  {
    m_pci = jsonValue.GetInteger("Pci");
    m_pciHasBeenSet = true;
  }
  return *this;
}

JsonValue LteLocalId::Jsonize() const
{
  JsonValue payload;

  if(m_earfcnHasBeenSet)
  {
   payload.WithInteger("Earfcn", m_earfcn);

  }

  if(m_pciHasBeenSet)
  {
   payload.WithInteger("Pci", m_pci);

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
