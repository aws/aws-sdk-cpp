/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/EntityType.h>
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
      namespace EntityTypeMapper
      {

        static const int PERSON_HASH = HashingUtils::HashString("PERSON");
        static const int LOCATION_HASH = HashingUtils::HashString("LOCATION");
        static const int ORGANIZATION_HASH = HashingUtils::HashString("ORGANIZATION");
        static const int COMMERCIAL_ITEM_HASH = HashingUtils::HashString("COMMERCIAL_ITEM");
        static const int EVENT_HASH = HashingUtils::HashString("EVENT");
        static const int DATE_HASH = HashingUtils::HashString("DATE");
        static const int QUANTITY_HASH = HashingUtils::HashString("QUANTITY");
        static const int TITLE_HASH = HashingUtils::HashString("TITLE");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");


        EntityType GetEntityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PERSON_HASH)
          {
            return EntityType::PERSON;
          }
          else if (hashCode == LOCATION_HASH)
          {
            return EntityType::LOCATION;
          }
          else if (hashCode == ORGANIZATION_HASH)
          {
            return EntityType::ORGANIZATION;
          }
          else if (hashCode == COMMERCIAL_ITEM_HASH)
          {
            return EntityType::COMMERCIAL_ITEM;
          }
          else if (hashCode == EVENT_HASH)
          {
            return EntityType::EVENT;
          }
          else if (hashCode == DATE_HASH)
          {
            return EntityType::DATE;
          }
          else if (hashCode == QUANTITY_HASH)
          {
            return EntityType::QUANTITY;
          }
          else if (hashCode == TITLE_HASH)
          {
            return EntityType::TITLE;
          }
          else if (hashCode == OTHER_HASH)
          {
            return EntityType::OTHER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EntityType>(hashCode);
          }

          return EntityType::NOT_SET;
        }

        Aws::String GetNameForEntityType(EntityType enumValue)
        {
          switch(enumValue)
          {
          case EntityType::PERSON:
            return "PERSON";
          case EntityType::LOCATION:
            return "LOCATION";
          case EntityType::ORGANIZATION:
            return "ORGANIZATION";
          case EntityType::COMMERCIAL_ITEM:
            return "COMMERCIAL_ITEM";
          case EntityType::EVENT:
            return "EVENT";
          case EntityType::DATE:
            return "DATE";
          case EntityType::QUANTITY:
            return "QUANTITY";
          case EntityType::TITLE:
            return "TITLE";
          case EntityType::OTHER:
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

      } // namespace EntityTypeMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
