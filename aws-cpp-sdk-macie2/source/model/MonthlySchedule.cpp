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

#include <aws/macie2/model/MonthlySchedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

MonthlySchedule::MonthlySchedule() : 
    m_dayOfMonth(0),
    m_dayOfMonthHasBeenSet(false)
{
}

MonthlySchedule::MonthlySchedule(JsonView jsonValue) : 
    m_dayOfMonth(0),
    m_dayOfMonthHasBeenSet(false)
{
  *this = jsonValue;
}

MonthlySchedule& MonthlySchedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dayOfMonth"))
  {
    m_dayOfMonth = jsonValue.GetInteger("dayOfMonth");

    m_dayOfMonthHasBeenSet = true;
  }

  return *this;
}

JsonValue MonthlySchedule::Jsonize() const
{
  JsonValue payload;

  if(m_dayOfMonthHasBeenSet)
  {
   payload.WithInteger("dayOfMonth", m_dayOfMonth);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
