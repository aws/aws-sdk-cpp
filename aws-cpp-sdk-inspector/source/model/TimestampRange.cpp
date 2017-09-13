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

#include <aws/inspector/model/TimestampRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

TimestampRange::TimestampRange() : 
    m_beginDateHasBeenSet(false),
    m_endDateHasBeenSet(false)
{
}

TimestampRange::TimestampRange(const JsonValue& jsonValue) : 
    m_beginDateHasBeenSet(false),
    m_endDateHasBeenSet(false)
{
  *this = jsonValue;
}

TimestampRange& TimestampRange::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("beginDate"))
  {
    m_beginDate = jsonValue.GetDouble("beginDate");

    m_beginDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endDate"))
  {
    m_endDate = jsonValue.GetDouble("endDate");

    m_endDateHasBeenSet = true;
  }

  return *this;
}

JsonValue TimestampRange::Jsonize() const
{
  JsonValue payload;

  if(m_beginDateHasBeenSet)
  {
   payload.WithDouble("beginDate", m_beginDate.SecondsWithMSPrecision());
  }

  if(m_endDateHasBeenSet)
  {
   payload.WithDouble("endDate", m_endDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
