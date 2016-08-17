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
#include <aws/inspector/model/DurationRange.h>
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

DurationRange::DurationRange() : 
    m_minimum(0),
    m_minimumHasBeenSet(false),
    m_maximum(0),
    m_maximumHasBeenSet(false)
{
}

DurationRange::DurationRange(const JsonValue& jsonValue) : 
    m_minimum(0),
    m_minimumHasBeenSet(false),
    m_maximum(0),
    m_maximumHasBeenSet(false)
{
  *this = jsonValue;
}

DurationRange& DurationRange::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("minimum"))
  {
    m_minimum = jsonValue.GetInteger("minimum");

    m_minimumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maximum"))
  {
    m_maximum = jsonValue.GetInteger("maximum");

    m_maximumHasBeenSet = true;
  }

  return *this;
}

JsonValue DurationRange::Jsonize() const
{
  JsonValue payload;

  if(m_minimumHasBeenSet)
  {
   payload.WithInteger("minimum", m_minimum);

  }

  if(m_maximumHasBeenSet)
  {
   payload.WithInteger("maximum", m_maximum);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws