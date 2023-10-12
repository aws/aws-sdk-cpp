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

        static constexpr uint32_t PERSON_HASH = ConstExprHashingUtils::HashString("PERSON");
        static constexpr uint32_t LOCATION_HASH = ConstExprHashingUtils::HashString("LOCATION");
        static constexpr uint32_t ORGANIZATION_HASH = ConstExprHashingUtils::HashString("ORGANIZATION");
        static constexpr uint32_t FACILITY_HASH = ConstExprHashingUtils::HashString("FACILITY");
        static constexpr uint32_t BRAND_HASH = ConstExprHashingUtils::HashString("BRAND");
        static constexpr uint32_t COMMERCIAL_ITEM_HASH = ConstExprHashingUtils::HashString("COMMERCIAL_ITEM");
        static constexpr uint32_t MOVIE_HASH = ConstExprHashingUtils::HashString("MOVIE");
        static constexpr uint32_t MUSIC_HASH = ConstExprHashingUtils::HashString("MUSIC");
        static constexpr uint32_t BOOK_HASH = ConstExprHashingUtils::HashString("BOOK");
        static constexpr uint32_t SOFTWARE_HASH = ConstExprHashingUtils::HashString("SOFTWARE");
        static constexpr uint32_t GAME_HASH = ConstExprHashingUtils::HashString("GAME");
        static constexpr uint32_t PERSONAL_TITLE_HASH = ConstExprHashingUtils::HashString("PERSONAL_TITLE");
        static constexpr uint32_t EVENT_HASH = ConstExprHashingUtils::HashString("EVENT");
        static constexpr uint32_t DATE_HASH = ConstExprHashingUtils::HashString("DATE");
        static constexpr uint32_t QUANTITY_HASH = ConstExprHashingUtils::HashString("QUANTITY");
        static constexpr uint32_t ATTRIBUTE_HASH = ConstExprHashingUtils::HashString("ATTRIBUTE");
        static constexpr uint32_t OTHER_HASH = ConstExprHashingUtils::HashString("OTHER");


        TargetedSentimentEntityType GetTargetedSentimentEntityTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case TargetedSentimentEntityType::NOT_SET:
            return {};
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
