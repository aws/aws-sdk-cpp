/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/model/OverwriteOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BCMDataExports
  {
    namespace Model
    {
      namespace OverwriteOptionMapper
      {

        static const int CREATE_NEW_REPORT_HASH = HashingUtils::HashString("CREATE_NEW_REPORT");
        static const int OVERWRITE_REPORT_HASH = HashingUtils::HashString("OVERWRITE_REPORT");


        OverwriteOption GetOverwriteOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_NEW_REPORT_HASH)
          {
            return OverwriteOption::CREATE_NEW_REPORT;
          }
          else if (hashCode == OVERWRITE_REPORT_HASH)
          {
            return OverwriteOption::OVERWRITE_REPORT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OverwriteOption>(hashCode);
          }

          return OverwriteOption::NOT_SET;
        }

        Aws::String GetNameForOverwriteOption(OverwriteOption enumValue)
        {
          switch(enumValue)
          {
          case OverwriteOption::NOT_SET:
            return {};
          case OverwriteOption::CREATE_NEW_REPORT:
            return "CREATE_NEW_REPORT";
          case OverwriteOption::OVERWRITE_REPORT:
            return "OVERWRITE_REPORT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OverwriteOptionMapper
    } // namespace Model
  } // namespace BCMDataExports
} // namespace Aws
