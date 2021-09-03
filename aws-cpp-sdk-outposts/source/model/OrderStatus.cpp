/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/OrderStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Outposts
  {
    namespace Model
    {
      namespace OrderStatusMapper
      {

        static const int RECEIVED_HASH = HashingUtils::HashString("RECEIVED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int INSTALLING_HASH = HashingUtils::HashString("INSTALLING");
        static const int FULFILLED_HASH = HashingUtils::HashString("FULFILLED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        OrderStatus GetOrderStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RECEIVED_HASH)
          {
            return OrderStatus::RECEIVED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return OrderStatus::PENDING;
          }
          else if (hashCode == PROCESSING_HASH)
          {
            return OrderStatus::PROCESSING;
          }
          else if (hashCode == INSTALLING_HASH)
          {
            return OrderStatus::INSTALLING;
          }
          else if (hashCode == FULFILLED_HASH)
          {
            return OrderStatus::FULFILLED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return OrderStatus::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrderStatus>(hashCode);
          }

          return OrderStatus::NOT_SET;
        }

        Aws::String GetNameForOrderStatus(OrderStatus enumValue)
        {
          switch(enumValue)
          {
          case OrderStatus::RECEIVED:
            return "RECEIVED";
          case OrderStatus::PENDING:
            return "PENDING";
          case OrderStatus::PROCESSING:
            return "PROCESSING";
          case OrderStatus::INSTALLING:
            return "INSTALLING";
          case OrderStatus::FULFILLED:
            return "FULFILLED";
          case OrderStatus::CANCELLED:
            return "CANCELLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrderStatusMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws
