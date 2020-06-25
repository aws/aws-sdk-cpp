/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
