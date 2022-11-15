/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/Order.h>
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

Order::Order() : 
    m_outpostIdHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_status(OrderStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_lineItemsHasBeenSet(false),
    m_paymentOption(PaymentOption::NOT_SET),
    m_paymentOptionHasBeenSet(false),
    m_orderSubmissionDateHasBeenSet(false),
    m_orderFulfilledDateHasBeenSet(false)
{
}

Order::Order(JsonView jsonValue) : 
    m_outpostIdHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_status(OrderStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_lineItemsHasBeenSet(false),
    m_paymentOption(PaymentOption::NOT_SET),
    m_paymentOptionHasBeenSet(false),
    m_orderSubmissionDateHasBeenSet(false),
    m_orderFulfilledDateHasBeenSet(false)
{
  *this = jsonValue;
}

Order& Order::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Status"))
  {
    m_status = OrderStatusMapper::GetOrderStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LineItems"))
  {
    Aws::Utils::Array<JsonView> lineItemsJsonList = jsonValue.GetArray("LineItems");
    for(unsigned lineItemsIndex = 0; lineItemsIndex < lineItemsJsonList.GetLength(); ++lineItemsIndex)
    {
      m_lineItems.push_back(lineItemsJsonList[lineItemsIndex].AsObject());
    }
    m_lineItemsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PaymentOption"))
  {
    m_paymentOption = PaymentOptionMapper::GetPaymentOptionForName(jsonValue.GetString("PaymentOption"));

    m_paymentOptionHasBeenSet = true;
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

JsonValue Order::Jsonize() const
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

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", OrderStatusMapper::GetNameForOrderStatus(m_status));
  }

  if(m_lineItemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lineItemsJsonList(m_lineItems.size());
   for(unsigned lineItemsIndex = 0; lineItemsIndex < lineItemsJsonList.GetLength(); ++lineItemsIndex)
   {
     lineItemsJsonList[lineItemsIndex].AsObject(m_lineItems[lineItemsIndex].Jsonize());
   }
   payload.WithArray("LineItems", std::move(lineItemsJsonList));

  }

  if(m_paymentOptionHasBeenSet)
  {
   payload.WithString("PaymentOption", PaymentOptionMapper::GetNameForPaymentOption(m_paymentOption));
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
