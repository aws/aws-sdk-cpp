/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/ProactiveEngagementStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Shield
  {
    namespace Model
    {
      namespace ProactiveEngagementStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");


        ProactiveEngagementStatus GetProactiveEngagementStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ProactiveEngagementStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ProactiveEngagementStatus::DISABLED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return ProactiveEngagementStatus::PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProactiveEngagementStatus>(hashCode);
          }

          return ProactiveEngagementStatus::NOT_SET;
        }

        Aws::String GetNameForProactiveEngagementStatus(ProactiveEngagementStatus enumValue)
        {
          switch(enumValue)
          {
          case ProactiveEngagementStatus::ENABLED:
            return "ENABLED";
          case ProactiveEngagementStatus::DISABLED:
            return "DISABLED";
          case ProactiveEngagementStatus::PENDING:
            return "PENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProactiveEngagementStatusMapper
    } // namespace Model
  } // namespace Shield
} // namespace Aws
