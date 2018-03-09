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

#include <aws/workmail/model/BookingOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkMail
{
namespace Model
{

BookingOptions::BookingOptions() : 
    m_autoAcceptRequests(false),
    m_autoAcceptRequestsHasBeenSet(false),
    m_autoDeclineRecurringRequests(false),
    m_autoDeclineRecurringRequestsHasBeenSet(false),
    m_autoDeclineConflictingRequests(false),
    m_autoDeclineConflictingRequestsHasBeenSet(false)
{
}

BookingOptions::BookingOptions(const JsonValue& jsonValue) : 
    m_autoAcceptRequests(false),
    m_autoAcceptRequestsHasBeenSet(false),
    m_autoDeclineRecurringRequests(false),
    m_autoDeclineRecurringRequestsHasBeenSet(false),
    m_autoDeclineConflictingRequests(false),
    m_autoDeclineConflictingRequestsHasBeenSet(false)
{
  *this = jsonValue;
}

BookingOptions& BookingOptions::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AutoAcceptRequests"))
  {
    m_autoAcceptRequests = jsonValue.GetBool("AutoAcceptRequests");

    m_autoAcceptRequestsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoDeclineRecurringRequests"))
  {
    m_autoDeclineRecurringRequests = jsonValue.GetBool("AutoDeclineRecurringRequests");

    m_autoDeclineRecurringRequestsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoDeclineConflictingRequests"))
  {
    m_autoDeclineConflictingRequests = jsonValue.GetBool("AutoDeclineConflictingRequests");

    m_autoDeclineConflictingRequestsHasBeenSet = true;
  }

  return *this;
}

JsonValue BookingOptions::Jsonize() const
{
  JsonValue payload;

  if(m_autoAcceptRequestsHasBeenSet)
  {
   payload.WithBool("AutoAcceptRequests", m_autoAcceptRequests);

  }

  if(m_autoDeclineRecurringRequestsHasBeenSet)
  {
   payload.WithBool("AutoDeclineRecurringRequests", m_autoDeclineRecurringRequests);

  }

  if(m_autoDeclineConflictingRequestsHasBeenSet)
  {
   payload.WithBool("AutoDeclineConflictingRequests", m_autoDeclineConflictingRequests);

  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
