/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/ScheduledAutoTuneSeverityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticsearchService
  {
    namespace Model
    {
      namespace ScheduledAutoTuneSeverityTypeMapper
      {

        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");


        ScheduledAutoTuneSeverityType GetScheduledAutoTuneSeverityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOW_HASH)
          {
            return ScheduledAutoTuneSeverityType::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return ScheduledAutoTuneSeverityType::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return ScheduledAutoTuneSeverityType::HIGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScheduledAutoTuneSeverityType>(hashCode);
          }

          return ScheduledAutoTuneSeverityType::NOT_SET;
        }

        Aws::String GetNameForScheduledAutoTuneSeverityType(ScheduledAutoTuneSeverityType enumValue)
        {
          switch(enumValue)
          {
          case ScheduledAutoTuneSeverityType::NOT_SET:
            return {};
          case ScheduledAutoTuneSeverityType::LOW:
            return "LOW";
          case ScheduledAutoTuneSeverityType::MEDIUM:
            return "MEDIUM";
          case ScheduledAutoTuneSeverityType::HIGH:
            return "HIGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScheduledAutoTuneSeverityTypeMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
