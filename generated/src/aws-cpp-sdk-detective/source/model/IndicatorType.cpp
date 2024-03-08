/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/IndicatorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Detective
  {
    namespace Model
    {
      namespace IndicatorTypeMapper
      {

        static const int TTP_OBSERVED_HASH = HashingUtils::HashString("TTP_OBSERVED");
        static const int IMPOSSIBLE_TRAVEL_HASH = HashingUtils::HashString("IMPOSSIBLE_TRAVEL");
        static const int FLAGGED_IP_ADDRESS_HASH = HashingUtils::HashString("FLAGGED_IP_ADDRESS");
        static const int NEW_GEOLOCATION_HASH = HashingUtils::HashString("NEW_GEOLOCATION");
        static const int NEW_ASO_HASH = HashingUtils::HashString("NEW_ASO");
        static const int NEW_USER_AGENT_HASH = HashingUtils::HashString("NEW_USER_AGENT");
        static const int RELATED_FINDING_HASH = HashingUtils::HashString("RELATED_FINDING");
        static const int RELATED_FINDING_GROUP_HASH = HashingUtils::HashString("RELATED_FINDING_GROUP");


        IndicatorType GetIndicatorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TTP_OBSERVED_HASH)
          {
            return IndicatorType::TTP_OBSERVED;
          }
          else if (hashCode == IMPOSSIBLE_TRAVEL_HASH)
          {
            return IndicatorType::IMPOSSIBLE_TRAVEL;
          }
          else if (hashCode == FLAGGED_IP_ADDRESS_HASH)
          {
            return IndicatorType::FLAGGED_IP_ADDRESS;
          }
          else if (hashCode == NEW_GEOLOCATION_HASH)
          {
            return IndicatorType::NEW_GEOLOCATION;
          }
          else if (hashCode == NEW_ASO_HASH)
          {
            return IndicatorType::NEW_ASO;
          }
          else if (hashCode == NEW_USER_AGENT_HASH)
          {
            return IndicatorType::NEW_USER_AGENT;
          }
          else if (hashCode == RELATED_FINDING_HASH)
          {
            return IndicatorType::RELATED_FINDING;
          }
          else if (hashCode == RELATED_FINDING_GROUP_HASH)
          {
            return IndicatorType::RELATED_FINDING_GROUP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IndicatorType>(hashCode);
          }

          return IndicatorType::NOT_SET;
        }

        Aws::String GetNameForIndicatorType(IndicatorType enumValue)
        {
          switch(enumValue)
          {
          case IndicatorType::NOT_SET:
            return {};
          case IndicatorType::TTP_OBSERVED:
            return "TTP_OBSERVED";
          case IndicatorType::IMPOSSIBLE_TRAVEL:
            return "IMPOSSIBLE_TRAVEL";
          case IndicatorType::FLAGGED_IP_ADDRESS:
            return "FLAGGED_IP_ADDRESS";
          case IndicatorType::NEW_GEOLOCATION:
            return "NEW_GEOLOCATION";
          case IndicatorType::NEW_ASO:
            return "NEW_ASO";
          case IndicatorType::NEW_USER_AGENT:
            return "NEW_USER_AGENT";
          case IndicatorType::RELATED_FINDING:
            return "RELATED_FINDING";
          case IndicatorType::RELATED_FINDING_GROUP:
            return "RELATED_FINDING_GROUP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IndicatorTypeMapper
    } // namespace Model
  } // namespace Detective
} // namespace Aws
