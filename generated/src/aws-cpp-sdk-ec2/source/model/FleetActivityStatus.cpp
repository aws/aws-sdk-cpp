/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FleetActivityStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace FleetActivityStatusMapper
      {

        static constexpr uint32_t error_HASH = ConstExprHashingUtils::HashString("error");
        static constexpr uint32_t pending_fulfillment_HASH = ConstExprHashingUtils::HashString("pending_fulfillment");
        static constexpr uint32_t pending_termination_HASH = ConstExprHashingUtils::HashString("pending_termination");
        static constexpr uint32_t fulfilled_HASH = ConstExprHashingUtils::HashString("fulfilled");


        FleetActivityStatus GetFleetActivityStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == error_HASH)
          {
            return FleetActivityStatus::error;
          }
          else if (hashCode == pending_fulfillment_HASH)
          {
            return FleetActivityStatus::pending_fulfillment;
          }
          else if (hashCode == pending_termination_HASH)
          {
            return FleetActivityStatus::pending_termination;
          }
          else if (hashCode == fulfilled_HASH)
          {
            return FleetActivityStatus::fulfilled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetActivityStatus>(hashCode);
          }

          return FleetActivityStatus::NOT_SET;
        }

        Aws::String GetNameForFleetActivityStatus(FleetActivityStatus enumValue)
        {
          switch(enumValue)
          {
          case FleetActivityStatus::NOT_SET:
            return {};
          case FleetActivityStatus::error:
            return "error";
          case FleetActivityStatus::pending_fulfillment:
            return "pending_fulfillment";
          case FleetActivityStatus::pending_termination:
            return "pending_termination";
          case FleetActivityStatus::fulfilled:
            return "fulfilled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetActivityStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
