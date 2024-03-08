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

Datum::Datum() : 
    m_scalarValueHasBeenSet(false),
    m_arrayValueHasBeenSet(false),
    m_rowValueHasBeenSet(false),
    m_nullValue(false),
    m_nullValueHasBeenSet(false)
{
}

Datum::Datum(JsonView jsonValue) : 
    m_scalarValueHasBeenSet(false),
    m_arrayValueHasBeenSet(false),
    m_rowValueHasBeenSet(false),
    m_nullValue(false),
    m_nullValueHasBeenSet(false)
{
  *this = jsonValue;
}

const Row& Datum::GetRowValue() const{ return *m_rowValue; }
bool Datum::RowValueHasBeenSet() const { return m_rowValueHasBeenSet; }
void Datum::SetRowValue(const Row& value) { m_rowValueHasBeenSet = true; m_rowValue = Aws::MakeShared<Row>("Datum", value); }
void Datum::SetRowValue(Row&& value) { m_rowValueHasBeenSet = true; m_rowValue = Aws::MakeShared<Row>("Datum", std::move(value)); }
Datum& Datum::WithRowValue(const Row& value) { SetRowValue(value); return *this;}
Datum& Datum::WithRowValue(Row&& value) { SetRowValue(std::move(value)); return *this;}

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
