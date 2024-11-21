/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/CapacityReservationStateEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticLoadBalancingv2
  {
    namespace Model
    {
      namespace CapacityReservationStateEnumMapper
      {

        static const int provisioned_HASH = HashingUtils::HashString("provisioned");
        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int rebalancing_HASH = HashingUtils::HashString("rebalancing");
        static const int failed_HASH = HashingUtils::HashString("failed");


        CapacityReservationStateEnum GetCapacityReservationStateEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == provisioned_HASH)
          {
            return CapacityReservationStateEnum::provisioned;
          }
          else if (hashCode == pending_HASH)
          {
            return CapacityReservationStateEnum::pending;
          }
          else if (hashCode == rebalancing_HASH)
          {
            return CapacityReservationStateEnum::rebalancing;
          }
          else if (hashCode == failed_HASH)
          {
            return CapacityReservationStateEnum::failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityReservationStateEnum>(hashCode);
          }

          return CapacityReservationStateEnum::NOT_SET;
        }

        Aws::String GetNameForCapacityReservationStateEnum(CapacityReservationStateEnum enumValue)
        {
          switch(enumValue)
          {
          case CapacityReservationStateEnum::NOT_SET:
            return {};
          case CapacityReservationStateEnum::provisioned:
            return "provisioned";
          case CapacityReservationStateEnum::pending:
            return "pending";
          case CapacityReservationStateEnum::rebalancing:
            return "rebalancing";
          case CapacityReservationStateEnum::failed:
            return "failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapacityReservationStateEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
