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
    m_minSeconds(0),
    m_minSecondsHasBeenSet(false),
    m_maxSeconds(0),
    m_maxSecondsHasBeenSet(false)
{
}

DurationRange::DurationRange(const JsonValue& jsonValue) : 
    m_minSeconds(0),
    m_minSecondsHasBeenSet(false),
    m_maxSeconds(0),
    m_maxSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

DurationRange& DurationRange::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("minSeconds"))
  {
    m_minSeconds = jsonValue.GetInteger("minSeconds");

    m_minSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxSeconds"))
  {
    m_maxSeconds = jsonValue.GetInteger("maxSeconds");

    m_maxSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue DurationRange::Jsonize() const
{
  JsonValue payload;

  if(m_minSecondsHasBeenSet)
  {
   payload.WithInteger("minSeconds", m_minSeconds);

  }

  if(m_maxSecondsHasBeenSet)
  {
   payload.WithInteger("maxSeconds", m_maxSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
