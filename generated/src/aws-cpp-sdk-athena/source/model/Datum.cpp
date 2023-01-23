/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/Datum.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

Datum::Datum() : 
    m_varCharValueHasBeenSet(false)
{
}

Datum::Datum(JsonView jsonValue) : 
    m_varCharValueHasBeenSet(false)
{
  *this = jsonValue;
}

Datum& Datum::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VarCharValue"))
  {
    m_varCharValue = jsonValue.GetString("VarCharValue");

    m_varCharValueHasBeenSet = true;
  }

  return *this;
}

JsonValue Datum::Jsonize() const
{
  JsonValue payload;

  if(m_varCharValueHasBeenSet)
  {
   payload.WithString("VarCharValue", m_varCharValue);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
