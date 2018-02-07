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

#include <aws/ce/model/DateInterval.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

DateInterval::DateInterval() : 
    m_startHasBeenSet(false),
    m_endHasBeenSet(false)
{
}

DateInterval::DateInterval(const JsonValue& jsonValue) : 
    m_startHasBeenSet(false),
    m_endHasBeenSet(false)
{
  *this = jsonValue;
}

DateInterval& DateInterval::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Start"))
  {
    m_start = jsonValue.GetString("Start");

    m_startHasBeenSet = true;
  }

  if(jsonValue.ValueExists("End"))
  {
    m_end = jsonValue.GetString("End");

    m_endHasBeenSet = true;
  }

  return *this;
}

JsonValue DateInterval::Jsonize() const
{
  JsonValue payload;

  if(m_startHasBeenSet)
  {
   payload.WithString("Start", m_start);

  }

  if(m_endHasBeenSet)
  {
   payload.WithString("End", m_end);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
