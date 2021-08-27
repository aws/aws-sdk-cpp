/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/Destination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

Destination::Destination() : 
    m_destinationIdHasBeenSet(false),
    m_destinationType(DestinationType::NOT_SET),
    m_destinationTypeHasBeenSet(false),
    m_status(PublishingStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Destination::Destination(JsonView jsonValue) : 
    m_destinationIdHasBeenSet(false),
    m_destinationType(DestinationType::NOT_SET),
    m_destinationTypeHasBeenSet(false),
    m_status(PublishingStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

Destination& Destination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destinationId"))
  {
    m_destinationId = jsonValue.GetString("destinationId");

    m_destinationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationType"))
  {
    m_destinationType = DestinationTypeMapper::GetDestinationTypeForName(jsonValue.GetString("destinationType"));

    m_destinationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = PublishingStatusMapper::GetPublishingStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue Destination::Jsonize() const
{
  JsonValue payload;

  if(m_destinationIdHasBeenSet)
  {
   payload.WithString("destinationId", m_destinationId);

  }

  if(m_destinationTypeHasBeenSet)
  {
   payload.WithString("destinationType", DestinationTypeMapper::GetNameForDestinationType(m_destinationType));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", PublishingStatusMapper::GetNameForPublishingStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
