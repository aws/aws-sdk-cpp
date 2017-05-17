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

#include <aws/shield/model/TimeRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

TimeRange::TimeRange() : 
    m_fromInclusiveHasBeenSet(false),
    m_toExclusiveHasBeenSet(false)
{
}

TimeRange::TimeRange(const JsonValue& jsonValue) : 
    m_fromInclusiveHasBeenSet(false),
    m_toExclusiveHasBeenSet(false)
{
  *this = jsonValue;
}

TimeRange& TimeRange::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("FromInclusive"))
  {
    m_fromInclusive = jsonValue.GetDouble("FromInclusive");

    m_fromInclusiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ToExclusive"))
  {
    m_toExclusive = jsonValue.GetDouble("ToExclusive");

    m_toExclusiveHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeRange::Jsonize() const
{
  JsonValue payload;

  if(m_fromInclusiveHasBeenSet)
  {
   payload.WithDouble("FromInclusive", m_fromInclusive.SecondsWithMSPrecision());
  }

  if(m_toExclusiveHasBeenSet)
  {
   payload.WithDouble("ToExclusive", m_toExclusive.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws