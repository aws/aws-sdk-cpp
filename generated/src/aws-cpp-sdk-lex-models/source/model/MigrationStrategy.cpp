/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/MigrationStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelBuildingService
  {
    namespace Model
    {
      namespace MigrationStrategyMapper
      {

        static const int CREATE_NEW_HASH = HashingUtils::HashString("CREATE_NEW");
        static const int UPDATE_EXISTING_HASH = HashingUtils::HashString("UPDATE_EXISTING");


        MigrationStrategy GetMigrationStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_NEW_HASH)
          {
            return MigrationStrategy::CREATE_NEW;
          }
          else if (hashCode == UPDATE_EXISTING_HASH)
          {
            return MigrationStrategy::UPDATE_EXISTING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MigrationStrategy>(hashCode);
          }

          return MigrationStrategy::NOT_SET;
        }

        Aws::String GetNameForMigrationStrategy(MigrationStrategy enumValue)
        {
          switch(enumValue)
          {
          case MigrationStrategy::NOT_SET:
            return {};
          case MigrationStrategy::CREATE_NEW:
            return "CREATE_NEW";
          case MigrationStrategy::UPDATE_EXISTING:
            return "UPDATE_EXISTING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MigrationStrategyMapper
    } // namespace Model
  } // namespace LexModelBuildingService
} // namespace Aws
