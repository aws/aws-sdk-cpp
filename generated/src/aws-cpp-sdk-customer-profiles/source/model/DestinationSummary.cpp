/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/DestinationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

DestinationSummary::DestinationSummary() : 
    m_uriHasBeenSet(false),
    m_status(EventStreamDestinationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_unhealthySinceHasBeenSet(false)
{
}

DestinationSummary::DestinationSummary(JsonView jsonValue) : 
    m_uriHasBeenSet(false),
    m_status(EventStreamDestinationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_unhealthySinceHasBeenSet(false)
{
  *this = jsonValue;
}

DestinationSummary& DestinationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Uri"))
  {
    m_uri = jsonValue.GetString("Uri");

    m_uriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = EventStreamDestinationStatusMapper::GetEventStreamDestinationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UnhealthySince"))
  {
    m_unhealthySince = jsonValue.GetDouble("UnhealthySince");

    m_unhealthySinceHasBeenSet = true;
  }

  return *this;
}

JsonValue DestinationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_uriHasBeenSet)
  {
   payload.WithString("Uri", m_uri);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", EventStreamDestinationStatusMapper::GetNameForEventStreamDestinationStatus(m_status));
  }

  if(m_unhealthySinceHasBeenSet)
  {
   payload.WithDouble("UnhealthySince", m_unhealthySince.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
