/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ColumnStatisticsData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

ColumnStatisticsData::ColumnStatisticsData() : 
    m_type(ColumnStatisticsType::NOT_SET),
    m_typeHasBeenSet(false),
    m_booleanColumnStatisticsDataHasBeenSet(false),
    m_dateColumnStatisticsDataHasBeenSet(false),
    m_decimalColumnStatisticsDataHasBeenSet(false),
    m_doubleColumnStatisticsDataHasBeenSet(false),
    m_longColumnStatisticsDataHasBeenSet(false),
    m_stringColumnStatisticsDataHasBeenSet(false),
    m_binaryColumnStatisticsDataHasBeenSet(false)
{
}

ColumnStatisticsData::ColumnStatisticsData(JsonView jsonValue) : 
    m_type(ColumnStatisticsType::NOT_SET),
    m_typeHasBeenSet(false),
    m_booleanColumnStatisticsDataHasBeenSet(false),
    m_dateColumnStatisticsDataHasBeenSet(false),
    m_decimalColumnStatisticsDataHasBeenSet(false),
    m_doubleColumnStatisticsDataHasBeenSet(false),
    m_longColumnStatisticsDataHasBeenSet(false),
    m_stringColumnStatisticsDataHasBeenSet(false),
    m_binaryColumnStatisticsDataHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnStatisticsData& ColumnStatisticsData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = ColumnStatisticsTypeMapper::GetColumnStatisticsTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BooleanColumnStatisticsData"))
  {
    m_booleanColumnStatisticsData = jsonValue.GetObject("BooleanColumnStatisticsData");

    m_booleanColumnStatisticsDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateColumnStatisticsData"))
  {
    m_dateColumnStatisticsData = jsonValue.GetObject("DateColumnStatisticsData");

    m_dateColumnStatisticsDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DecimalColumnStatisticsData"))
  {
    m_decimalColumnStatisticsData = jsonValue.GetObject("DecimalColumnStatisticsData");

    m_decimalColumnStatisticsDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DoubleColumnStatisticsData"))
  {
    m_doubleColumnStatisticsData = jsonValue.GetObject("DoubleColumnStatisticsData");

    m_doubleColumnStatisticsDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LongColumnStatisticsData"))
  {
    m_longColumnStatisticsData = jsonValue.GetObject("LongColumnStatisticsData");

    m_longColumnStatisticsDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StringColumnStatisticsData"))
  {
    m_stringColumnStatisticsData = jsonValue.GetObject("StringColumnStatisticsData");

    m_stringColumnStatisticsDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BinaryColumnStatisticsData"))
  {
    m_binaryColumnStatisticsData = jsonValue.GetObject("BinaryColumnStatisticsData");

    m_binaryColumnStatisticsDataHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnStatisticsData::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ColumnStatisticsTypeMapper::GetNameForColumnStatisticsType(m_type));
  }

  if(m_booleanColumnStatisticsDataHasBeenSet)
  {
   payload.WithObject("BooleanColumnStatisticsData", m_booleanColumnStatisticsData.Jsonize());

  }

  if(m_dateColumnStatisticsDataHasBeenSet)
  {
   payload.WithObject("DateColumnStatisticsData", m_dateColumnStatisticsData.Jsonize());

  }

  if(m_decimalColumnStatisticsDataHasBeenSet)
  {
   payload.WithObject("DecimalColumnStatisticsData", m_decimalColumnStatisticsData.Jsonize());

  }

  if(m_doubleColumnStatisticsDataHasBeenSet)
  {
   payload.WithObject("DoubleColumnStatisticsData", m_doubleColumnStatisticsData.Jsonize());

  }

  if(m_longColumnStatisticsDataHasBeenSet)
  {
   payload.WithObject("LongColumnStatisticsData", m_longColumnStatisticsData.Jsonize());

  }

  if(m_stringColumnStatisticsDataHasBeenSet)
  {
   payload.WithObject("StringColumnStatisticsData", m_stringColumnStatisticsData.Jsonize());

  }

  if(m_binaryColumnStatisticsDataHasBeenSet)
  {
   payload.WithObject("BinaryColumnStatisticsData", m_binaryColumnStatisticsData.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
