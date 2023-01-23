/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/Subscriber.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

Subscriber::Subscriber() : 
    m_addressHasBeenSet(false),
    m_type(SubscriberType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(SubscriberStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Subscriber::Subscriber(JsonView jsonValue) : 
    m_addressHasBeenSet(false),
    m_type(SubscriberType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(SubscriberStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

Subscriber& Subscriber::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetString("Address");

    m_addressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = SubscriberTypeMapper::GetSubscriberTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = SubscriberStatusMapper::GetSubscriberStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue Subscriber::Jsonize() const
{
  JsonValue payload;

  if(m_addressHasBeenSet)
  {
   payload.WithString("Address", m_address);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", SubscriberTypeMapper::GetNameForSubscriberType(m_type));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", SubscriberStatusMapper::GetNameForSubscriberStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
