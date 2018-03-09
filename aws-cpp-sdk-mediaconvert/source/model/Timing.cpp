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

#include <aws/mediaconvert/model/Timing.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

Timing::Timing() : 
    m_finishTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_submitTimeHasBeenSet(false)
{
}

Timing::Timing(const JsonValue& jsonValue) : 
    m_finishTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_submitTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Timing& Timing::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("finishTime"))
  {
    m_finishTime = jsonValue.GetDouble("finishTime");

    m_finishTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("submitTime"))
  {
    m_submitTime = jsonValue.GetDouble("submitTime");

    m_submitTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Timing::Jsonize() const
{
  JsonValue payload;

  if(m_finishTimeHasBeenSet)
  {
   payload.WithDouble("finishTime", m_finishTime.SecondsWithMSPrecision());
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_submitTimeHasBeenSet)
  {
   payload.WithDouble("submitTime", m_submitTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
