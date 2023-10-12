/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ReloadOptionValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace ReloadOptionValueMapper
      {

        static constexpr uint32_t data_reload_HASH = ConstExprHashingUtils::HashString("data-reload");
        static constexpr uint32_t validate_only_HASH = ConstExprHashingUtils::HashString("validate-only");


        ReloadOptionValue GetReloadOptionValueForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == data_reload_HASH)
          {
            return ReloadOptionValue::data_reload;
          }
          else if (hashCode == validate_only_HASH)
          {
            return ReloadOptionValue::validate_only;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReloadOptionValue>(hashCode);
          }

          return ReloadOptionValue::NOT_SET;
        }

        Aws::String GetNameForReloadOptionValue(ReloadOptionValue enumValue)
        {
          switch(enumValue)
          {
          case ReloadOptionValue::NOT_SET:
            return {};
          case ReloadOptionValue::data_reload:
            return "data-reload";
          case ReloadOptionValue::validate_only:
            return "validate-only";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReloadOptionValueMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
