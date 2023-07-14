/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/NotificationProperty.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

NotificationProperty::NotificationProperty() : 
    m_notifyDelayAfter(0),
    m_notifyDelayAfterHasBeenSet(false)
{
}

NotificationProperty::NotificationProperty(JsonView jsonValue) : 
    m_notifyDelayAfter(0),
    m_notifyDelayAfterHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationProperty& NotificationProperty::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NotifyDelayAfter"))
  {
    m_notifyDelayAfter = jsonValue.GetInteger("NotifyDelayAfter");

    m_notifyDelayAfterHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationProperty::Jsonize() const
{
  JsonValue payload;

  if(m_notifyDelayAfterHasBeenSet)
  {
   payload.WithInteger("NotifyDelayAfter", m_notifyDelayAfter);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
