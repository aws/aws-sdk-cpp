/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_minimumHasBeenSet(false),
    m_maximumHasBeenSet(false)
{
}

TimestampRange::TimestampRange(const JsonValue& jsonValue) : 
    m_minimumHasBeenSet(false),
    m_maximumHasBeenSet(false)
{
  *this = jsonValue;
}

TimestampRange& TimestampRange::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("minimum"))
  {
    m_minimum = jsonValue.GetDouble("minimum");

    m_minimumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maximum"))
  {
    m_maximum = jsonValue.GetDouble("maximum");

    m_maximumHasBeenSet = true;
  }

  return *this;
}

JsonValue TimestampRange::Jsonize() const
{
  JsonValue payload;

  if(m_minimumHasBeenSet)
  {
   payload.WithDouble("minimum", m_minimum.SecondsWithMSPrecision());
  }

  if(m_maximumHasBeenSet)
  {
   payload.WithDouble("maximum", m_maximum.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws