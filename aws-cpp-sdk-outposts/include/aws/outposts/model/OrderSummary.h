/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/OrderType.h>
#include <aws/outposts/model/OrderStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/outposts/model/LineItemStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Outposts
{
namespace Model
{

  /**
   * <p> A summary of line items in your order. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/OrderSummary">AWS
   * API Reference</a></p>
   */
  class OrderSummary
  {
  public:
    AWS_OUTPOSTS_API OrderSummary();
    AWS_OUTPOSTS_API OrderSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API OrderSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The ID of the Outpost. </p>
     */
    inline const Aws::String& GetOutpostId() const{ return m_outpostId; }

    /**
     * <p> The ID of the Outpost. </p>
     */
    inline bool OutpostIdHasBeenSet() const { return m_outpostIdHasBeenSet; }

    /**
     * <p> The ID of the Outpost. </p>
     */
    inline void SetOutpostId(const Aws::String& value) { m_outpostIdHasBeenSet = true; m_outpostId = value; }

    /**
     * <p> The ID of the Outpost. </p>
     */
    inline void SetOutpostId(Aws::String&& value) { m_outpostIdHasBeenSet = true; m_outpostId = std::move(value); }

    /**
     * <p> The ID of the Outpost. </p>
     */
    inline void SetOutpostId(const char* value) { m_outpostIdHasBeenSet = true; m_outpostId.assign(value); }

    /**
     * <p> The ID of the Outpost. </p>
     */
    inline OrderSummary& WithOutpostId(const Aws::String& value) { SetOutpostId(value); return *this;}

    /**
     * <p> The ID of the Outpost. </p>
     */
    inline OrderSummary& WithOutpostId(Aws::String&& value) { SetOutpostId(std::move(value)); return *this;}

    /**
     * <p> The ID of the Outpost. </p>
     */
    inline OrderSummary& WithOutpostId(const char* value) { SetOutpostId(value); return *this;}


    /**
     * <p> The ID of the order. </p>
     */
    inline const Aws::String& GetOrderId() const{ return m_orderId; }

    /**
     * <p> The ID of the order. </p>
     */
    inline bool OrderIdHasBeenSet() const { return m_orderIdHasBeenSet; }

    /**
     * <p> The ID of the order. </p>
     */
    inline void SetOrderId(const Aws::String& value) { m_orderIdHasBeenSet = true; m_orderId = value; }

    /**
     * <p> The ID of the order. </p>
     */
    inline void SetOrderId(Aws::String&& value) { m_orderIdHasBeenSet = true; m_orderId = std::move(value); }

    /**
     * <p> The ID of the order. </p>
     */
    inline void SetOrderId(const char* value) { m_orderIdHasBeenSet = true; m_orderId.assign(value); }

    /**
     * <p> The ID of the order. </p>
     */
    inline OrderSummary& WithOrderId(const Aws::String& value) { SetOrderId(value); return *this;}

    /**
     * <p> The ID of the order. </p>
     */
    inline OrderSummary& WithOrderId(Aws::String&& value) { SetOrderId(std::move(value)); return *this;}

    /**
     * <p> The ID of the order. </p>
     */
    inline OrderSummary& WithOrderId(const char* value) { SetOrderId(value); return *this;}


    /**
     * <p> The type of order. </p>
     */
    inline const OrderType& GetOrderType() const{ return m_orderType; }

    /**
     * <p> The type of order. </p>
     */
    inline bool OrderTypeHasBeenSet() const { return m_orderTypeHasBeenSet; }

    /**
     * <p> The type of order. </p>
     */
    inline void SetOrderType(const OrderType& value) { m_orderTypeHasBeenSet = true; m_orderType = value; }

    /**
     * <p> The type of order. </p>
     */
    inline void SetOrderType(OrderType&& value) { m_orderTypeHasBeenSet = true; m_orderType = std::move(value); }

    /**
     * <p> The type of order. </p>
     */
    inline OrderSummary& WithOrderType(const OrderType& value) { SetOrderType(value); return *this;}

    /**
     * <p> The type of order. </p>
     */
    inline OrderSummary& WithOrderType(OrderType&& value) { SetOrderType(std::move(value)); return *this;}


    /**
     * <p>The status of the order.</p> <ul> <li> <p> <code>PREPARING</code> - Order is
     * received and is being prepared.</p> </li> <li> <p> <code>IN_PROGRESS</code> -
     * Order is either being built, shipped, or installed. For more information, see
     * the <code>LineItem</code> status.</p> </li> <li> <p> <code>COMPLETED</code> -
     * Order is complete.</p> </li> <li> <p> <code>CANCELLED</code> - Order is
     * cancelled.</p> </li> <li> <p> <code>ERROR</code> - Customer should contact
     * support.</p> </li> </ul>  <p>The following statuses are deprecated:
     * <code>RECEIVED</code>, <code>PENDING</code>, <code>PROCESSING</code>,
     * <code>INSTALLING</code>, and <code>FULFILLED</code>. </p> 
     */
    inline const OrderStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the order.</p> <ul> <li> <p> <code>PREPARING</code> - Order is
     * received and is being prepared.</p> </li> <li> <p> <code>IN_PROGRESS</code> -
     * Order is either being built, shipped, or installed. For more information, see
     * the <code>LineItem</code> status.</p> </li> <li> <p> <code>COMPLETED</code> -
     * Order is complete.</p> </li> <li> <p> <code>CANCELLED</code> - Order is
     * cancelled.</p> </li> <li> <p> <code>ERROR</code> - Customer should contact
     * support.</p> </li> </ul>  <p>The following statuses are deprecated:
     * <code>RECEIVED</code>, <code>PENDING</code>, <code>PROCESSING</code>,
     * <code>INSTALLING</code>, and <code>FULFILLED</code>. </p> 
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the order.</p> <ul> <li> <p> <code>PREPARING</code> - Order is
     * received and is being prepared.</p> </li> <li> <p> <code>IN_PROGRESS</code> -
     * Order is either being built, shipped, or installed. For more information, see
     * the <code>LineItem</code> status.</p> </li> <li> <p> <code>COMPLETED</code> -
     * Order is complete.</p> </li> <li> <p> <code>CANCELLED</code> - Order is
     * cancelled.</p> </li> <li> <p> <code>ERROR</code> - Customer should contact
     * support.</p> </li> </ul>  <p>The following statuses are deprecated:
     * <code>RECEIVED</code>, <code>PENDING</code>, <code>PROCESSING</code>,
     * <code>INSTALLING</code>, and <code>FULFILLED</code>. </p> 
     */
    inline void SetStatus(const OrderStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the order.</p> <ul> <li> <p> <code>PREPARING</code> - Order is
     * received and is being prepared.</p> </li> <li> <p> <code>IN_PROGRESS</code> -
     * Order is either being built, shipped, or installed. For more information, see
     * the <code>LineItem</code> status.</p> </li> <li> <p> <code>COMPLETED</code> -
     * Order is complete.</p> </li> <li> <p> <code>CANCELLED</code> - Order is
     * cancelled.</p> </li> <li> <p> <code>ERROR</code> - Customer should contact
     * support.</p> </li> </ul>  <p>The following statuses are deprecated:
     * <code>RECEIVED</code>, <code>PENDING</code>, <code>PROCESSING</code>,
     * <code>INSTALLING</code>, and <code>FULFILLED</code>. </p> 
     */
    inline void SetStatus(OrderStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the order.</p> <ul> <li> <p> <code>PREPARING</code> - Order is
     * received and is being prepared.</p> </li> <li> <p> <code>IN_PROGRESS</code> -
     * Order is either being built, shipped, or installed. For more information, see
     * the <code>LineItem</code> status.</p> </li> <li> <p> <code>COMPLETED</code> -
     * Order is complete.</p> </li> <li> <p> <code>CANCELLED</code> - Order is
     * cancelled.</p> </li> <li> <p> <code>ERROR</code> - Customer should contact
     * support.</p> </li> </ul>  <p>The following statuses are deprecated:
     * <code>RECEIVED</code>, <code>PENDING</code>, <code>PROCESSING</code>,
     * <code>INSTALLING</code>, and <code>FULFILLED</code>. </p> 
     */
    inline OrderSummary& WithStatus(const OrderStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the order.</p> <ul> <li> <p> <code>PREPARING</code> - Order is
     * received and is being prepared.</p> </li> <li> <p> <code>IN_PROGRESS</code> -
     * Order is either being built, shipped, or installed. For more information, see
     * the <code>LineItem</code> status.</p> </li> <li> <p> <code>COMPLETED</code> -
     * Order is complete.</p> </li> <li> <p> <code>CANCELLED</code> - Order is
     * cancelled.</p> </li> <li> <p> <code>ERROR</code> - Customer should contact
     * support.</p> </li> </ul>  <p>The following statuses are deprecated:
     * <code>RECEIVED</code>, <code>PENDING</code>, <code>PROCESSING</code>,
     * <code>INSTALLING</code>, and <code>FULFILLED</code>. </p> 
     */
    inline OrderSummary& WithStatus(OrderStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The status of all line items in the order. </p>
     */
    inline const Aws::Map<LineItemStatus, int>& GetLineItemCountsByStatus() const{ return m_lineItemCountsByStatus; }

    /**
     * <p> The status of all line items in the order. </p>
     */
    inline bool LineItemCountsByStatusHasBeenSet() const { return m_lineItemCountsByStatusHasBeenSet; }

    /**
     * <p> The status of all line items in the order. </p>
     */
    inline void SetLineItemCountsByStatus(const Aws::Map<LineItemStatus, int>& value) { m_lineItemCountsByStatusHasBeenSet = true; m_lineItemCountsByStatus = value; }

    /**
     * <p> The status of all line items in the order. </p>
     */
    inline void SetLineItemCountsByStatus(Aws::Map<LineItemStatus, int>&& value) { m_lineItemCountsByStatusHasBeenSet = true; m_lineItemCountsByStatus = std::move(value); }

    /**
     * <p> The status of all line items in the order. </p>
     */
    inline OrderSummary& WithLineItemCountsByStatus(const Aws::Map<LineItemStatus, int>& value) { SetLineItemCountsByStatus(value); return *this;}

    /**
     * <p> The status of all line items in the order. </p>
     */
    inline OrderSummary& WithLineItemCountsByStatus(Aws::Map<LineItemStatus, int>&& value) { SetLineItemCountsByStatus(std::move(value)); return *this;}

    /**
     * <p> The status of all line items in the order. </p>
     */
    inline OrderSummary& AddLineItemCountsByStatus(const LineItemStatus& key, int value) { m_lineItemCountsByStatusHasBeenSet = true; m_lineItemCountsByStatus.emplace(key, value); return *this; }

    /**
     * <p> The status of all line items in the order. </p>
     */
    inline OrderSummary& AddLineItemCountsByStatus(LineItemStatus&& key, int value) { m_lineItemCountsByStatusHasBeenSet = true; m_lineItemCountsByStatus.emplace(std::move(key), value); return *this; }


    /**
     * <p> The submission date for the order. </p>
     */
    inline const Aws::Utils::DateTime& GetOrderSubmissionDate() const{ return m_orderSubmissionDate; }

    /**
     * <p> The submission date for the order. </p>
     */
    inline bool OrderSubmissionDateHasBeenSet() const { return m_orderSubmissionDateHasBeenSet; }

    /**
     * <p> The submission date for the order. </p>
     */
    inline void SetOrderSubmissionDate(const Aws::Utils::DateTime& value) { m_orderSubmissionDateHasBeenSet = true; m_orderSubmissionDate = value; }

    /**
     * <p> The submission date for the order. </p>
     */
    inline void SetOrderSubmissionDate(Aws::Utils::DateTime&& value) { m_orderSubmissionDateHasBeenSet = true; m_orderSubmissionDate = std::move(value); }

    /**
     * <p> The submission date for the order. </p>
     */
    inline OrderSummary& WithOrderSubmissionDate(const Aws::Utils::DateTime& value) { SetOrderSubmissionDate(value); return *this;}

    /**
     * <p> The submission date for the order. </p>
     */
    inline OrderSummary& WithOrderSubmissionDate(Aws::Utils::DateTime&& value) { SetOrderSubmissionDate(std::move(value)); return *this;}


    /**
     * <p> The fulfilment date for the order. </p>
     */
    inline const Aws::Utils::DateTime& GetOrderFulfilledDate() const{ return m_orderFulfilledDate; }

    /**
     * <p> The fulfilment date for the order. </p>
     */
    inline bool OrderFulfilledDateHasBeenSet() const { return m_orderFulfilledDateHasBeenSet; }

    /**
     * <p> The fulfilment date for the order. </p>
     */
    inline void SetOrderFulfilledDate(const Aws::Utils::DateTime& value) { m_orderFulfilledDateHasBeenSet = true; m_orderFulfilledDate = value; }

    /**
     * <p> The fulfilment date for the order. </p>
     */
    inline void SetOrderFulfilledDate(Aws::Utils::DateTime&& value) { m_orderFulfilledDateHasBeenSet = true; m_orderFulfilledDate = std::move(value); }

    /**
     * <p> The fulfilment date for the order. </p>
     */
    inline OrderSummary& WithOrderFulfilledDate(const Aws::Utils::DateTime& value) { SetOrderFulfilledDate(value); return *this;}

    /**
     * <p> The fulfilment date for the order. </p>
     */
    inline OrderSummary& WithOrderFulfilledDate(Aws::Utils::DateTime&& value) { SetOrderFulfilledDate(std::move(value)); return *this;}

  private:

    Aws::String m_outpostId;
    bool m_outpostIdHasBeenSet = false;

    Aws::String m_orderId;
    bool m_orderIdHasBeenSet = false;

    OrderType m_orderType;
    bool m_orderTypeHasBeenSet = false;

    OrderStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<LineItemStatus, int> m_lineItemCountsByStatus;
    bool m_lineItemCountsByStatusHasBeenSet = false;

    Aws::Utils::DateTime m_orderSubmissionDate;
    bool m_orderSubmissionDateHasBeenSet = false;

    Aws::Utils::DateTime m_orderFulfilledDate;
    bool m_orderFulfilledDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
