/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ColumnType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

ColumnType::ColumnType() : 
    m_scalarType(ScalarType::NOT_SET),
    m_scalarTypeHasBeenSet(false)
{
}

ColumnType::ColumnType(JsonView jsonValue) : 
    m_scalarType(ScalarType::NOT_SET),
    m_scalarTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnType& ColumnType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scalarType"))
  {
    m_scalarType = ScalarTypeMapper::GetScalarTypeForName(jsonValue.GetString("scalarType"));

    m_scalarTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnType::Jsonize() const
{
  JsonValue payload;

  if(m_scalarTypeHasBeenSet)
  {
   payload.WithString("scalarType", ScalarTypeMapper::GetNameForScalarType(m_scalarType));
  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
