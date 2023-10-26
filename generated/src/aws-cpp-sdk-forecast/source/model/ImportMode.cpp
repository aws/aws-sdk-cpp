/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/ImportMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ForecastService
  {
    namespace Model
    {
      namespace ImportModeMapper
      {

        static const int FULL_HASH = HashingUtils::HashString("FULL");
        static const int INCREMENTAL_HASH = HashingUtils::HashString("INCREMENTAL");


        ImportMode GetImportModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FULL_HASH)
          {
            return ImportMode::FULL;
          }
          else if (hashCode == INCREMENTAL_HASH)
          {
            return ImportMode::INCREMENTAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImportMode>(hashCode);
          }

          return ImportMode::NOT_SET;
        }

        Aws::String GetNameForImportMode(ImportMode enumValue)
        {
          switch(enumValue)
          {
          case ImportMode::NOT_SET:
            return {};
          case ImportMode::FULL:
            return "FULL";
          case ImportMode::INCREMENTAL:
            return "INCREMENTAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImportModeMapper
    } // namespace Model
  } // namespace ForecastService
} // namespace Aws
