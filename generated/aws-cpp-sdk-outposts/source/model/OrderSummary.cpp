/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/OrderSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Outposts
{
namespace Model
{

OrderSummary::OrderSummary() : 
    m_outpostIdHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_orderType(OrderType::NOT_SET),
    m_orderTypeHasBeenSet(false),
    m_status(OrderStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_lineItemCountsByStatusHasBeenSet(false),
    m_orderSubmissionDateHasBeenSet(false),
    m_orderFulfilledDateHasBeenSet(false)
{
}

OrderSummary::OrderSummary(JsonView jsonValue) : 
    m_outpostIdHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_orderType(OrderType::NOT_SET),
    m_orderTypeHasBeenSet(false),
    m_status(OrderStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_lineItemCountsByStatusHasBeenSet(false),
    m_orderSubmissionDateHasBeenSet(false),
    m_orderFulfilledDateHasBeenSet(false)
{
  *this = jsonValue;
}

OrderSummary& OrderSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutpostId"))
  {
    m_outpostId = jsonValue.GetString("OutpostId");

    m_outpostIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrderId"))
  {
    m_orderId = jsonValue.GetString("OrderId");

    m_orderIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrderType"))
  {
    m_orderType = OrderTypeMapper::GetOrderTypeForName(jsonValue.GetString("OrderType"));

    m_orderTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = OrderStatusMapper::GetOrderStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LineItemCountsByStatus"))
  {
    Aws::Map<Aws::String, JsonView> lineItemCountsByStatusJsonMap = jsonValue.GetObject("LineItemCountsByStatus").GetAllObjects();
    for(auto& lineItemCountsByStatusItem : lineItemCountsByStatusJsonMap)
    {
      m_lineItemCountsByStatus[LineItemStatusMapper::GetLineItemStatusForName(lineItemCountsByStatusItem.first)] = lineItemCountsByStatusItem.second.AsInteger();
    }
    m_lineItemCountsByStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrderSubmissionDate"))
  {
    m_orderSubmissionDate = jsonValue.GetDouble("OrderSubmissionDate");

    m_orderSubmissionDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrderFulfilledDate"))
  {
    m_orderFulfilledDate = jsonValue.GetDouble("OrderFulfilledDate");

    m_orderFulfilledDateHasBeenSet = true;
  }

  return *this;
}

JsonValue OrderSummary::Jsonize() const
{
  JsonValue payload;

  if(m_outpostIdHasBeenSet)
  {
   payload.WithString("OutpostId", m_outpostId);

  }

  if(m_orderIdHasBeenSet)
  {
   payload.WithString("OrderId", m_orderId);

  }

  if(m_orderTypeHasBeenSet)
  {
   payload.WithString("OrderType", OrderTypeMapper::GetNameForOrderType(m_orderType));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", OrderStatusMapper::GetNameForOrderStatus(m_status));
  }

  if(m_lineItemCountsByStatusHasBeenSet)
  {
   JsonValue lineItemCountsByStatusJsonMap;
   for(auto& lineItemCountsByStatusItem : m_lineItemCountsByStatus)
   {
     lineItemCountsByStatusJsonMap.WithInteger(LineItemStatusMapper::GetNameForLineItemStatus(lineItemCountsByStatusItem.first), lineItemCountsByStatusItem.second);
   }
   payload.WithObject("LineItemCountsByStatus", std::move(lineItemCountsByStatusJsonMap));

  }

  if(m_orderSubmissionDateHasBeenSet)
  {
   payload.WithDouble("OrderSubmissionDate", m_orderSubmissionDate.SecondsWithMSPrecision());
  }

  if(m_orderFulfilledDateHasBeenSet)
  {
   payload.WithDouble("OrderFulfilledDate", m_orderFulfilledDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
