/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/EntityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRoomsML
  {
    namespace Model
    {
      namespace EntityTypeMapper
      {

        static const int ALL_PERSONALLY_IDENTIFIABLE_INFORMATION_HASH = HashingUtils::HashString("ALL_PERSONALLY_IDENTIFIABLE_INFORMATION");
        static const int NUMBERS_HASH = HashingUtils::HashString("NUMBERS");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        EntityType GetEntityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_PERSONALLY_IDENTIFIABLE_INFORMATION_HASH)
          {
            return EntityType::ALL_PERSONALLY_IDENTIFIABLE_INFORMATION;
          }
          else if (hashCode == NUMBERS_HASH)
          {
            return EntityType::NUMBERS;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return EntityType::CUSTOM;
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
          case EntityType::ALL_PERSONALLY_IDENTIFIABLE_INFORMATION:
            return "ALL_PERSONALLY_IDENTIFIABLE_INFORMATION";
          case EntityType::NUMBERS:
            return "NUMBERS";
          case EntityType::CUSTOM:
            return "CUSTOM";
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
  } // namespace CleanRoomsML
} // namespace Aws
