/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/Datum.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/Row.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

Datum::Datum(JsonView jsonValue)
{
  *this = jsonValue;
}

Datum& Datum::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scalarValue"))
  {
    m_scalarValue = jsonValue.GetString("scalarValue");
    m_scalarValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arrayValue"))
  {
    Aws::Utils::Array<JsonView> arrayValueJsonList = jsonValue.GetArray("arrayValue");
    for(unsigned arrayValueIndex = 0; arrayValueIndex < arrayValueJsonList.GetLength(); ++arrayValueIndex)
    {
      m_arrayValue.push_back(arrayValueJsonList[arrayValueIndex].AsObject());
    }
    m_arrayValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rowValue"))
  {
    m_rowValue = Aws::MakeShared<Row>("Datum", jsonValue.GetObject("rowValue"));
    m_rowValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nullValue"))
  {
    m_nullValue = jsonValue.GetBool("nullValue");
    m_nullValueHasBeenSet = true;
  }
  return *this;
}

JsonValue Datum::Jsonize() const
{
  JsonValue payload;

  if(m_scalarValueHasBeenSet)
  {
   payload.WithString("scalarValue", m_scalarValue);

  }

  if(m_arrayValueHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> arrayValueJsonList(m_arrayValue.size());
   for(unsigned arrayValueIndex = 0; arrayValueIndex < arrayValueJsonList.GetLength(); ++arrayValueIndex)
   {
     arrayValueJsonList[arrayValueIndex].AsObject(m_arrayValue[arrayValueIndex].Jsonize());
   }
   payload.WithArray("arrayValue", std::move(arrayValueJsonList));

  }

  if(m_rowValueHasBeenSet)
  {
   payload.WithObject("rowValue", m_rowValue->Jsonize());

  }

  if(m_nullValueHasBeenSet)
  {
   payload.WithBool("nullValue", m_nullValue);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
