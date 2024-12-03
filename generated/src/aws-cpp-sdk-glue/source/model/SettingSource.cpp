/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SettingSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace SettingSourceMapper
      {

        static const int CATALOG_HASH = HashingUtils::HashString("CATALOG");
        static const int TABLE_HASH = HashingUtils::HashString("TABLE");


        SettingSource GetSettingSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CATALOG_HASH)
          {
            return SettingSource::CATALOG;
          }
          else if (hashCode == TABLE_HASH)
          {
            return SettingSource::TABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SettingSource>(hashCode);
          }

          return SettingSource::NOT_SET;
        }

        Aws::String GetNameForSettingSource(SettingSource enumValue)
        {
          switch(enumValue)
          {
          case SettingSource::NOT_SET:
            return {};
          case SettingSource::CATALOG:
            return "CATALOG";
          case SettingSource::TABLE:
            return "TABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SettingSourceMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
