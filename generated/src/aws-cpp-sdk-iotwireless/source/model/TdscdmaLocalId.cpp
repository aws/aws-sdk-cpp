/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/TdscdmaLocalId.h>
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

TdscdmaLocalId::TdscdmaLocalId() : 
    m_uarfcn(0),
    m_uarfcnHasBeenSet(false),
    m_cellParams(0),
    m_cellParamsHasBeenSet(false)
{
}

TdscdmaLocalId::TdscdmaLocalId(JsonView jsonValue) : 
    m_uarfcn(0),
    m_uarfcnHasBeenSet(false),
    m_cellParams(0),
    m_cellParamsHasBeenSet(false)
{
  *this = jsonValue;
}

TdscdmaLocalId& TdscdmaLocalId::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Uarfcn"))
  {
    m_uarfcn = jsonValue.GetInteger("Uarfcn");

    m_uarfcnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CellParams"))
  {
    m_cellParams = jsonValue.GetInteger("CellParams");

    m_cellParamsHasBeenSet = true;
  }

  return *this;
}

JsonValue TdscdmaLocalId::Jsonize() const
{
  JsonValue payload;

  if(m_uarfcnHasBeenSet)
  {
   payload.WithInteger("Uarfcn", m_uarfcn);

  }

  if(m_cellParamsHasBeenSet)
  {
   payload.WithInteger("CellParams", m_cellParams);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
