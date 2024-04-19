/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/InternetEventType.h>
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
      namespace InternetEventTypeMapper
      {

        static const int AVAILABILITY_HASH = HashingUtils::HashString("AVAILABILITY");
        static const int PERFORMANCE_HASH = HashingUtils::HashString("PERFORMANCE");


        InternetEventType GetInternetEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABILITY_HASH)
          {
            return InternetEventType::AVAILABILITY;
          }
          else if (hashCode == PERFORMANCE_HASH)
          {
            return InternetEventType::PERFORMANCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InternetEventType>(hashCode);
          }

          return InternetEventType::NOT_SET;
        }

        Aws::String GetNameForInternetEventType(InternetEventType enumValue)
        {
          switch(enumValue)
          {
          case InternetEventType::NOT_SET:
            return {};
          case InternetEventType::AVAILABILITY:
            return "AVAILABILITY";
          case InternetEventType::PERFORMANCE:
            return "PERFORMANCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InternetEventTypeMapper
    } // namespace Model
  } // namespace InternetMonitor
} // namespace Aws
