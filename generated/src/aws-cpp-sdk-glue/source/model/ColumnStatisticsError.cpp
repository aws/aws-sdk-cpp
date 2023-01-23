/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ColumnStatisticsError.h>
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

ColumnStatisticsError::ColumnStatisticsError() : 
    m_columnStatisticsHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

ColumnStatisticsError::ColumnStatisticsError(JsonView jsonValue) : 
    m_columnStatisticsHasBeenSet(false),
    m_errorHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnStatisticsError& ColumnStatisticsError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ColumnStatistics"))
  {
    m_columnStatistics = jsonValue.GetObject("ColumnStatistics");

    m_columnStatisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetObject("Error");

    m_errorHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnStatisticsError::Jsonize() const
{
  JsonValue payload;

  if(m_columnStatisticsHasBeenSet)
  {
   payload.WithObject("ColumnStatistics", m_columnStatistics.Jsonize());

  }

  if(m_errorHasBeenSet)
  {
   payload.WithObject("Error", m_error.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
