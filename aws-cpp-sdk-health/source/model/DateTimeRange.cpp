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

#include <aws/health/model/DateTimeRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Health
{
namespace Model
{

DateTimeRange::DateTimeRange() : 
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false)
{
}

DateTimeRange::DateTimeRange(const JsonValue& jsonValue) : 
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false)
{
  *this = jsonValue;
}

DateTimeRange& DateTimeRange::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("from"))
  {
    m_from = jsonValue.GetDouble("from");

    m_fromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("to"))
  {
    m_to = jsonValue.GetDouble("to");

    m_toHasBeenSet = true;
  }

  return *this;
}

JsonValue DateTimeRange::Jsonize() const
{
  JsonValue payload;

  if(m_fromHasBeenSet)
  {
   payload.WithDouble("from", m_from.SecondsWithMSPrecision());
  }

  if(m_toHasBeenSet)
  {
   payload.WithDouble("to", m_to.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Health
} // namespace Aws