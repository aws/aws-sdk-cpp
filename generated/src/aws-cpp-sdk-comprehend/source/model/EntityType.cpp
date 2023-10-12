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

        static constexpr uint32_t PERSON_HASH = ConstExprHashingUtils::HashString("PERSON");
        static constexpr uint32_t LOCATION_HASH = ConstExprHashingUtils::HashString("LOCATION");
        static constexpr uint32_t ORGANIZATION_HASH = ConstExprHashingUtils::HashString("ORGANIZATION");
        static constexpr uint32_t COMMERCIAL_ITEM_HASH = ConstExprHashingUtils::HashString("COMMERCIAL_ITEM");
        static constexpr uint32_t EVENT_HASH = ConstExprHashingUtils::HashString("EVENT");
        static constexpr uint32_t DATE_HASH = ConstExprHashingUtils::HashString("DATE");
        static constexpr uint32_t QUANTITY_HASH = ConstExprHashingUtils::HashString("QUANTITY");
        static constexpr uint32_t TITLE_HASH = ConstExprHashingUtils::HashString("TITLE");
        static constexpr uint32_t OTHER_HASH = ConstExprHashingUtils::HashString("OTHER");


        EntityType GetEntityTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case EntityType::NOT_SET:
            return {};
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
