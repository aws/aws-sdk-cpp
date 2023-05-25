/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/RemediationActionWithOrder.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

RemediationActionWithOrder::RemediationActionWithOrder() : 
    m_remediationActionHasBeenSet(false),
    m_order(0),
    m_orderHasBeenSet(false)
{
}

RemediationActionWithOrder::RemediationActionWithOrder(JsonView jsonValue) : 
    m_remediationActionHasBeenSet(false),
    m_order(0),
    m_orderHasBeenSet(false)
{
  *this = jsonValue;
}

RemediationActionWithOrder& RemediationActionWithOrder::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RemediationAction"))
  {
    m_remediationAction = jsonValue.GetObject("RemediationAction");

    m_remediationActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Order"))
  {
    m_order = jsonValue.GetInteger("Order");

    m_orderHasBeenSet = true;
  }

  return *this;
}

JsonValue RemediationActionWithOrder::Jsonize() const
{
  JsonValue payload;

  if(m_remediationActionHasBeenSet)
  {
   payload.WithObject("RemediationAction", m_remediationAction.Jsonize());

  }

  if(m_orderHasBeenSet)
  {
   payload.WithInteger("Order", m_order);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
