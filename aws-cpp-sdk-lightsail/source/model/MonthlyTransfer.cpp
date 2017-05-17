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

#include <aws/lightsail/model/MonthlyTransfer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

MonthlyTransfer::MonthlyTransfer() : 
    m_gbPerMonthAllocated(0),
    m_gbPerMonthAllocatedHasBeenSet(false)
{
}

MonthlyTransfer::MonthlyTransfer(const JsonValue& jsonValue) : 
    m_gbPerMonthAllocated(0),
    m_gbPerMonthAllocatedHasBeenSet(false)
{
  *this = jsonValue;
}

MonthlyTransfer& MonthlyTransfer::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("gbPerMonthAllocated"))
  {
    m_gbPerMonthAllocated = jsonValue.GetInteger("gbPerMonthAllocated");

    m_gbPerMonthAllocatedHasBeenSet = true;
  }

  return *this;
}

JsonValue MonthlyTransfer::Jsonize() const
{
  JsonValue payload;

  if(m_gbPerMonthAllocatedHasBeenSet)
  {
   payload.WithInteger("gbPerMonthAllocated", m_gbPerMonthAllocated);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws