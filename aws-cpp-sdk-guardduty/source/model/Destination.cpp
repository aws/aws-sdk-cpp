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
