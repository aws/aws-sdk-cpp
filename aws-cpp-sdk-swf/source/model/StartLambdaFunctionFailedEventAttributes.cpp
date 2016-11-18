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
#include <aws/swf/model/StartLambdaFunctionFailedEventAttributes.h>
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

StartLambdaFunctionFailedEventAttributes::StartLambdaFunctionFailedEventAttributes() : 
    m_scheduledEventId(0),
    m_scheduledEventIdHasBeenSet(false),
    m_cause(StartLambdaFunctionFailedCause::NOT_SET),
    m_causeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

StartLambdaFunctionFailedEventAttributes::StartLambdaFunctionFailedEventAttributes(const JsonValue& jsonValue) : 
    m_scheduledEventId(0),
    m_scheduledEventIdHasBeenSet(false),
    m_cause(StartLambdaFunctionFailedCause::NOT_SET),
    m_causeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

StartLambdaFunctionFailedEventAttributes& StartLambdaFunctionFailedEventAttributes::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("scheduledEventId"))
  {
    m_scheduledEventId = jsonValue.GetInt64("scheduledEventId");

    m_scheduledEventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cause"))
  {
    m_cause = StartLambdaFunctionFailedCauseMapper::GetStartLambdaFunctionFailedCauseForName(jsonValue.GetString("cause"));

    m_causeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue StartLambdaFunctionFailedEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_scheduledEventIdHasBeenSet)
  {
   payload.WithInt64("scheduledEventId", m_scheduledEventId);

  }

  if(m_causeHasBeenSet)
  {
   payload.WithString("cause", StartLambdaFunctionFailedCauseMapper::GetNameForStartLambdaFunctionFailedCause(m_cause));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws