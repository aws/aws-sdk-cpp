/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/StandardIdentifier.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace StandardIdentifierMapper
      {

        static const int PROFILE_HASH = HashingUtils::HashString("PROFILE");
        static const int ASSET_HASH = HashingUtils::HashString("ASSET");
        static const int CASE_HASH = HashingUtils::HashString("CASE");
        static const int ORDER_HASH = HashingUtils::HashString("ORDER");
        static const int COMMUNICATION_RECORD_HASH = HashingUtils::HashString("COMMUNICATION_RECORD");
        static const int AIR_PREFERENCE_HASH = HashingUtils::HashString("AIR_PREFERENCE");
        static const int HOTEL_PREFERENCE_HASH = HashingUtils::HashString("HOTEL_PREFERENCE");
        static const int AIR_BOOKING_HASH = HashingUtils::HashString("AIR_BOOKING");
        static const int AIR_SEGMENT_HASH = HashingUtils::HashString("AIR_SEGMENT");
        static const int HOTEL_RESERVATION_HASH = HashingUtils::HashString("HOTEL_RESERVATION");
        static const int HOTEL_STAY_REVENUE_HASH = HashingUtils::HashString("HOTEL_STAY_REVENUE");
        static const int LOYALTY_HASH = HashingUtils::HashString("LOYALTY");
        static const int LOYALTY_TRANSACTION_HASH = HashingUtils::HashString("LOYALTY_TRANSACTION");
        static const int LOYALTY_PROMOTION_HASH = HashingUtils::HashString("LOYALTY_PROMOTION");
        static const int UNIQUE_HASH = HashingUtils::HashString("UNIQUE");
        static const int SECONDARY_HASH = HashingUtils::HashString("SECONDARY");
        static const int LOOKUP_ONLY_HASH = HashingUtils::HashString("LOOKUP_ONLY");
        static const int NEW_ONLY_HASH = HashingUtils::HashString("NEW_ONLY");


        StandardIdentifier GetStandardIdentifierForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROFILE_HASH)
          {
            return StandardIdentifier::PROFILE;
          }
          else if (hashCode == ASSET_HASH)
          {
            return StandardIdentifier::ASSET;
          }
          else if (hashCode == CASE_HASH)
          {
            return StandardIdentifier::CASE;
          }
          else if (hashCode == ORDER_HASH)
          {
            return StandardIdentifier::ORDER;
          }
          else if (hashCode == COMMUNICATION_RECORD_HASH)
          {
            return StandardIdentifier::COMMUNICATION_RECORD;
          }
          else if (hashCode == AIR_PREFERENCE_HASH)
          {
            return StandardIdentifier::AIR_PREFERENCE;
          }
          else if (hashCode == HOTEL_PREFERENCE_HASH)
          {
            return StandardIdentifier::HOTEL_PREFERENCE;
          }
          else if (hashCode == AIR_BOOKING_HASH)
          {
            return StandardIdentifier::AIR_BOOKING;
          }
          else if (hashCode == AIR_SEGMENT_HASH)
          {
            return StandardIdentifier::AIR_SEGMENT;
          }
          else if (hashCode == HOTEL_RESERVATION_HASH)
          {
            return StandardIdentifier::HOTEL_RESERVATION;
          }
          else if (hashCode == HOTEL_STAY_REVENUE_HASH)
          {
            return StandardIdentifier::HOTEL_STAY_REVENUE;
          }
          else if (hashCode == LOYALTY_HASH)
          {
            return StandardIdentifier::LOYALTY;
          }
          else if (hashCode == LOYALTY_TRANSACTION_HASH)
          {
            return StandardIdentifier::LOYALTY_TRANSACTION;
          }
          else if (hashCode == LOYALTY_PROMOTION_HASH)
          {
            return StandardIdentifier::LOYALTY_PROMOTION;
          }
          else if (hashCode == UNIQUE_HASH)
          {
            return StandardIdentifier::UNIQUE;
          }
          else if (hashCode == SECONDARY_HASH)
          {
            return StandardIdentifier::SECONDARY;
          }
          else if (hashCode == LOOKUP_ONLY_HASH)
          {
            return StandardIdentifier::LOOKUP_ONLY;
          }
          else if (hashCode == NEW_ONLY_HASH)
          {
            return StandardIdentifier::NEW_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StandardIdentifier>(hashCode);
          }

          return StandardIdentifier::NOT_SET;
        }

        Aws::String GetNameForStandardIdentifier(StandardIdentifier enumValue)
        {
          switch(enumValue)
          {
          case StandardIdentifier::NOT_SET:
            return {};
          case StandardIdentifier::PROFILE:
            return "PROFILE";
          case StandardIdentifier::ASSET:
            return "ASSET";
          case StandardIdentifier::CASE:
            return "CASE";
          case StandardIdentifier::ORDER:
            return "ORDER";
          case StandardIdentifier::COMMUNICATION_RECORD:
            return "COMMUNICATION_RECORD";
          case StandardIdentifier::AIR_PREFERENCE:
            return "AIR_PREFERENCE";
          case StandardIdentifier::HOTEL_PREFERENCE:
            return "HOTEL_PREFERENCE";
          case StandardIdentifier::AIR_BOOKING:
            return "AIR_BOOKING";
          case StandardIdentifier::AIR_SEGMENT:
            return "AIR_SEGMENT";
          case StandardIdentifier::HOTEL_RESERVATION:
            return "HOTEL_RESERVATION";
          case StandardIdentifier::HOTEL_STAY_REVENUE:
            return "HOTEL_STAY_REVENUE";
          case StandardIdentifier::LOYALTY:
            return "LOYALTY";
          case StandardIdentifier::LOYALTY_TRANSACTION:
            return "LOYALTY_TRANSACTION";
          case StandardIdentifier::LOYALTY_PROMOTION:
            return "LOYALTY_PROMOTION";
          case StandardIdentifier::UNIQUE:
            return "UNIQUE";
          case StandardIdentifier::SECONDARY:
            return "SECONDARY";
          case StandardIdentifier::LOOKUP_ONLY:
            return "LOOKUP_ONLY";
          case StandardIdentifier::NEW_ONLY:
            return "NEW_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StandardIdentifierMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
