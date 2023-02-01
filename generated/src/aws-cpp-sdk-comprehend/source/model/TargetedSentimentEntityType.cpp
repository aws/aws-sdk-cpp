/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/TargetedSentimentEntityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Comprehend
  {
    namespace Model
    {
      namespace TargetedSentimentEntityTypeMapper
      {

        static const int PERSON_HASH = HashingUtils::HashString("PERSON");
        static const int LOCATION_HASH = HashingUtils::HashString("LOCATION");
        static const int ORGANIZATION_HASH = HashingUtils::HashString("ORGANIZATION");
        static const int FACILITY_HASH = HashingUtils::HashString("FACILITY");
        static const int BRAND_HASH = HashingUtils::HashString("BRAND");
        static const int COMMERCIAL_ITEM_HASH = HashingUtils::HashString("COMMERCIAL_ITEM");
        static const int MOVIE_HASH = HashingUtils::HashString("MOVIE");
        static const int MUSIC_HASH = HashingUtils::HashString("MUSIC");
        static const int BOOK_HASH = HashingUtils::HashString("BOOK");
        static const int SOFTWARE_HASH = HashingUtils::HashString("SOFTWARE");
        static const int GAME_HASH = HashingUtils::HashString("GAME");
        static const int PERSONAL_TITLE_HASH = HashingUtils::HashString("PERSONAL_TITLE");
        static const int EVENT_HASH = HashingUtils::HashString("EVENT");
        static const int DATE_HASH = HashingUtils::HashString("DATE");
        static const int QUANTITY_HASH = HashingUtils::HashString("QUANTITY");
        static const int ATTRIBUTE_HASH = HashingUtils::HashString("ATTRIBUTE");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");


        TargetedSentimentEntityType GetTargetedSentimentEntityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PERSON_HASH)
          {
            return TargetedSentimentEntityType::PERSON;
          }
          else if (hashCode == LOCATION_HASH)
          {
            return TargetedSentimentEntityType::LOCATION;
          }
          else if (hashCode == ORGANIZATION_HASH)
          {
            return TargetedSentimentEntityType::ORGANIZATION;
          }
          else if (hashCode == FACILITY_HASH)
          {
            return TargetedSentimentEntityType::FACILITY;
          }
          else if (hashCode == BRAND_HASH)
          {
            return TargetedSentimentEntityType::BRAND;
          }
          else if (hashCode == COMMERCIAL_ITEM_HASH)
          {
            return TargetedSentimentEntityType::COMMERCIAL_ITEM;
          }
          else if (hashCode == MOVIE_HASH)
          {
            return TargetedSentimentEntityType::MOVIE;
          }
          else if (hashCode == MUSIC_HASH)
          {
            return TargetedSentimentEntityType::MUSIC;
          }
          else if (hashCode == BOOK_HASH)
          {
            return TargetedSentimentEntityType::BOOK;
          }
          else if (hashCode == SOFTWARE_HASH)
          {
            return TargetedSentimentEntityType::SOFTWARE;
          }
          else if (hashCode == GAME_HASH)
          {
            return TargetedSentimentEntityType::GAME;
          }
          else if (hashCode == PERSONAL_TITLE_HASH)
          {
            return TargetedSentimentEntityType::PERSONAL_TITLE;
          }
          else if (hashCode == EVENT_HASH)
          {
            return TargetedSentimentEntityType::EVENT;
          }
          else if (hashCode == DATE_HASH)
          {
            return TargetedSentimentEntityType::DATE;
          }
          else if (hashCode == QUANTITY_HASH)
          {
            return TargetedSentimentEntityType::QUANTITY;
          }
          else if (hashCode == ATTRIBUTE_HASH)
          {
            return TargetedSentimentEntityType::ATTRIBUTE;
          }
          else if (hashCode == OTHER_HASH)
          {
            return TargetedSentimentEntityType::OTHER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetedSentimentEntityType>(hashCode);
          }

          return TargetedSentimentEntityType::NOT_SET;
        }

        Aws::String GetNameForTargetedSentimentEntityType(TargetedSentimentEntityType enumValue)
        {
          switch(enumValue)
          {
          case TargetedSentimentEntityType::PERSON:
            return "PERSON";
          case TargetedSentimentEntityType::LOCATION:
            return "LOCATION";
          case TargetedSentimentEntityType::ORGANIZATION:
            return "ORGANIZATION";
          case TargetedSentimentEntityType::FACILITY:
            return "FACILITY";
          case TargetedSentimentEntityType::BRAND:
            return "BRAND";
          case TargetedSentimentEntityType::COMMERCIAL_ITEM:
            return "COMMERCIAL_ITEM";
          case TargetedSentimentEntityType::MOVIE:
            return "MOVIE";
          case TargetedSentimentEntityType::MUSIC:
            return "MUSIC";
          case TargetedSentimentEntityType::BOOK:
            return "BOOK";
          case TargetedSentimentEntityType::SOFTWARE:
            return "SOFTWARE";
          case TargetedSentimentEntityType::GAME:
            return "GAME";
          case TargetedSentimentEntityType::PERSONAL_TITLE:
            return "PERSONAL_TITLE";
          case TargetedSentimentEntityType::EVENT:
            return "EVENT";
          case TargetedSentimentEntityType::DATE:
            return "DATE";
          case TargetedSentimentEntityType::QUANTITY:
            return "QUANTITY";
          case TargetedSentimentEntityType::ATTRIBUTE:
            return "ATTRIBUTE";
          case TargetedSentimentEntityType::OTHER:
            return "OTHER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetedSentimentEntityTypeMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
