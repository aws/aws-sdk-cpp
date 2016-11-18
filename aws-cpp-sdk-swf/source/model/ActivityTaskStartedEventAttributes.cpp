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
#include <aws/swf/model/ActivityTaskStartedEventAttributes.h>
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

ActivityTaskStartedEventAttributes::ActivityTaskStartedEventAttributes() : 
    m_identityHasBeenSet(false),
    m_scheduledEventId(0),
    m_scheduledEventIdHasBeenSet(false)
{
}

ActivityTaskStartedEventAttributes::ActivityTaskStartedEventAttributes(const JsonValue& jsonValue) : 
    m_identityHasBeenSet(false),
    m_scheduledEventId(0),
    m_scheduledEventIdHasBeenSet(false)
{
  *this = jsonValue;
}

ActivityTaskStartedEventAttributes& ActivityTaskStartedEventAttributes::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("identity"))
  {
    m_identity = jsonValue.GetString("identity");

    m_identityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scheduledEventId"))
  {
    m_scheduledEventId = jsonValue.GetInt64("scheduledEventId");

    m_scheduledEventIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ActivityTaskStartedEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_identityHasBeenSet)
  {
   payload.WithString("identity", m_identity);

  }

  if(m_scheduledEventIdHasBeenSet)
  {
   payload.WithInt64("scheduledEventId", m_scheduledEventId);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws