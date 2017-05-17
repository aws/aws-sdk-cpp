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

#include <aws/xray/model/HistogramEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

HistogramEntry::HistogramEntry() : 
    m_value(0.0),
    m_valueHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
}

HistogramEntry::HistogramEntry(const JsonValue& jsonValue) : 
    m_value(0.0),
    m_valueHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
  *this = jsonValue;
}

HistogramEntry& HistogramEntry::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetInteger("Count");

    m_countHasBeenSet = true;
  }

  return *this;
}

JsonValue HistogramEntry::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("Count", m_count);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws