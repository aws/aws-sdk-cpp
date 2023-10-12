/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ActivityStatus.h>
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
      namespace ActivityStatusMapper
      {

        static constexpr uint32_t error_HASH = ConstExprHashingUtils::HashString("error");
        static constexpr uint32_t pending_fulfillment_HASH = ConstExprHashingUtils::HashString("pending_fulfillment");
        static constexpr uint32_t pending_termination_HASH = ConstExprHashingUtils::HashString("pending_termination");
        static constexpr uint32_t fulfilled_HASH = ConstExprHashingUtils::HashString("fulfilled");


        ActivityStatus GetActivityStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == error_HASH)
          {
            return ActivityStatus::error;
          }
          else if (hashCode == pending_fulfillment_HASH)
          {
            return ActivityStatus::pending_fulfillment;
          }
          else if (hashCode == pending_termination_HASH)
          {
            return ActivityStatus::pending_termination;
          }
          else if (hashCode == fulfilled_HASH)
          {
            return ActivityStatus::fulfilled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActivityStatus>(hashCode);
          }

          return ActivityStatus::NOT_SET;
        }

        Aws::String GetNameForActivityStatus(ActivityStatus enumValue)
        {
          switch(enumValue)
          {
          case ActivityStatus::NOT_SET:
            return {};
          case ActivityStatus::error:
            return "error";
          case ActivityStatus::pending_fulfillment:
            return "pending_fulfillment";
          case ActivityStatus::pending_termination:
            return "pending_termination";
          case ActivityStatus::fulfilled:
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

      } // namespace ActivityStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
