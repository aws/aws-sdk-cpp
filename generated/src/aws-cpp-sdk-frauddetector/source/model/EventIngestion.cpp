/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/EventIngestion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FraudDetector
  {
    namespace Model
    {
      namespace EventIngestionMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        EventIngestion GetEventIngestionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return EventIngestion::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return EventIngestion::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventIngestion>(hashCode);
          }

          return EventIngestion::NOT_SET;
        }

        Aws::String GetNameForEventIngestion(EventIngestion enumValue)
        {
          switch(enumValue)
          {
          case EventIngestion::NOT_SET:
            return {};
          case EventIngestion::ENABLED:
            return "ENABLED";
          case EventIngestion::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventIngestionMapper
    } // namespace Model
  } // namespace FraudDetector
} // namespace Aws
