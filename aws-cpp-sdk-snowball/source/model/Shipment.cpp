/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/Shipment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

Shipment::Shipment() : 
    m_statusHasBeenSet(false),
    m_trackingNumberHasBeenSet(false)
{
}

Shipment::Shipment(JsonView jsonValue) : 
    m_statusHasBeenSet(false),
    m_trackingNumberHasBeenSet(false)
{
  *this = jsonValue;
}

Shipment& Shipment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrackingNumber"))
  {
    m_trackingNumber = jsonValue.GetString("TrackingNumber");

    m_trackingNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue Shipment::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_trackingNumberHasBeenSet)
  {
   payload.WithString("TrackingNumber", m_trackingNumber);

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
