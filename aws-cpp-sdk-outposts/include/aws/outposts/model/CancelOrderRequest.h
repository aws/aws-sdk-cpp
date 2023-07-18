﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Outposts
{
namespace Model
{

  /**
   */
  class AWS_OUTPOSTS_API CancelOrderRequest : public OutpostsRequest
  {
  public:
    CancelOrderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelOrder"; }

    Aws::String SerializePayload() const override;


    /**
     * <p> The ID of the order to cancel. </p>
     */
    inline const Aws::String& GetOrderId() const{ return m_orderId; }

    /**
     * <p> The ID of the order to cancel. </p>
     */
    inline bool OrderIdHasBeenSet() const { return m_orderIdHasBeenSet; }

    /**
     * <p> The ID of the order to cancel. </p>
     */
    inline void SetOrderId(const Aws::String& value) { m_orderIdHasBeenSet = true; m_orderId = value; }

    /**
     * <p> The ID of the order to cancel. </p>
     */
    inline void SetOrderId(Aws::String&& value) { m_orderIdHasBeenSet = true; m_orderId = std::move(value); }

    /**
     * <p> The ID of the order to cancel. </p>
     */
    inline void SetOrderId(const char* value) { m_orderIdHasBeenSet = true; m_orderId.assign(value); }

    /**
     * <p> The ID of the order to cancel. </p>
     */
    inline CancelOrderRequest& WithOrderId(const Aws::String& value) { SetOrderId(value); return *this;}

    /**
     * <p> The ID of the order to cancel. </p>
     */
    inline CancelOrderRequest& WithOrderId(Aws::String&& value) { SetOrderId(std::move(value)); return *this;}

    /**
     * <p> The ID of the order to cancel. </p>
     */
    inline CancelOrderRequest& WithOrderId(const char* value) { SetOrderId(value); return *this;}

  private:

    Aws::String m_orderId;
    bool m_orderIdHasBeenSet;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
