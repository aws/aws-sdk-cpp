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
#include <aws/swf/model/LambdaFunctionCompletedEventAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

LambdaFunctionCompletedEventAttributes::LambdaFunctionCompletedEventAttributes() : 
    m_scheduledEventId(0),
    m_scheduledEventIdHasBeenSet(false),
    m_startedEventId(0),
    m_startedEventIdHasBeenSet(false),
    m_resultHasBeenSet(false)
{
}

LambdaFunctionCompletedEventAttributes::LambdaFunctionCompletedEventAttributes(const JsonValue& jsonValue) : 
    m_scheduledEventId(0),
    m_scheduledEventIdHasBeenSet(false),
    m_startedEventId(0),
    m_startedEventIdHasBeenSet(false),
    m_resultHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaFunctionCompletedEventAttributes& LambdaFunctionCompletedEventAttributes::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("scheduledEventId"))
  {
    m_scheduledEventId = jsonValue.GetInt64("scheduledEventId");

    m_scheduledEventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedEventId"))
  {
    m_startedEventId = jsonValue.GetInt64("startedEventId");

    m_startedEventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("result"))
  {
    m_result = jsonValue.GetString("result");

    m_resultHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaFunctionCompletedEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_scheduledEventIdHasBeenSet)
  {
   payload.WithInt64("scheduledEventId", m_scheduledEventId);

  }

  if(m_startedEventIdHasBeenSet)
  {
   payload.WithInt64("startedEventId", m_startedEventId);

  }

  if(m_resultHasBeenSet)
  {
   payload.WithString("result", m_result);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws