/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/NotificationTargetActions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

NotificationTargetActions::NotificationTargetActions() : 
    m_lambdaActionHasBeenSet(false)
{
}

NotificationTargetActions::NotificationTargetActions(JsonView jsonValue) : 
    m_lambdaActionHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationTargetActions& NotificationTargetActions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lambdaAction"))
  {
    m_lambdaAction = jsonValue.GetObject("lambdaAction");

    m_lambdaActionHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationTargetActions::Jsonize() const
{
  JsonValue payload;

  if(m_lambdaActionHasBeenSet)
  {
   payload.WithObject("lambdaAction", m_lambdaAction.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
