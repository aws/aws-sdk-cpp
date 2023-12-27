/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CsvSerdeOption.h>
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
      namespace CsvSerdeOptionMapper
      {

        static const int OpenCSVSerDe_HASH = HashingUtils::HashString("OpenCSVSerDe");
        static const int LazySimpleSerDe_HASH = HashingUtils::HashString("LazySimpleSerDe");
        static const int None_HASH = HashingUtils::HashString("None");


        CsvSerdeOption GetCsvSerdeOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OpenCSVSerDe_HASH)
          {
            return CsvSerdeOption::OpenCSVSerDe;
          }
          else if (hashCode == LazySimpleSerDe_HASH)
          {
            return CsvSerdeOption::LazySimpleSerDe;
          }
          else if (hashCode == None_HASH)
          {
            return CsvSerdeOption::None;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CsvSerdeOption>(hashCode);
          }

          return CsvSerdeOption::NOT_SET;
        }

        Aws::String GetNameForCsvSerdeOption(CsvSerdeOption enumValue)
        {
          switch(enumValue)
          {
          case CsvSerdeOption::NOT_SET:
            return {};
          case CsvSerdeOption::OpenCSVSerDe:
            return "OpenCSVSerDe";
          case CsvSerdeOption::LazySimpleSerDe:
            return "LazySimpleSerDe";
          case CsvSerdeOption::None:
            return "None";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CsvSerdeOptionMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
