/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/MigrationAlertType.h>
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
      namespace MigrationAlertTypeMapper
      {

        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int WARN_HASH = HashingUtils::HashString("WARN");


        MigrationAlertType GetMigrationAlertTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ERROR__HASH)
          {
            return MigrationAlertType::ERROR_;
          }
          else if (hashCode == WARN_HASH)
          {
            return MigrationAlertType::WARN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MigrationAlertType>(hashCode);
          }

          return MigrationAlertType::NOT_SET;
        }

        Aws::String GetNameForMigrationAlertType(MigrationAlertType enumValue)
        {
          switch(enumValue)
          {
          case MigrationAlertType::NOT_SET:
            return {};
          case MigrationAlertType::ERROR_:
            return "ERROR";
          case MigrationAlertType::WARN:
            return "WARN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MigrationAlertTypeMapper
    } // namespace Model
  } // namespace LexModelBuildingService
} // namespace Aws
