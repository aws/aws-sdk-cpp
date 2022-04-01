/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

BookingOptions::BookingOptions(JsonView jsonValue) : 
    m_autoAcceptRequests(false),
    m_autoAcceptRequestsHasBeenSet(false),
    m_autoDeclineRecurringRequests(false),
    m_autoDeclineRecurringRequestsHasBeenSet(false),
    m_autoDeclineConflictingRequests(false),
    m_autoDeclineConflictingRequestsHasBeenSet(false)
{
  *this = jsonValue;
}

BookingOptions& BookingOptions::operator =(JsonView jsonValue)
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
