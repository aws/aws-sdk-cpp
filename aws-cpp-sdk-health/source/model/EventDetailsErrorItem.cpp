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

#include <aws/health/model/EventDetailsErrorItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Health
{
namespace Model
{

EventDetailsErrorItem::EventDetailsErrorItem() : 
    m_eventArnHasBeenSet(false),
    m_errorNameHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

EventDetailsErrorItem::EventDetailsErrorItem(const JsonValue& jsonValue) : 
    m_eventArnHasBeenSet(false),
    m_errorNameHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

EventDetailsErrorItem& EventDetailsErrorItem::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("eventArn"))
  {
    m_eventArn = jsonValue.GetString("eventArn");

    m_eventArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorName"))
  {
    m_errorName = jsonValue.GetString("errorName");

    m_errorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue EventDetailsErrorItem::Jsonize() const
{
  JsonValue payload;

  if(m_eventArnHasBeenSet)
  {
   payload.WithString("eventArn", m_eventArn);

  }

  if(m_errorNameHasBeenSet)
  {
   payload.WithString("errorName", m_errorName);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace Health
} // namespace Aws