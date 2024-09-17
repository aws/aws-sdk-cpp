/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RoutingCriteriaStepStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace RoutingCriteriaStepStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int JOINED_HASH = HashingUtils::HashString("JOINED");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");


        RoutingCriteriaStepStatus GetRoutingCriteriaStepStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return RoutingCriteriaStepStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return RoutingCriteriaStepStatus::INACTIVE;
          }
          else if (hashCode == JOINED_HASH)
          {
            return RoutingCriteriaStepStatus::JOINED;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return RoutingCriteriaStepStatus::EXPIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RoutingCriteriaStepStatus>(hashCode);
          }

          return RoutingCriteriaStepStatus::NOT_SET;
        }

        Aws::String GetNameForRoutingCriteriaStepStatus(RoutingCriteriaStepStatus enumValue)
        {
          switch(enumValue)
          {
          case RoutingCriteriaStepStatus::NOT_SET:
            return {};
          case RoutingCriteriaStepStatus::ACTIVE:
            return "ACTIVE";
          case RoutingCriteriaStepStatus::INACTIVE:
            return "INACTIVE";
          case RoutingCriteriaStepStatus::JOINED:
            return "JOINED";
          case RoutingCriteriaStepStatus::EXPIRED:
            return "EXPIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RoutingCriteriaStepStatusMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
