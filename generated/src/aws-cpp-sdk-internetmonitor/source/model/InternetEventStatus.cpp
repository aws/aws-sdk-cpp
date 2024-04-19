/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/InternetEventStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace InternetMonitor
  {
    namespace Model
    {
      namespace InternetEventStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int RESOLVED_HASH = HashingUtils::HashString("RESOLVED");


        InternetEventStatus GetInternetEventStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return InternetEventStatus::ACTIVE;
          }
          else if (hashCode == RESOLVED_HASH)
          {
            return InternetEventStatus::RESOLVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InternetEventStatus>(hashCode);
          }

          return InternetEventStatus::NOT_SET;
        }

        Aws::String GetNameForInternetEventStatus(InternetEventStatus enumValue)
        {
          switch(enumValue)
          {
          case InternetEventStatus::NOT_SET:
            return {};
          case InternetEventStatus::ACTIVE:
            return "ACTIVE";
          case InternetEventStatus::RESOLVED:
            return "RESOLVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InternetEventStatusMapper
    } // namespace Model
  } // namespace InternetMonitor
} // namespace Aws
