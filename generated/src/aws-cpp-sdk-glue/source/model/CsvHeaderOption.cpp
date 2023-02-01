/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CsvHeaderOption.h>
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
      namespace CsvHeaderOptionMapper
      {

        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");
        static const int PRESENT_HASH = HashingUtils::HashString("PRESENT");
        static const int ABSENT_HASH = HashingUtils::HashString("ABSENT");


        CsvHeaderOption GetCsvHeaderOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNKNOWN_HASH)
          {
            return CsvHeaderOption::UNKNOWN;
          }
          else if (hashCode == PRESENT_HASH)
          {
            return CsvHeaderOption::PRESENT;
          }
          else if (hashCode == ABSENT_HASH)
          {
            return CsvHeaderOption::ABSENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CsvHeaderOption>(hashCode);
          }

          return CsvHeaderOption::NOT_SET;
        }

        Aws::String GetNameForCsvHeaderOption(CsvHeaderOption enumValue)
        {
          switch(enumValue)
          {
          case CsvHeaderOption::UNKNOWN:
            return "UNKNOWN";
          case CsvHeaderOption::PRESENT:
            return "PRESENT";
          case CsvHeaderOption::ABSENT:
            return "ABSENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CsvHeaderOptionMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
